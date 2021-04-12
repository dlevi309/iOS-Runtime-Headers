/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/

#import <AppPredictionInternal/ATXLazyOperator.h>

@interface ATXLazyPercentile : ATXLazyOperator {

	double _percentile;

}

@property (assign,nonatomic) double percentile;              //@synthesize percentile=_percentile - In the implementation block
-(id)init;
-(double)opExecute;
-(id)init:(id)arg1 percentile:(double)arg2 ;
-(double)percentile;
-(void)setPercentile:(double)arg1 ;
@end

