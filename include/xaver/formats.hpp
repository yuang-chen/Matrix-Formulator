/**
 * @file formats.hpp
 * @author YuAng 
 * @brief
 * @version 0.1
 * @date 2022-10-30
 *
 * @copyright Copyright (c) 2022
 *
 */

#pragma once

namespace xaver{

// Forward decleration
template <typename index_t,
          typename nz_size_t,
          typename value_t>
struct coo_t;

template <typename index_t,
          typename offset_t,
          typename value_t>
struct csr_t;

template <typename index_t,
          typename offset_t,
          typename value_t>
struct csc_t;

} // namespace xaver