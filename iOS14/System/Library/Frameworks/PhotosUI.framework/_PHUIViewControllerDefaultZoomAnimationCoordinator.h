/*
* Generated on Thursday, January 14, 2021 at 2:22:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUICore/PXZoomAnimationCoordinator.h>

@class UIViewController;

@interface _PHUIViewControllerDefaultZoomAnimationCoordinator : PXZoomAnimationCoordinator {

	UIViewController* _viewController;

}

@property (nonatomic,retain) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
-(void)setViewController:(UIViewController *)arg1 ;
-(id)init;
-(id)initWithViewController:(id)arg1 ;
-(UIViewController *)viewController;
-(void)animateContentForEndPointType:(long long)arg1 inView:(id)arg2 withLayerType:(long long)arg3 zoomAnimationContext:(id)arg4 ;
-(void)animateContentForEndPointType:(long long)arg1 withZoomAnimationContext:(id)arg2 ;
@end

