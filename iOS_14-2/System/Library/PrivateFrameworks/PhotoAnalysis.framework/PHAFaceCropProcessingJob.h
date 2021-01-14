/*
* Generated on Thursday, January 14, 2021 at 2:26:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
*/

#import <PhotoAnalysis/PHAVisionServiceFaceProcessingWorkerAdditionalJob.h>
#import <libobjc.A.dylib/PHAFaceCropProcessingJobProcessFaceCropsOperationDelegate.h>

@class NSOperationQueue, PHAFaceCropProcessingJobProcessFaceCropsOperation, NSString;

@interface PHAFaceCropProcessingJob : PHAVisionServiceFaceProcessingWorkerAdditionalJob <PHAFaceCropProcessingJobProcessFaceCropsOperationDelegate> {

	NSOperationQueue* _operationQueue;
	PHAFaceCropProcessingJobProcessFaceCropsOperation* _processingOperation;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(float)completionScore;
-(BOOL)startJob:(id*)arg1 ;
-(BOOL)stopJob:(id*)arg1 ;
-(void)operation:(id)arg1 didProcessFaceCrop:(id)arg2 withError:(id)arg3 ;
-(id)initWithFaceProcessingWorker:(id)arg1 jobScenario:(unsigned long long)arg2 dirtyFaceCrops:(id)arg3 ;
@end

