/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@interface ATXBoostObject : NSObject {

	double _workBoost;
	double _workScale;
	double _homeBoost;
	double _homeScale;
	double _gymBoost;
	double _gymScale;
	double _schoolBoost;
	double _schoolScale;

}

@property (nonatomic,readonly) double workBoost;                //@synthesize workBoost=_workBoost - In the implementation block
@property (nonatomic,readonly) double workScale;                //@synthesize workScale=_workScale - In the implementation block
@property (nonatomic,readonly) double homeBoost;                //@synthesize homeBoost=_homeBoost - In the implementation block
@property (nonatomic,readonly) double homeScale;                //@synthesize homeScale=_homeScale - In the implementation block
@property (nonatomic,readonly) double gymBoost;                 //@synthesize gymBoost=_gymBoost - In the implementation block
@property (nonatomic,readonly) double gymScale;                 //@synthesize gymScale=_gymScale - In the implementation block
@property (nonatomic,readonly) double schoolBoost;              //@synthesize schoolBoost=_schoolBoost - In the implementation block
@property (nonatomic,readonly) double schoolScale;              //@synthesize schoolScale=_schoolScale - In the implementation block
-(id)initWithDictionary:(id)arg1 ;
-(double)workBoost;
-(double)workScale;
-(double)homeBoost;
-(double)homeScale;
-(double)gymBoost;
-(double)gymScale;
-(double)schoolBoost;
-(double)schoolScale;
@end

