/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@interface ATXGroupHistogramEntry : NSObject {

	int _count;
	double _score;

}

@property (nonatomic,readonly) int count;                 //@synthesize count=_count - In the implementation block
@property (nonatomic,readonly) double score;              //@synthesize score=_score - In the implementation block
-(int)count;
-(double)score;
-(id)initWithScore:(double)arg1 ;
-(void)addScore:(double)arg1 ;
@end

