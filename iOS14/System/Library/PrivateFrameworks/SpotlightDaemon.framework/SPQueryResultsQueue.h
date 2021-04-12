/*
* Generated on Thursday, January 14, 2021 at 2:26:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)sharedInstanceDispatchQueue:(id)arg1 ;
+(id)findResultsQueueWithIdentifier:(id)arg1 ;
-(NSMutableDictionary *)jobs;
-(void)setCanceled:(BOOL)arg1 ;
-(void)setShared:(BOOL)arg1 ;
-(BOOL)shared;
-(BOOL)live;
-(long long)pausedCount;
-(void)_processResults;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setPausedCount:(long long)arg1 ;
-(void)_scheduleWakeupForced:(BOOL)arg1 ;
-(BOOL)canceled;
-(void)_startTracking;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)cancelJob:(id)arg1 ;
-(SIResultQueueRef)siResultsQueue;
-(BOOL)hasPausedResults;
-(void)setJobs:(NSMutableDictionary *)arg1 ;
-(void)setTracked:(BOOL)arg1 ;
-(BOOL)tracked;
-(void)setLive:(BOOL)arg1 ;
-(void)pauseResults;
-(void)resumeResults;
-(void)setSiResultsQueue:(SIResultQueueRef)arg1 ;
-(void)_stopTracking;
-(id)initWithIdentifier:(id)arg1 dispatchQueue:(id)arg2 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)addJob:(id)arg1 ;
-(void)cancel;
-(void)dealloc;
@end

