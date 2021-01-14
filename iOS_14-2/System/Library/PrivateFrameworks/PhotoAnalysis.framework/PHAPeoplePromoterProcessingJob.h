/*
* Generated on Thursday, January 14, 2021 at 2:26:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)densityClusteringForObjects:(id)arg1 maximumDistance:(double)arg2 minimumNumberOfObjects:(unsigned long long)arg3 withDistanceBlock:(/*^block*/id)arg4 ;
-(BOOL)finished;
-(PHAVisionServiceFaceProcessingWorker *)worker;
-(NSObject*<OS_dispatch_queue>)backgroundTaskQueue;
-(id)keyFaceForPerson:(id)arg1 qualityMeasureByFace:(id)arg2 updateBlock:(/*^block*/id)arg3 ;
-(void)setFinished:(BOOL)arg1 ;
-(void)setCompletionScore:(float)arg1 ;
-(float)completionScore;
-(id)performSocialGroupsIdentifiersWithPersonClusterManager:(id)arg1 forPersons:(id)arg2 overTheYearsComputation:(BOOL)arg3 updateBlock:(/*^block*/id)arg4 ;
-(void)setBackgroundTaskQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)suggestedMeIdentifierWithPersonClusterManager:(id)arg1 forPersons:(id)arg2 updateBlock:(/*^block*/id)arg3 ;
-(void)setWorker:(PHAVisionServiceFaceProcessingWorker *)arg1 ;
-(id)initWithWorkerType:(short)arg1 scenario:(unsigned long long)arg2 library:(id)arg3 ;
-(BOOL)startProcessingOnWorker:(id)arg1 withError:(id*)arg2 ;
-(BOOL)stopProcessingOnWorker:(id)arg1 withError:(id*)arg2 ;
-(PVPersonPromoter *)personPromoter;
-(void)setPersonPromoter:(PVPersonPromoter *)arg1 ;
@end

