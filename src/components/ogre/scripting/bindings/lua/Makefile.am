SUBDIRS =  ogre helpers

SUFFIXES: .cxx .pkg .lo .la .cpp .o .obj

.pkg.cxx:
	cd $(srcdir) && TOLUAXX=${TOLUAXX} $(abs_top_srcdir)/scripts/update_lua_bindings.sh `basename $@ .cxx` `basename $@ .cxx`.pkg $(abs_builddir)/`basename $@` $<

INCLUDES = -I$(top_srcdir)/src -I$(srcdir) -I$(top_builddir)/src -DPREFIX=\"@prefix@\"

noinst_LIBRARIES = liblua_EmberOgre.a
liblua_EmberOgre_a_SOURCES = EmberOgre.cxx

CLEANFILES = EmberOgre.cxx
TOLUA_PKGS = ActionBar.pkg ActionBarIcon.pkg ActionBarIconDragDropTarget.pkg ActionBarIconSlot.pkg ActionBarIconManager.pkg AssetsManager.pkg AtlasHelper.pkg AtlasObjectDecoder.pkg AuthoringManager.pkg Avatar.pkg Carpenter.pkg ColouredListItem.pkg Compass.pkg \
 ConsoleAdapter.pkg Convert.pkg EmberEntity.pkg EmberEntityFactory.pkg EmberOgre.pkg EntityCEGUITexture.pkg EntityCreator.pkg EntityEditor.pkg EntityIcon.pkg \
  EntityIconDragDropTarget.pkg EntityIconDragDropPreview.pkg EntityIconManager.pkg EntityIconSlot.pkg EntityMoveManager.pkg EntityRecipe.pkg EntityRecipeManager.pkg EntityWorldPickListener.pkg \
  Environment.pkg GUIAdapter.pkg GUIManager.pkg Icon.pkg IconBar.pkg IconBase.pkg IconManager.pkg IGraphicalRepresentation.pkg ISceneManagerAdapter.pkg \
  IWorldPickListener.pkg Jesus.pkg ListHolder.pkg MainCamera.pkg Map.pkg MaterialPicker.pkg Model.pkg ModelDefinition.pkg ModelDefinitionAtlasComposer.pkg \
  ModelDefinitionManager.pkg ModelRenderer.pkg ModelRepresentation.pkg ModelRepresentationManager.pkg MotionManager.pkg MousePicker.pkg MovableObjectRenderer.pkg \
  MovementController.pkg OgreEntityRenderer.pkg OgreInfo.pkg QuaternionAdapter.pkg QuickHelpCursor.pkg RawTypeInfoRepository.pkg ResourceListAdapter.pkg sigc.pkg SimpleRenderContext.pkg \
  StackableContainer.pkg stdlib.pkg SubModel.pkg TerrainArea.pkg TerrainEditor.pkg TerrainLayerDefinition.pkg TerrainLayerDefinitionManager.pkg TerrainManager.pkg \
  TypeTreeAdapter.pkg Vector3Adapter.pkg Widget.pkg World.pkg Scene.pkg EntityTooltip.pkg TerrainHandler.pkg EntityCreatorTypeHelper.pkg Screen.pkg ModelEditHelper.pkg \
  EntityTextureManipulator.pkg
EXTRA_DIST = $(TOLUA_PKGS)
EmberOgre.cxx: $(TOLUA_PKGS)
noinst_HEADERS = required.h GUIManager_helper.h

bindings: clean all
