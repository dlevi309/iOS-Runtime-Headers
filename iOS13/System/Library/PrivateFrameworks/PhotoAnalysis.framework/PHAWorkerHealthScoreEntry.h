/*
* Generated on Monday, March 1, 2021 at 2:34:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

