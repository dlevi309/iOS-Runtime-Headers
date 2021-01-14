/*
* Generated on Thursday, January 14, 2021 at 2:26:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
*/

#import <PhotoAnalysis/PHAWorkerJob.h>

@protocol OS_dispatch_queue;
@class PHAVisionServiceFaceProcessingWorker, NSObject, NSProgress;

@interface PHAContactClassificationJob : PHAWorkerJob {

	BOOL _done;
	PHAVisionServiceFaceProcessingWorker* _faceProcessingWorker;
	unsigned long long _jobScenario;
	NSObject*<OS_dispatch_queue> _backgroundQueue;
	NSProgress* _progress;

}

@property (nonatomic,retain) PHAVisionServiceFaceProcessingWorker * faceProcessingWorker;              //@synthesize faceProcessingWorker=_faceProcessingWorker - In the implementation block
@property (assign,nonatomic) unsigned long long jobScenario;                                           //@synthesize jobScenario=_jobScenario - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> backgroundQueue;                             //@synthesize backgroundQueue=_backgroundQueue - In the implementation block
@property (nonatomic,retain) NSProgress * progress;                                                    //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) BOOL done;                                                                //@synthesize done=_done - In the implementation block
-(BOOL)finished;
-(NSProgress *)progress;
-(BOOL)done;
-(void)setDone:(BOOL)arg1 ;
-(void)setProgress:(NSProgress *)arg1 ;
-(void)setBackgroundQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(float)completionScore;
-(NSObject*<OS_dispatch_queue>)backgroundQueue;
-(BOOL)startProcessingOnWorker:(id)arg1 withError:(id*)arg2 ;
-(BOOL)stopProcessingOnWorker:(id)arg1 withError:(id*)arg2 ;
-(id)initWithFaceProcessingWorker:(id)arg1 jobScenario:(unsigned long long)arg2 ;
-(PHAVisionServiceFaceProcessingWorker *)faceProcessingWorker;
-(void)setFaceProcessingWorker:(PHAVisionServiceFaceProcessingWorker *)arg1 ;
-(unsigned long long)jobScenario;
-(void)setJobScenario:(unsigned long long)arg1 ;
@end

