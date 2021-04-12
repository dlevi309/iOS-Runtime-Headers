/*
* Generated on Thursday, January 14, 2021 at 2:22:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <libobjc.A.dylib/PXUIViewControllerTransitionEndPoint.h>
#import <libobjc.A.dylib/PXUIViewControllerZoomTransitionEndPoint.h>

@class UIViewController, NSString;

@interface _PHUIViewControllerDefaultTransitionEndPoint : NSObject <PXUIViewControllerTransitionEndPoint, PXUIViewControllerZoomTransitionEndPoint> {

	UIViewController* _viewController;

}

@property (nonatomic,__weak,readonly) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,readonly) BOOL keepsSourceRegionOfInterestContent; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)initWithViewController:(id)arg1 ;
-(UIViewController *)viewController;
-(id)zoomAnimationCoordinatorForZoomTransition:(id)arg1 ;
-(id)contentViewForZoomTransition:(id)arg1 ;
-(id)regionOfInterestForTransition:(id)arg1 ;
-(void)preloadWithSourceRegionOfInterest:(id)arg1 forTransition:(id)arg2 ;
-(id)removeBackgroundColorForTransition:(id)arg1 ;
-(void)restoreBackgroundColor:(id)arg1 forTransition:(id)arg2 ;
-(BOOL)keepsSourceRegionOfInterestContent;
@end

