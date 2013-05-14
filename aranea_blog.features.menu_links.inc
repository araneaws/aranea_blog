<?php
/**
 * @file
 * aranea_blog.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function aranea_blog_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation:admin/content
  $menu_links['navigation:admin/content'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'admin/content',
    'router_path' => 'admin/content',
    'link_title' => 'Manage Post',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage your earlier post.',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Manage Post');


  return $menu_links;
}
