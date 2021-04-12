/*
* Generated on Thursday, January 14, 2021 at 2:24:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@class HKStatistics;

@interface HKHeartRateDisplayTypeContextResult : NSObject {

	long long _context;
	HKStatistics* _statistics;

}

@property (assign,nonatomic) long long context;                      //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) HKStatistics * statistics;              //@synthesize statistics=_statistics - In the implementation block
-(HKStatistics *)statistics;
-(id)debugDescription;
-(void)setStatistics:(HKStatistics *)arg1 ;
-(long long)context;
-(void)setContext:(long long)arg1 ;
-(id)initWithContext:(long long)arg1 statistics:(id)arg2 ;
@end

