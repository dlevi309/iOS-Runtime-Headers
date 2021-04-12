/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARTechnique.h>

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
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)processData:(id)arg1 ;
-(ARRigEvaluationData*)evaluationRigData;
-(id)_retargetSkeleton:(id)arg1 ;
-(void)setLatestResults:(ARCoreRESkeletonResults *)arg1 ;
-(ARCoreRESkeletonResults *)latestResults;
-(void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2 ;
-(void)setEvaluationRigData:(ARRigEvaluationData*)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)resultSemaphore;
-(void)setResultSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
@end

