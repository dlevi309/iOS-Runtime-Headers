/*
* Generated on Monday, March 1, 2021 at 2:34:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
*/

#import <PhotoAnalysis/PHAWorkerJob.h>
#import <libobjc.A.dylib/PVPersonPromoterDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, PVPersonPromoter, PHAVisionServiceFaceProcessingWorker, NSString;

@interface PHAPeoplePromoterProcessingJob : PHAWorkerJob <PVPersonPromoterDelegate> {

	BOOL _finished;
	float _completionScore;
	NSObject*<OS_dispatch_queue> _backgroundTaskQueue;
	PVPersonPromoter* _personPromoter;
	PHAVisionServiceFaceProcessingWorker* _worker;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> backgroundTaskQueue;                  //@synthesize backgroundTaskQueue=_backgroundTaskQueue - In the implementation block
@property (nonatomic,retain) PVPersonPromoter * personPromoter;                                 //@synthesize personPromoter=_personPromoter - In the implementation block
@property (assign,nonatomic,__weak) PHAVisionServiceFaceProcessingWorker * worker;              //@synthesize worker=_worker - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setFinished:(BOOL)arg1 ;
-(BOOL)finished;
-(PHAVisionServiceFaceProcessingWorker *)worker;
-(void)setCompletionScore:(float)arg1 ;
-(float)completionScore;
-(NSObject*<OS_dispatch_queue>)backgroundTaskQueue;
-(void)setBackgroundTaskQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setWorker:(PHAVisionServiceFaceProcessingWorker *)arg1 ;
-(id)keyFaceForPerson:(id)arg1 qualityMeasureByFace:(id)arg2 updateBlock:(/*^block*/id)arg3 ;
-(id)suggestedMeIdentifierWithPersonClusterManager:(id)arg1 forPersons:(id)arg2 updateBlock:(/*^block*/id)arg3 ;
-(id)performSocialGroupsIdentifiersWithPersonClusterManager:(id)arg1 forPersons:(id)arg2 overTheYearsComputation:(BOOL)arg3 updateBlock:(/*^block*/id)arg4 ;
-(id)densityClusteringForObjects:(id)arg1 maximumDistance:(double)arg2 minimumNumberOfObjects:(unsigned long long)arg3 withDistanceBlock:(/*^block*/id)arg4 ;
-(id)initWithWorkerType:(short)arg1 scenario:(unsigned long long)arg2 library:(id)arg3 ;
-(BOOL)startProcessingOnWorker:(id)arg1 withError:(id*)arg2 ;
-(BOOL)stopProcessingOnWorker:(id)arg1 withError:(id*)arg2 ;
-(PVPersonPromoter *)personPromoter;
-(void)setPersonPromoter:(PVPersonPromoter *)arg1 ;
@end

