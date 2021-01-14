/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)maximum;
-(NSObject*<OS_dispatch_queue>)vacuumQueue;
-(double)timeInterval;
-(id)initWithMaximum:(unsigned long long)arg1 inTimeInterval:(double)arg2 ;
-(NSObject*<OS_dispatch_queue>)instanceQueue;
-(BOOL)reservePerformActionForKey:(id)arg1 ;
-(void)vacuumIfNeeded;
-(NSDate *)nextVacuumDate;
-(void)setKeyToSimpleRateLimiter:(NSMutableDictionary *)arg1 ;
-(id)simpleRateLimiterForKey:(id)arg1 ;
-(NSMutableDictionary *)keyToSimpleRateLimiter;
-(void)setIsVacuumInProgress:(BOOL)arg1 ;
-(void)_vacuumQueue_vacuum;
-(BOOL)isVacuumInProgress;
-(double)vacuumTimeInterval;
-(void)setNextVacuumDate:(NSDate *)arg1 ;
-(BOOL)_vacuumQueue_vacuumKey:(id)arg1 ;
@end

