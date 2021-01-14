/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXZoomAnimationCoordinator.h>

@protocol PXTilingControllerZoomAnimationCoordinatorDelegate;
@class PXTilingController;

@interface PXTilingControllerZoomAnimationCoordinator : PXZoomAnimationCoordinator {

	PXTilingController* _tilingController;
	id _context;
	id<PXTilingControllerZoomAnimationCoordinatorDelegate> _delegate;

}

@property (nonatomic,readonly) PXTilingController * tilingController;                                             //@synthesize tilingController=_tilingController - In the implementation block
@property (nonatomic,readonly) id context;                                                                        //@synthesize context=_context - In the implementation block
@property (assign,nonatomic,__weak) id<PXTilingControllerZoomAnimationCoordinatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<PXTilingControllerZoomAnimationCoordinatorDelegate>)delegate;
-(id)initWithTilingController:(id)arg1 context:(id)arg2 ;
-(void)_animateTilesPassingTest:(/*^block*/id)arg1 forEndPointType:(long long)arg2 withZoomTransitionContext:(id)arg3 tileGeometryTransformer:(/*^block*/id)arg4 ;
-(void)_animateTilesPassingTest:(/*^block*/id)arg1 fromEndPointType:(long long)arg2 toEndPointType:(long long)arg3 alpha:(double)arg4 transform:(id)arg5 withOptions:(id)arg6 tileGeometryTransformer:(/*^block*/id)arg7 completionHandler:(/*^block*/id)arg8 ;
-(id)context;
-(PXTilingController *)tilingController;
-(void)setDelegate:(id<PXTilingControllerZoomAnimationCoordinatorDelegate>)arg1 ;
-(void)animateContentForEndPointType:(long long)arg1 inView:(id)arg2 withLayerType:(long long)arg3 zoomAnimationContext:(id)arg4 ;
-(void)animateContentForEndPointType:(long long)arg1 withZoomAnimationContext:(id)arg2 ;
-(void)moveTile:(id)arg1 toView:(id)arg2 restorationBlock:(out /*^block*/id*)arg3 ;
@end

