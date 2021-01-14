/*
* Generated on Thursday, January 14, 2021 at 2:26:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
*/

#import <PhotoAnalysis/PHAWorkerJob.h>

@interface PHAAnalyticsJob : PHAWorkerJob {

	BOOL _complete;
	/*^block*/id _actionBlock;

}

@property (assign,nonatomic) BOOL complete;              //@synthesize complete=_complete - In the implementation block
@property (copy) id actionBlock;                         //@synthesize actionBlock=_actionBlock - In the implementation block
+(id)analyticsJobWithLibrary:(id)arg1 scenario:(unsigned long long)arg2 actionBlock:(/*^block*/id)arg3 ;
-(BOOL)finished;
-(BOOL)complete;
-(id)actionBlock;
-(void)setActionBlock:(id)arg1 ;
-(void)setComplete:(BOOL)arg1 ;
-(float)completionScore;
-(BOOL)startProcessingOnWorker:(id)arg1 withError:(id*)arg2 ;
-(BOOL)stopProcessingOnWorker:(id)arg1 withError:(id*)arg2 ;
-(void)markAsFinishedWithCompletion:(BOOL)arg1 ;
@end

