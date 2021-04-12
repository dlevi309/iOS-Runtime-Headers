/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <CoreDuet/_CDRateLimiter.h>

@interface _CDRateAndTotalLimiter : _CDRateLimiter {

	long long _totalCount;
	long long _currentTotal;

}

@property (assign) long long currentTotal;              //@synthesize currentTotal=_currentTotal - In the implementation block
@property (readonly) long long totalCount;              //@synthesize totalCount=_totalCount - In the implementation block
-(id)initWithCount:(long long)arg1 perPeriod:(double)arg2 ;
-(long long)totalCount;
-(id)description;
-(BOOL)debited;
-(long long)currentTotal;
-(id)initWithCount:(long long)arg1 perPeriod:(double)arg2 totalCountLimit:(long long)arg3 ;
-(void)setCurrentTotal:(long long)arg1 ;
-(BOOL)credit;
@end

