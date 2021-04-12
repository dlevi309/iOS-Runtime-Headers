/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <libobjc.A.dylib/_CDRateLimiting.h>

@protocol OS_dispatch_queue;
@class NSObject, NSDate, NSArray, NSMutableArray, NSString;

@interface _CDMultiLevelRateLimiter : NSObject <_CDRateLimiting> {

	NSObject*<OS_dispatch_queue> _queue;
	NSDate* _lastRecorded;
	long long _numberOfRateLimitPolicies;
	NSArray* _periods;
	NSMutableArray* _periodStart;
	NSArray* _maxCounts;
	NSMutableArray* _balances;

}

@property (nonatomic,retain,readonly) NSDate * lastRecorded;                  //@synthesize lastRecorded=_lastRecorded - In the implementation block
@property (nonatomic,readonly) long long numOfRateLimitPolicies;              //@synthesize numberOfRateLimitPolicies=_numberOfRateLimitPolicies - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)description;
-(BOOL)credit;
-(BOOL)debited;
-(void)recordTimeAndRefillIfNeededRaw;
-(id)initWithPeriodToCountMap:(id)arg1 ;
-(NSDate *)lastRecorded;
-(long long)numOfRateLimitPolicies;
@end

