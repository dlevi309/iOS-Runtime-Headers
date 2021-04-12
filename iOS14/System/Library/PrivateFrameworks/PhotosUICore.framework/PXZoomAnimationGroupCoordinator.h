/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXZoomAnimationCoordinator.h>

@class NSArray;

@interface PXZoomAnimationGroupCoordinator : PXZoomAnimationCoordinator {

	NSArray* _zoomAnimationCoordinators;

}

@property (nonatomic,copy,readonly) NSArray * zoomAnimationCoordinators;              //@synthesize zoomAnimationCoordinators=_zoomAnimationCoordinators - In the implementation block
-(id)init;
-(void)animateContentForEndPointType:(long long)arg1 inView:(id)arg2 withLayerType:(long long)arg3 zoomAnimationContext:(id)arg4 ;
-(void)animateContentForEndPointType:(long long)arg1 withZoomAnimationContext:(id)arg2 ;
-(id)initWithZoomAnimationCoordinators:(id)arg1 ;
-(NSArray *)zoomAnimationCoordinators;
@end

