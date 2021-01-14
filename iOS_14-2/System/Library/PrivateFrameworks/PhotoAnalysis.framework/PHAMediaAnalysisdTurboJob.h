/*
* Generated on Thursday, January 14, 2021 at 2:26:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
*/

#import <PhotoAnalysis/PhotoAnalysis-Structs.h>
#import <PhotoAnalysis/PHAWorkerJob.h>

@class PHPhotoLibrary;

@interface PHAMediaAnalysisdTurboJob : PHAWorkerJob {

	os_unfair_lock_s _lock;
	PHPhotoLibrary* _library;
	int _requestId;
	BOOL _complete;

}
-(BOOL)finished;
-(void)requestCompleted;
-(float)completionScore;
-(id)initWithWorkerType:(short)arg1 scenario:(unsigned long long)arg2 library:(id)arg3 ;
-(BOOL)startProcessingOnWorker:(id)arg1 withError:(id*)arg2 ;
-(BOOL)stopProcessingOnWorker:(id)arg1 withError:(id*)arg2 ;
@end

