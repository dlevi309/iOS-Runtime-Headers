/*
* Generated on Thursday, January 14, 2021 at 2:22:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUDefaultTileTransitionCoordinator.h>

@class PUBrowsingViewModel;

@interface PUDefaultAccessoryViewVisibilityChangeTileTransitionCoordinator : PUDefaultTileTransitionCoordinator {

	BOOL _shouldAnimateContent;
	BOOL _shouldAnimateAccessory;
	BOOL _shouldSlideAccessory;
	PUBrowsingViewModel* _viewModel;

}

@property (nonatomic,retain) PUBrowsingViewModel * viewModel;              //@synthesize viewModel=_viewModel - In the implementation block
@property (assign,nonatomic) BOOL shouldAnimateContent;                    //@synthesize shouldAnimateContent=_shouldAnimateContent - In the implementation block
@property (assign,nonatomic) BOOL shouldAnimateAccessory;                  //@synthesize shouldAnimateAccessory=_shouldAnimateAccessory - In the implementation block
@property (assign,nonatomic) BOOL shouldSlideAccessory;                    //@synthesize shouldSlideAccessory=_shouldSlideAccessory - In the implementation block
-(PUBrowsingViewModel *)viewModel;
-(id)_layoutInfoWithDefaultDisappearance:(id)arg1 ;
-(BOOL)shouldAnimateContent;
-(void)setShouldAnimateContent:(BOOL)arg1 ;
-(BOOL)shouldAnimateAccessory;
-(void)setShouldAnimateAccessory:(BOOL)arg1 ;
-(BOOL)shouldSlideAccessory;
-(void)setShouldSlideAccessory:(BOOL)arg1 ;
-(void)setViewModel:(PUBrowsingViewModel *)arg1 ;
-(id)optionsForAnimatingTileController:(id)arg1 toLayoutInfo:(id)arg2 withAnimationType:(long long)arg3 ;
@end

