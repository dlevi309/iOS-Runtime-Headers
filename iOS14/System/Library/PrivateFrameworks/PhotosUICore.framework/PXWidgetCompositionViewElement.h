/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXWidgetCompositionElement.h>
#import <libobjc.A.dylib/PXTileSource.h>
#import <libobjc.A.dylib/PXTilingControllerTransitionDelegate.h>
#import <libobjc.A.dylib/PXTilingControllerScrollDelegate.h>

@class PXBasicTileAnimator, PXWidgetCompositionViewElementLayout, NSMutableSet, PXTilingController, NSString;

@interface PXWidgetCompositionViewElement : PXWidgetCompositionElement <PXTileSource, PXTilingControllerTransitionDelegate, PXTilingControllerScrollDelegate> {

	BOOL _isCheckingInTile;
	PXBasicTileAnimator* __tileAnimator;
	PXWidgetCompositionViewElementLayout* __layout;
	NSMutableSet* __tilesInUse;
	PXTilingController* __tilingController;
	CGPoint __anchorOffset;

}

@property (nonatomic,readonly) PXBasicTileAnimator * _tileAnimator;                         //@synthesize _tileAnimator=__tileAnimator - In the implementation block
@property (nonatomic,readonly) PXWidgetCompositionViewElementLayout * _layout;              //@synthesize _layout=__layout - In the implementation block
@property (nonatomic,readonly) NSMutableSet * _tilesInUse;                                  //@synthesize _tilesInUse=__tilesInUse - In the implementation block
@property (nonatomic,readonly) PXTilingController * _tilingController;                      //@synthesize _tilingController=__tilingController - In the implementation block
@property (assign,setter=_setAnchorOffset:,nonatomic) CGPoint _anchorOffset;                //@synthesize _anchorOffset=__anchorOffset - In the implementation block
@property (assign,nonatomic) BOOL isCheckingInTile;                                         //@synthesize isCheckingInTile=_isCheckingInTile - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PXWidgetCompositionViewElementLayout *)_layout;
-(id)createTileAnimator;
-(void)checkInTile:(void*)arg1 withIdentifier:(PXTileIdentifier)arg2 ;
-(void*)checkOutTileForIdentifier:(PXTileIdentifier)arg1 layout:(id)arg2 ;
-(NSMutableSet *)_tilesInUse;
-(void)checkInViewTile:(id)arg1 ;
-(id)checkOutViewTile;
-(PXBasicTileAnimator *)_tileAnimator;
-(CGPoint)_anchorPoint;
-(void)tilingController:(id)arg1 prepareForChange:(id)arg2 ;
-(id)tilingController:(id)arg1 tileIdentifierConverterForChange:(id)arg2 ;
-(CGPoint)tilingController:(id)arg1 initialVisibleOriginForLayout:(id)arg2 ;
-(void)saveAnchoring;
-(void)_loadTilingController;
-(BOOL)isCheckingInTile;
-(void)setIsCheckingInTile:(BOOL)arg1 ;
-(PXTilingController *)_tilingController;
-(void)_setAnchorOffset:(CGPoint)arg1 ;
-(CGPoint)_anchorOffset;
-(id)contentTilingController;
@end

