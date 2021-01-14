/*
* Generated on Thursday, January 14, 2021 at 2:26:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChronoCore.framework/ChronoCore
*/


@class NSDate;

@interface CHDProactiveEntry : NSObject {

	BOOL _hasRelevance;
	NSDate* _date;
	double _score;
	double _duration;

}

@property (nonatomic,readonly) NSDate * date;                  //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) BOOL hasRelevance;              //@synthesize hasRelevance=_hasRelevance - In the implementation block
@property (nonatomic,readonly) double score;                   //@synthesize score=_score - In the implementation block
@property (nonatomic,readonly) double duration;                //@synthesize duration=_duration - In the implementation block
-(id)initWithDate:(id)arg1 ;
-(double)score;
-(NSDate *)date;
-(double)duration;
-(id)initWithDate:(id)arg1 score:(double)arg2 duration:(double)arg3 ;
-(BOOL)hasRelevance;
@end

