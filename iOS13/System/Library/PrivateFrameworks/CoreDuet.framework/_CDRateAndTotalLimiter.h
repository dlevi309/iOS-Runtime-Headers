/*
* Generated on Monday, March 1, 2021 at 2:30:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <CoreDuet/_CDRateLimiter.h>

@interface _CDRateAndTotalLimiter : _CDRateLimiter {

	long long _totalCount;
	long long _currentTotal;

}

@property (assign) long long currentTotal;              //@synthesize currentTotal=_currentTotal - In the implementation block
@property (readonly) long long totalCount;              //@synthesize totalCount=_totalCount - In the implementation block
-(id)description;
-(id)initWithCount:(long long)arg1 perPeriod:(double)arg2 totalCountLimit:(long long)arg3 ;
-(id)initWithCount:(long long)arg1 perPeriod:(double)arg2 ;
-(BOOL)credit;
-(BOOL)debited;
-(long long)totalCount;
-(long long)currentTotal;
-(void)setCurrentTotal:(long long)arg1 ;
@end

