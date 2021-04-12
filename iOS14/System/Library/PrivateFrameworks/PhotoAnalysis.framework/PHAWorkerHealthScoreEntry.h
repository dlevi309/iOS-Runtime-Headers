/*
* Generated on Thursday, January 14, 2021 at 2:26:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
*/


@class NSDate;

@interface PHAWorkerHealthScoreEntry : NSObject {

	float _score;
	NSDate* _dateRecorded;

}

@property (nonatomic,readonly) float score;                             //@synthesize score=_score - In the implementation block
@property (nonatomic,copy,readonly) NSDate * dateRecorded;              //@synthesize dateRecorded=_dateRecorded - In the implementation block
-(float)score;
-(id)initWithScore:(float)arg1 ;
-(NSDate *)dateRecorded;
@end

