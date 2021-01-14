/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)debited;
-(void)recordTimeAndRefillIfNeededRaw;
-(long long)numOfRateLimitPolicies;
-(id)initWithPeriodToCountMap:(id)arg1 ;
-(NSDate *)lastRecorded;
-(BOOL)credit;
@end

