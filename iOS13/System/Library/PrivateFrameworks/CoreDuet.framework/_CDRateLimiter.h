/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <libobjc.A.dylib/_CDRateLimiting.h>

@protocol OS_dispatch_queue;
@class NSDate, NSObject, NSString;

@interface _CDRateLimiter : NSObject <_CDRateLimiting> {

	NSDate* _lastRecorded;
	long long _balance;
	NSObject*<OS_dispatch_queue> _queue;
	double _period;
	long long _count;

}

@property (readonly) double period;                                 //@synthesize period=_period - In the implementation block
@property (readonly) long long count;                               //@synthesize count=_count - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedRateLimiter;
-(id)init;
-(NSString *)description;
-(long long)count;
-(double)period;
-(id)initWithCount:(long long)arg1 perPeriod:(double)arg2 ;
-(BOOL)credit;
-(BOOL)debited;
-(void)recordTimeAndRefillIfNeeded;
-(void)resetRateLimitWithTimeStamp:(id)arg1 ;
@end

