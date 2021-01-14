/*
* Generated on Thursday, January 14, 2021 at 2:22:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUTileTransitionCoordinator.h>

@class NSNumber;

@interface PUDefaultTileTransitionCoordinator : PUTileTransitionCoordinator {

	NSNumber* _animationDuration;

}

@property (nonatomic,copy) NSNumber * animationDuration;              //@synthesize animationDuration=_animationDuration - In the implementation block
-(NSNumber *)animationDuration;
-(id)initialLayoutInfoForAppearingTileController:(id)arg1 toLayoutInfo:(id)arg2 ;
-(void)configureOptions:(id)arg1 forSpringAnimationsZommingIn:(BOOL)arg2 ;
-(id)_layoutInfoWithDefaultDisappearance:(id)arg1 ;
-(CGAffineTransform)_adjustDefaultDisappearanceTransform:(CGAffineTransform)arg1 ;
-(id)finalLayoutInfoForDisappearingTileController:(id)arg1 fromLayoutInfo:(id)arg2 ;
-(id)optionsForAnimatingTileController:(id)arg1 toLayoutInfo:(id)arg2 withAnimationType:(long long)arg3 ;
-(void)setAnimationDuration:(NSNumber *)arg1 ;
@end

