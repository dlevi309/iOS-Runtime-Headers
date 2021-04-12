/*
* Generated on Monday, March 1, 2021 at 2:34:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Stocks/StocksAnalytics.framework/StocksAnalytics
*/


@interface SAAdDemographic : NSObject {

	int _ageGroup;
	float _ageGroupConfidence;
	int _genderGroup;
	float _genderGroupConfidence;

}

@property (nonatomic,readonly) int ageGroup;                             //@synthesize ageGroup=_ageGroup - In the implementation block
@property (nonatomic,readonly) float ageGroupConfidence;                 //@synthesize ageGroupConfidence=_ageGroupConfidence - In the implementation block
@property (nonatomic,readonly) int genderGroup;                          //@synthesize genderGroup=_genderGroup - In the implementation block
@property (nonatomic,readonly) float genderGroupConfidence;              //@synthesize genderGroupConfidence=_genderGroupConfidence - In the implementation block
-(id)initWithAgeGroup:(int)arg1 ageGroupConfidence:(float)arg2 genderGroup:(int)arg3 genderGroupConfidence:(float)arg4 ;
-(int)ageGroup;
-(float)ageGroupConfidence;
-(int)genderGroup;
-(float)genderGroupConfidence;
@end

