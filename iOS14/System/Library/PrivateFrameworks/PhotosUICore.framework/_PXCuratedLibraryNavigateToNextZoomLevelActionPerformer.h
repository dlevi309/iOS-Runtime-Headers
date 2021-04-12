/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXCuratedLibraryActionPerformer.h>

@class PXGLayout, PXGSpriteReference;

@interface _PXCuratedLibraryNavigateToNextZoomLevelActionPerformer : PXCuratedLibraryActionPerformer {

	PXGLayout* _layout;
	PXGSpriteReference* _hitSpriteReference;

}

@property (nonatomic,readonly) PXGLayout * layout;                                   //@synthesize layout=_layout - In the implementation block
@property (nonatomic,readonly) PXGSpriteReference * hitSpriteReference;              //@synthesize hitSpriteReference=_hitSpriteReference - In the implementation block
-(void)performUserInteractionTask;
-(id)initWithActionType:(id)arg1 viewModel:(id)arg2 ;
-(id)initWithActionType:(id)arg1 viewModel:(id)arg2 layout:(id)arg3 hitSpriteReference:(id)arg4 ;
-(PXGSpriteReference *)hitSpriteReference;
-(PXGLayout *)layout;
@end

