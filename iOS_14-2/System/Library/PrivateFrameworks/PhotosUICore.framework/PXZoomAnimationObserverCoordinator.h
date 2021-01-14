/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXZoomAnimationCoordinator.h>

@protocol PXZoomAnimationObserverCoordinatorDelegate;
@interface PXZoomAnimationObserverCoordinator : PXZoomAnimationCoordinator {

	SCD_Struct_PX59 _delegateRespondsTo;
	id<PXZoomAnimationObserverCoordinatorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PXZoomAnimationObserverCoordinatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<PXZoomAnimationObserverCoordinatorDelegate>)delegate;
-(void)setDelegate:(id<PXZoomAnimationObserverCoordinatorDelegate>)arg1 ;
-(void)animateContentForEndPointType:(long long)arg1 withZoomAnimationContext:(id)arg2 ;
@end

