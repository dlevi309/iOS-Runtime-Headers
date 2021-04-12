/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXTilingLayout.h>

@class PXOverlayBadgeTileUserData, PXAssetsDataSource, PXIndexPathSet, PXSelectionBadgeTileUserData, PXBasicTileUserData, NSIndexSet;

@interface PXAssetsTilingLayout : PXTilingLayout {

	PXOverlayBadgeTileUserData* _overlayBadgeTileUserData;
	PXAssetsDataSource* _dataSource;
	PXIndexPathSet* _hiddenIndexPaths;
	PXIndexPathSet* _selectedIndexPaths;
	PXIndexPathSet* _draggingIndexPaths;
	unsigned long long _selectionBadgeOptions;
	unsigned long long _badgeOptions;
	unsigned long long _animatedOverlayBehavior;
	PXSelectionBadgeTileUserData* __selectedUserData;
	PXSelectionBadgeTileUserData* __unselectedUserData;
	PXBasicTileUserData* __highlightedDimmingUserData;
	PXBasicTileUserData* __selectedDimmingUserData;
	PXBasicTileUserData* __draggingDimmingUserData;
	NSIndexSet* _additionalAccessoryTileKinds;
	PXSimpleIndexPath _highlightedIndexPath;
	PXSimpleIndexPath _focusedIndexPath;

}

@property (nonatomic,readonly) PXSelectionBadgeTileUserData * _selectedUserData;                                                  //@synthesize _selectedUserData=__selectedUserData - In the implementation block
@property (nonatomic,readonly) PXSelectionBadgeTileUserData * _unselectedUserData;                                                //@synthesize _unselectedUserData=__unselectedUserData - In the implementation block
@property (nonatomic,readonly) PXBasicTileUserData * _highlightedDimmingUserData;                                                 //@synthesize _highlightedDimmingUserData=__highlightedDimmingUserData - In the implementation block
@property (nonatomic,readonly) PXBasicTileUserData * _selectedDimmingUserData;                                                    //@synthesize _selectedDimmingUserData=__selectedDimmingUserData - In the implementation block
@property (nonatomic,readonly) PXBasicTileUserData * _draggingDimmingUserData;                                                    //@synthesize _draggingDimmingUserData=__draggingDimmingUserData - In the implementation block
@property (setter=_setContentTileUserData:,nonatomic,retain) PXOverlayBadgeTileUserData * _overlayBadgeTileUserData;              //@synthesize overlayBadgeTileUserData=_overlayBadgeTileUserData - In the implementation block
@property (nonatomic,retain) NSIndexSet * additionalAccessoryTileKinds;                                                           //@synthesize additionalAccessoryTileKinds=_additionalAccessoryTileKinds - In the implementation block
@property (nonatomic,readonly) PXAssetsDataSource * dataSource;                                                                   //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) PXIndexPathSet * hiddenIndexPaths;                                                                   //@synthesize hiddenIndexPaths=_hiddenIndexPaths - In the implementation block
@property (assign,nonatomic) PXSimpleIndexPath highlightedIndexPath;                                                              //@synthesize highlightedIndexPath=_highlightedIndexPath - In the implementation block
@property (assign,nonatomic) PXSimpleIndexPath focusedIndexPath;                                                                  //@synthesize focusedIndexPath=_focusedIndexPath - In the implementation block
@property (nonatomic,retain) PXIndexPathSet * selectedIndexPaths;                                                                 //@synthesize selectedIndexPaths=_selectedIndexPaths - In the implementation block
@property (nonatomic,retain) PXIndexPathSet * draggingIndexPaths;                                                                 //@synthesize draggingIndexPaths=_draggingIndexPaths - In the implementation block
@property (assign,nonatomic) unsigned long long selectionBadgeOptions;                                                            //@synthesize selectionBadgeOptions=_selectionBadgeOptions - In the implementation block
@property (assign,nonatomic) unsigned long long badgeOptions;                                                                     //@synthesize badgeOptions=_badgeOptions - In the implementation block
@property (assign,nonatomic) unsigned long long animatedOverlayBehavior;                                                          //@synthesize animatedOverlayBehavior=_animatedOverlayBehavior - In the implementation block
-(id)init;
-(id)initWithDataSource:(id)arg1 ;
-(PXAssetsDataSource *)dataSource;
-(BOOL)getGeometry:(out PXTileGeometry*)arg1 group:(out unsigned long long*)arg2 userData:(out id*)arg3 forTileWithIdentifier:(PXTileIdentifier)arg4 ;
-(void)adjustGeometry:(PXTileGeometry*)arg1 forContentTileWithIndexPath:(PXSimpleIndexPath)arg2 ;
-(CGSize)playButtonSizeForItemAtIndexPath:(PXSimpleIndexPath)arg1 contentTileSize:(CGSize)arg2 ;
-(id)description;
-(CGSize)_preferredSelectionBadgeSize;
-(BOOL)getAdditionalAccessoryTileIdentifier:(out PXTileIdentifier*)arg1 outGeometry:(out PXTileGeometry*)arg2 group:(out unsigned long long*)arg3 userData:(out id*)arg4 forTileKind:(unsigned long long)arg5 contentTileGeometry:(const PXTileGeometry*)arg6 indexPath:(PXSimpleIndexPath)arg7 ;
-(double)zPositionOffsetForKind:(unsigned long long)arg1 ;
-(PXSimpleIndexPath)focusedIndexPath;
-(void)setFocusedIndexPath:(PXSimpleIndexPath)arg1 ;
-(void)setSelectedIndexPaths:(PXIndexPathSet *)arg1 ;
-(PXOverlayBadgeTileUserData *)_overlayBadgeTileUserData;
-(void)setHiddenIndexPaths:(PXIndexPathSet *)arg1 ;
-(void)setSelectionBadgeOptions:(unsigned long long)arg1 ;
-(void)setDraggingIndexPaths:(PXIndexPathSet *)arg1 ;
-(void)setAnimatedOverlayBehavior:(unsigned long long)arg1 ;
-(void)enumerateAccessoryTilesForContentTileWithIndexPath:(PXSimpleIndexPath)arg1 geometry:(const PXTileGeometry*)arg2 withOptions:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
-(unsigned long long)selectionBadgeOptions;
-(unsigned long long)animatedOverlayBehavior;
-(BOOL)_getSelectionBadgeTileIdentifier:(out PXTileIdentifier*)arg1 outGeometry:(out PXTileGeometry*)arg2 group:(out unsigned long long*)arg3 userData:(out id*)arg4 forContentTileGeometry:(const PXTileGeometry*)arg5 indexPath:(PXSimpleIndexPath)arg6 ;
-(BOOL)_getPlayButtonTileIdentifier:(out PXTileIdentifier*)arg1 outGeometry:(out PXTileGeometry*)arg2 group:(out unsigned long long*)arg3 userData:(out id*)arg4 forContentTileGeometry:(const PXTileGeometry*)arg5 indexPath:(PXSimpleIndexPath)arg6 ;
-(void)_invalidateAllAnimatedOverlayTiles;
-(BOOL)_getLivePhotoOverlayTileIdentifier:(out PXTileIdentifier*)arg1 outGeometry:(out PXTileGeometry*)arg2 group:(out unsigned long long*)arg3 userData:(out id*)arg4 forContentTileGeometry:(const PXTileGeometry*)arg5 indexPath:(PXSimpleIndexPath)arg6 ;
-(BOOL)_getVideoOverlayTileIdentifier:(out PXTileIdentifier*)arg1 outGeometry:(out PXTileGeometry*)arg2 group:(out unsigned long long*)arg3 userData:(out id*)arg4 forContentTileGeometry:(const PXTileGeometry*)arg5 indexPath:(PXSimpleIndexPath)arg6 ;
-(void)_invalidateAllSelectionTiles;
-(BOOL)_getLoopingVideoOverlayTileIdentifier:(out PXTileIdentifier*)arg1 outGeometry:(out PXTileGeometry*)arg2 group:(out unsigned long long*)arg3 userData:(out id*)arg4 forContentTileGeometry:(const PXTileGeometry*)arg5 indexPath:(PXSimpleIndexPath)arg6 ;
-(BOOL)_getAnimatedImageOverlayTileIdentifier:(out PXTileIdentifier*)arg1 outGeometry:(out PXTileGeometry*)arg2 group:(out unsigned long long*)arg3 userData:(out id*)arg4 forContentTileGeometry:(const PXTileGeometry*)arg5 indexPath:(PXSimpleIndexPath)arg6 ;
-(PXIndexPathSet *)draggingIndexPaths;
-(BOOL)_getDimmingTileIdentifier:(out PXTileIdentifier*)arg1 outGeometry:(out PXTileGeometry*)arg2 group:(out unsigned long long*)arg3 userData:(out id*)arg4 forContentTileGeometry:(const PXTileGeometry*)arg5 indexPath:(PXSimpleIndexPath)arg6 ;
-(BOOL)_getOverlayBadgeTileIdentifier:(out PXTileIdentifier*)arg1 outGeometry:(out PXTileGeometry*)arg2 group:(out unsigned long long*)arg3 userData:(out id*)arg4 forContentTileGeometry:(const PXTileGeometry*)arg5 indexPath:(PXSimpleIndexPath)arg6 ;
-(void)_setContentTileUserData:(id)arg1 ;
-(PXIndexPathSet *)hiddenIndexPaths;
-(PXSelectionBadgeTileUserData *)_selectedUserData;
-(PXSelectionBadgeTileUserData *)_unselectedUserData;
-(PXBasicTileUserData *)_highlightedDimmingUserData;
-(PXBasicTileUserData *)_selectedDimmingUserData;
-(PXBasicTileUserData *)_draggingDimmingUserData;
-(NSIndexSet *)additionalAccessoryTileKinds;
-(void)setAdditionalAccessoryTileKinds:(NSIndexSet *)arg1 ;
-(void)setHighlightedIndexPath:(PXSimpleIndexPath)arg1 ;
-(void)setBadgeOptions:(unsigned long long)arg1 ;
-(PXSimpleIndexPath)highlightedIndexPath;
-(unsigned long long)badgeOptions;
-(PXIndexPathSet *)selectedIndexPaths;
@end

