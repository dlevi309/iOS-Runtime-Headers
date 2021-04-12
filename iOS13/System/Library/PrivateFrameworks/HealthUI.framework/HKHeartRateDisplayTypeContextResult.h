/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@class HKStatistics;

@interface HKHeartRateDisplayTypeContextResult : NSObject {

	long long _context;
	HKStatistics* _statistics;

}

@property (assign,nonatomic) long long context;                      //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) HKStatistics * statistics;              //@synthesize statistics=_statistics - In the implementation block
-(id)debugDescription;
-(long long)context;
-(void)setContext:(long long)arg1 ;
-(HKStatistics *)statistics;
-(void)setStatistics:(HKStatistics *)arg1 ;
-(id)initWithContext:(long long)arg1 statistics:(id)arg2 ;
@end

