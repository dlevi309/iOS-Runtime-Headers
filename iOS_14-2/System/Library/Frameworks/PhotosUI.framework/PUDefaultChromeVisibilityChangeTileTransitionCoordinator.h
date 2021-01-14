/*
* Generated on Thursday, January 14, 2021 at 2:22:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUDefaultTileTransitionCoordinator.h>

@class PUBrowsingViewModel;

@interface PUDefaultChromeVisibilityChangeTileTransitionCoordinator : PUDefaultTileTransitionCoordinator {

	PUBrowsingViewModel* _viewModel;

}

@property (nonatomic,retain) PUBrowsingViewModel * viewModel;              //@synthesize viewModel=_viewModel - In the implementation block
-(PUBrowsingViewModel *)viewModel;
-(void)setViewModel:(PUBrowsingViewModel *)arg1 ;
-(id)optionsForAnimatingTileController:(id)arg1 toLayoutInfo:(id)arg2 withAnimationType:(long long)arg3 ;
@end

