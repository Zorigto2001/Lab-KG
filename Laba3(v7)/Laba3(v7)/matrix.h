#pragma once

#include <vector>
#include <numbers>

typedef std::vector<float> Row;

constexpr float pi = 3.14;

class Matrix : public std::vector<std::vector<float>>
{
public:
	Matrix(uint32_t rows, uint32_t columns);
	Matrix(std::initializer_list<std::vector<float>> matrix);

	const Matrix operator*(const Matrix &obj) const;

private:
	uint32_t rows_;
	uint32_t columns_;
};
