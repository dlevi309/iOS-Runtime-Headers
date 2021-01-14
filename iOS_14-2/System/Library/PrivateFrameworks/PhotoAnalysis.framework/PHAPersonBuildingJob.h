/*
* Generated on Thursday, January 14, 2021 at 2:26:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
*/

#import <PhotoAnalysis/PHAVisionServiceFaceProcessingWorkerAdditionalJob.h>
#import <libobjc.A.dylib/PHAPersonBuildingJobOperationDelegate.h>

@class NSOperationQueue, PHAPersonBuildingJobOperation, NSString;

@interface PHAPersonBuildingJob : PHAVisionServiceFaceProcessingWorkerAdditionalJob <PHAPersonBuildingJobOperationDelegate> {

	NSOperationQueue* _operationQueue;
	PHAPersonBuildingJobOperation* _personBuildingOperation;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)operationDidProgress:(id)arg1 ;
-(float)completionScore;
-(id)initWithFaceProcessingWorker:(id)arg1 jobScenario:(unsigned long long)arg2 ;
-(BOOL)startJob:(id*)arg1 ;
-(BOOL)stopJob:(id*)arg1 ;
@end

