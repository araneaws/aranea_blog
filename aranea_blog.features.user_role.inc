<?php
/**
 * @file
 * aranea_blog.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function aranea_blog_user_default_roles() {
  $roles = array();

  // Exported role: admin.
  $roles['admin'] = array(
    'name' => 'admin',
    'weight' => 2,
  );

  return $roles;
}
