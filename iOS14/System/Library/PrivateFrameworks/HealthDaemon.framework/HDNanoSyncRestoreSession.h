/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class NSUUID, NSDate, NSCalendar, HDNanoSyncStore, NSMutableArray, _HKExpiringCompletionTimer;

@interface HDNanoSyncRestoreSession : NSObject {

	BOOL _finished;
	NSUUID* _sessionUUID;
	NSDate* _startDate;
	NSCalendar* _calendar;
	HDNanoSyncStore* _nanoSyncStore;
	long long _sequenceNumber;
	NSMutableArray* _completionHandlers;
	_HKExpiringCompletionTimer* _timer;

}

@property (nonatomic,retain) NSMutableArray * completionHandlers;              //@synthesize completionHandlers=_completionHandlers - In the implementation block
@property (nonatomic,retain) _HKExpiringCompletionTimer * timer;               //@synthesize timer=_timer - In the implementation block
@property (nonatomic,readonly) NSUUID * sessionUUID;                           //@synthesize sessionUUID=_sessionUUID - In the implementation block
@property (nonatomic,readonly) NSDate * startDate;                             //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSCalendar * calendar;                          //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,readonly) HDNanoSyncStore * nanoSyncStore;                //@synthesize nanoSyncStore=_nanoSyncStore - In the implementation block
@property (getter=isFinished,nonatomic,readonly) BOOL finished;                //@synthesize finished=_finished - In the implementation block
@property (assign,nonatomic) long long sequenceNumber;                         //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
-(_HKExpiringCompletionTimer *)timer;
-(void)addCompletionHandler:(/*^block*/id)arg1 ;
-(void)setSequenceNumber:(long long)arg1 ;
-(void)setTimer:(_HKExpiringCompletionTimer *)arg1 ;
-(NSUUID *)sessionUUID;
-(void)setCompletionHandlers:(NSMutableArray *)arg1 ;
-(NSDate *)startDate;
-(void)_finishWithError:(id)arg1 ;
-(NSCalendar *)calendar;
-(long long)sequenceNumber;
-(BOOL)isFinished;
-(NSMutableArray *)completionHandlers;
-(void)finishWithError:(id)arg1 ;
-(void)dealloc;
-(HDNanoSyncStore *)nanoSyncStore;
-(id)initWithSyncStore:(id)arg1 sessionUUID:(id)arg2 ;
-(void)scheduleTimeoutWithInterval:(double)arg1 handler:(/*^block*/id)arg2 ;
@end

