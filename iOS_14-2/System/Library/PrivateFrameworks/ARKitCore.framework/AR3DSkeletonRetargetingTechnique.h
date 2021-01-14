/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <ARKitCore/ARTechnique.h>

@protocol OS_dispatch_semaphore;
@class NSUUID, ARCoreRESkeletonResults, NSObject;

@interface AR3DSkeletonRetargetingTechnique : ARTechnique {

	NSUUID* _skeletonIdentifier;
	ARCoreRESkeletonResults* _latestResults;
	NSObject*<OS_dispatch_semaphore> _resultSemaphore;
	ARRigEvaluationData* _evaluationRigData;

}

@property (nonatomic,retain) ARCoreRESkeletonResults * latestResults;                       //@synthesize latestResults=_latestResults - In the implementation block
@property (assign,nonatomic) ARRigEvaluationData* evaluationRigData;                        //@synthesize evaluationRigData=_evaluationRigData - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> resultSemaphore;              //@synthesize resultSemaphore=_resultSemaphore - In the implementation block
-(id)processData:(id)arg1 ;
-(id)init;
-(void)setLatestResults:(ARCoreRESkeletonResults *)arg1 ;
-(ARCoreRESkeletonResults *)latestResults;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(ARRigEvaluationData*)evaluationRigData;
-(id)_retargetSkeleton:(id)arg1 ;
-(void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2 ;
-(void)setEvaluationRigData:(ARRigEvaluationData*)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)resultSemaphore;
-(void)setResultSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
@end

