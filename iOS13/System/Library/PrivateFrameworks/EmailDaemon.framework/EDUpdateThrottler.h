/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(os_unfair_lock_s)instanceLock;
+(void)resetAllInstances;
+(id)instances;
+(void)_registerInstance:(id)arg1 ;
-(void)dealloc;
-(NSString *)name;
-(void)_reset;
-(NSDate *)lastUpdateDate;
-(void)setLastUpdateDate:(NSDate *)arg1 ;
-(long long)scalingFactor;
-(double)delayInterval;
-(id)initWithName:(id)arg1 delayInterval:(double)arg2 resumable:(id)arg3 ;
-(unsigned long long)unacknowledgedUpdatesCountAndTimeSinceLastAcknowledgement:(double*)arg1 ;
-(id)updateWithBlock:(/*^block*/id)arg1 unacknowledgedUpdatesCount:(unsigned long long*)arg2 ;
-(id)initWithName:(id)arg1 delayInterval:(double)arg2 scalingFactor:(long long)arg3 ;
-(id)initWithDelayInterval:(double)arg1 scalingFactor:(long long)arg2 ;
-(long long)updateCounter;
-(void)setUpdateCounter:(long long)arg1 ;
-(void)setHasChangesSinceLastUpdate:(BOOL)arg1 ;
-(EFDebouncer *)resumeClientDebouncer;
-(void)setLastAcknowledgementDate:(NSDate *)arg1 ;
-(BOOL)hasChangesSinceLastUpdate;
-(NSDate *)lastAcknowledgementDate;
-(id<EDResumable>)resumable;
-(void)setResumable:(id<EDResumable>)arg1 ;
-(void)setResumeClientDebouncer:(EFDebouncer *)arg1 ;
-(id<EFScheduler>)resumeClientScheduler;
-(void)setResumeClientScheduler:(id<EFScheduler>)arg1 ;
@end

