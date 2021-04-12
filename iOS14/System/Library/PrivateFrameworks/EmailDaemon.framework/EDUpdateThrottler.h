/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/


@protocol EDResumable, EFScheduler;
#import <EmailDaemon/EmailDaemon-Structs.h>
@class NSMutableArray, NSString, NSDate, EFDebouncer;

@interface EDUpdateThrottler : NSObject {

	os_unfair_lock_s _updatesLock;
	NSMutableArray* _unacknowledgedUpdates;
	BOOL _hasChangesSinceLastUpdate;
	NSString* _name;
	double _delayInterval;
	long long _scalingFactor;
	NSDate* _lastUpdateDate;
	NSDate* _lastAcknowledgementDate;
	long long _updateCounter;
	id<EDResumable> _resumable;
	EFDebouncer* _resumeClientDebouncer;
	id<EFScheduler> _resumeClientScheduler;

}

@property (nonatomic,copy,readonly) NSString * name;                             //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) double delayInterval;                             //@synthesize delayInterval=_delayInterval - In the implementation block
@property (nonatomic,readonly) long long scalingFactor;                          //@synthesize scalingFactor=_scalingFactor - In the implementation block
@property (assign,nonatomic) BOOL hasChangesSinceLastUpdate;                     //@synthesize hasChangesSinceLastUpdate=_hasChangesSinceLastUpdate - In the implementation block
@property (nonatomic,retain) NSDate * lastUpdateDate;                            //@synthesize lastUpdateDate=_lastUpdateDate - In the implementation block
@property (nonatomic,retain) NSDate * lastAcknowledgementDate;                   //@synthesize lastAcknowledgementDate=_lastAcknowledgementDate - In the implementation block
@property (assign,nonatomic) long long updateCounter;                            //@synthesize updateCounter=_updateCounter - In the implementation block
@property (nonatomic,retain) id<EDResumable> resumable;                          //@synthesize resumable=_resumable - In the implementation block
@property (nonatomic,retain) EFDebouncer * resumeClientDebouncer;                //@synthesize resumeClientDebouncer=_resumeClientDebouncer - In the implementation block
@property (nonatomic,retain) id<EFScheduler> resumeClientScheduler;              //@synthesize resumeClientScheduler=_resumeClientScheduler - In the implementation block
+(void)_registerInstance:(id)arg1 ;
+(void)resetAllInstances;
+(id)instances;
-(NSDate *)lastUpdateDate;
-(BOOL)hasChangesSinceLastUpdate;
-(void)setResumable:(id<EDResumable>)arg1 ;
-(void)setLastUpdateDate:(NSDate *)arg1 ;
-(void)setHasChangesSinceLastUpdate:(BOOL)arg1 ;
-(void)setResumeClientScheduler:(id<EFScheduler>)arg1 ;
-(void)setLastAcknowledgementDate:(NSDate *)arg1 ;
-(long long)scalingFactor;
-(void)setUpdateCounter:(long long)arg1 ;
-(NSString *)name;
-(id)updateWithBlock:(/*^block*/id)arg1 unacknowledgedUpdatesCount:(unsigned long long*)arg2 ;
-(id)initWithName:(id)arg1 delayInterval:(double)arg2 scalingFactor:(long long)arg3 ;
-(EFDebouncer *)resumeClientDebouncer;
-(void)setResumeClientDebouncer:(EFDebouncer *)arg1 ;
-(unsigned long long)unacknowledgedUpdatesCountAndTimeSinceLastAcknowledgement:(double*)arg1 ;
-(id)initWithName:(id)arg1 delayInterval:(double)arg2 resumable:(id)arg3 ;
-(long long)updateCounter;
-(double)delayInterval;
-(void)_reset;
-(id)initWithDelayInterval:(double)arg1 scalingFactor:(long long)arg2 ;
-(id<EFScheduler>)resumeClientScheduler;
-(id<EDResumable>)resumable;
-(NSDate *)lastAcknowledgementDate;
-(void)dealloc;
@end

