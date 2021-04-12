/*
* Generated on Monday, March 1, 2021 at 2:33:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@class NSDate;

@interface ATXNotificationsSuggestionScoreCache : NSObject {

	NSDate* _date;
	double _score;

}

@property (nonatomic,readonly) NSDate * date;              //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) double score;               //@synthesize score=_score - In the implementation block
-(NSDate *)date;
-(double)score;
-(id)initWithScore:(double)arg1 ;
@end

