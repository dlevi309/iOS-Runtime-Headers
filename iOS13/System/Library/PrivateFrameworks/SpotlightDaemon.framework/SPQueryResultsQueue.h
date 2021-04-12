/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/SpotlightDaemon
*/


@protocol OS_dispatch_queue;
#import <SpotlightDaemon/SpotlightDaemon-Structs.h>
@class NSString, NSMutableDictionary, NSObject;

@interface SPQueryResultsQueue : NSObject {

	BOOL _canceled;
	BOOL _tracked;
	BOOL _live;
	BOOL _shared;
	NSString* _identifier;
	SIResultQueueRef _siResultsQueue;
	NSMutableDictionary* _jobs;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	long long _pausedCount;

}

@property (nonatomic,retain) NSString * identifier;                                   //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) SIResultQueueRef siResultsQueue;                         //@synthesize siResultsQueue=_siResultsQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * jobs;                              //@synthesize jobs=_jobs - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (assign,nonatomic) long long pausedCount;                                   //@synthesize pausedCount=_pausedCount - In the implementation block
@property (assign,nonatomic) BOOL canceled;                                           //@synthesize canceled=_canceled - In the implementation block
@property (assign,nonatomic) BOOL tracked;                                            //@synthesize tracked=_tracked - In the implementation block
@property (assign,nonatomic) BOOL live;                                               //@synthesize live=_live - In the implementation block
@property (assign,nonatomic) BOOL shared;                                             //@synthesize shared=_shared - In the implementation block
@property (readonly) BOOL hasPausedResults; 
+(void)startTrackingResultsQueue:(id)arg1 ;
+(void)stopTrackingResultsQueueWithIdentifier:(id)arg1 ;
+(id)findResultsQueueWithIdentifier:(id)arg1 ;
+(id)sharedInstanceDispatchQueue:(id)arg1 ;
-(void)dealloc;
-(NSString *)identifier;
-(void)cancel;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(BOOL)canceled;
-(void)setCanceled:(BOOL)arg1 ;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)shared;
-(void)setShared:(BOOL)arg1 ;
-(void)cancelJob:(id)arg1 ;
-(void)setLive:(BOOL)arg1 ;
-(NSMutableDictionary *)jobs;
-(BOOL)live;
-(void)setJobs:(NSMutableDictionary *)arg1 ;
-(BOOL)tracked;
-(id)initWithIdentifier:(id)arg1 dispatchQueue:(id)arg2 ;
-(void)_startTracking;
-(void)_scheduleWakeupForced:(BOOL)arg1 ;
-(BOOL)hasPausedResults;
-(void)_stopTracking;
-(void)addJob:(id)arg1 ;
-(void)pauseResults;
-(void)resumeResults;
-(void)_processResults;
-(SIResultQueueRef)siResultsQueue;
-(void)setSiResultsQueue:(SIResultQueueRef)arg1 ;
-(long long)pausedCount;
-(void)setPausedCount:(long long)arg1 ;
-(void)setTracked:(BOOL)arg1 ;
@end

