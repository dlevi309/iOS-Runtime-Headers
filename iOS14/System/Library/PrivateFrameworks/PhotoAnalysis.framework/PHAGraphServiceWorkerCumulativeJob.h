/*
* Generated on Thursday, January 14, 2021 at 2:26:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
*/

#import <PhotoAnalysis/PHAGraphServiceWorkerGraphUpdateJob.h>

@class PHAGraphServiceWorker;

@interface PHAGraphServiceWorkerCumulativeJob : PHAGraphServiceWorkerGraphUpdateJob {

	PHAGraphServiceWorker* _worker;

}

@property (assign,nonatomic,__weak) PHAGraphServiceWorker * worker;              //@synthesize worker=_worker - In the implementation block
+(id)graphUpdateJobWithLibrary:(id)arg1 scenario:(unsigned long long)arg2 label:(id)arg3 updateBlock:(/*^block*/id)arg4 ;
-(long long)executionContext;
-(PHAGraphServiceWorker *)worker;
-(void)setWorker:(PHAGraphServiceWorker *)arg1 ;
-(void)prepareProcessingForWorker:(id)arg1 ;
-(void)additionalWorkAfterUpdate;
@end

