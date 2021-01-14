/*
* Generated on Thursday, January 14, 2021 at 2:26:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
*/

#import <PhotoAnalysis/PHAWorkerJob.h>

@class PHAVisionServiceFaceProcessingWorker;

@interface PHAVisionServiceFaceProcessingWorkerAdditionalJob : PHAWorkerJob {

	PHAVisionServiceFaceProcessingWorker* _faceProcessingWorker;
	unsigned long long _jobScenario;
	BOOL _isFinished;

}
-(void)markAsFinished;
-(BOOL)finished;
-(id)photoLibrary;
-(BOOL)startProcessingOnWorker:(id)arg1 withError:(id*)arg2 ;
-(BOOL)stopProcessingOnWorker:(id)arg1 withError:(id*)arg2 ;
-(id)initWithFaceProcessingWorker:(id)arg1 jobScenario:(unsigned long long)arg2 ;
-(BOOL)startJob:(id*)arg1 ;
-(BOOL)stopJob:(id*)arg1 ;
-(id)faceProcessingWorker;
-(unsigned long long)jobScenario;
@end

