/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSDate;

@interface ACRateLimiter : NSObject {

	BOOL _isVacuumInProgress;
	unsigned long long _maximum;
	double _timeInterval;
	NSObject*<OS_dispatch_queue> _instanceQueue;
	NSObject*<OS_dispatch_queue> _vacuumQueue;
	NSMutableDictionary* _keyToSimpleRateLimiter;
	double _vacuumTimeInterval;
	NSDate* _nextVacuumDate;

}

@property (readonly) NSObject*<OS_dispatch_queue> instanceQueue;              //@synthesize instanceQueue=_instanceQueue - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> vacuumQueue;                //@synthesize vacuumQueue=_vacuumQueue - In the implementation block
@property (retain) NSMutableDictionary * keyToSimpleRateLimiter;              //@synthesize keyToSimpleRateLimiter=_keyToSimpleRateLimiter - In the implementation block
@property (readonly) double vacuumTimeInterval;                               //@synthesize vacuumTimeInterval=_vacuumTimeInterval - In the implementation block
@property (assign) BOOL isVacuumInProgress;                                   //@synthesize isVacuumInProgress=_isVacuumInProgress - In the implementation block
@property (retain) NSDate * nextVacuumDate;                                   //@synthesize nextVacuumDate=_nextVacuumDate - In the implementation block
@property (readonly) unsigned long long maximum;                              //@synthesize maximum=_maximum - In the implementation block
@property (readonly) double timeInterval;                                     //@synthesize timeInterval=_timeInterval - In the implementation block
-(double)timeInterval;
-(unsigned long long)maximum;
-(id)initWithMaximum:(unsigned long long)arg1 inTimeInterval:(double)arg2 ;
-(id)simpleRateLimiterForKey:(id)arg1 ;
-(void)vacuumIfNeeded;
-(NSObject*<OS_dispatch_queue>)instanceQueue;
-(NSMutableDictionary *)keyToSimpleRateLimiter;
-(BOOL)isVacuumInProgress;
-(NSDate *)nextVacuumDate;
-(void)setIsVacuumInProgress:(BOOL)arg1 ;
-(void)_vacuumQueue_vacuum;
-(double)vacuumTimeInterval;
-(void)setNextVacuumDate:(NSDate *)arg1 ;
-(BOOL)_vacuumQueue_vacuumKey:(id)arg1 ;
-(BOOL)reservePerformActionForKey:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)vacuumQueue;
-(void)setKeyToSimpleRateLimiter:(NSMutableDictionary *)arg1 ;
@end

