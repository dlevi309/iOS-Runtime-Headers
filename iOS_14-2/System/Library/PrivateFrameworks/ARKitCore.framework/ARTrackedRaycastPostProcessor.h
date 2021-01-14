/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/


#import <ARKitCore/ARKitCore-Structs.h>
@class ARSession, NSArray;

@interface ARTrackedRaycastPostProcessor : NSObject {

	ARSession* _session;

}

@property (__weak) ARSession * session;                                //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) NSArray * trackedRaycasts; 
-(id)initWithSession:(id)arg1 ;
-(ARSession *)session;
-(void)setSession:(ARSession *)arg1 ;
-(void)dealloc;
-(void)processInitialResults:(id)arg1 forRaycast:(id)arg2 ;
-(void)invalidateRaycastWithIdentifier:(id)arg1 ;
-(BOOL)result:(id)arg1 isCloseEnoughToInitialResultForRaycast:(id)arg2 ;
-(void)startUpdateTimer;
-(SCD_Struct_AR1)updatePose:(SCD_Struct_AR1)arg1 referenceOriginTransform:(SCD_Struct_AR1)arg2 oldRayOrigin:(double)arg3 oldRayDirection:(double)arg4 newRayOrigin:(double)arg5 newRayDirection:(double)arg6 ;
-(void)updateFromTimer:(id)arg1 ;
-(NSArray *)trackedRaycasts;
-(void)addTrackedRaycast:(id)arg1 andProcessInitialResults:(id)arg2 ;
-(void)removeTrackedRaycastWithIdentifier:(id)arg1 ;
-(void)invalidateAllRaycasts;
-(void)processUpdatedResults:(id)arg1 ;
-(void)performBlockWhileLockingRaycasts:(/*^block*/id)arg1 ;
-(void)updateFromPoseGraphEventWithData:(id)arg1 referenceOriginTransform:(SCD_Struct_AR1)arg2 ;
@end

