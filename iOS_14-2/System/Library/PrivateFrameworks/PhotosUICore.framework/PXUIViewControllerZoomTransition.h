/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXUIViewControllerTransition.h>

@interface PXUIViewControllerZoomTransition : PXUIViewControllerTransition
+(id)_leafViewControllerForTransitionWithViewController:(id)arg1 ;
+(BOOL)isTransitionSupportedWithMasterViewController:(id)arg1 detailViewController:(id)arg2 ;
-(void)animateTransition:(id)arg1 ;
-(double)transitionDuration:(id)arg1 ;
-(BOOL)supportsEdgeSwipeBackGesture;
-(long long)transitionIdentifierForTransitionMode:(unsigned long long)arg1 ;
-(void)animateZoomTransition:(id)arg1 withInitialVelocity:(PXDisplayVelocity)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

