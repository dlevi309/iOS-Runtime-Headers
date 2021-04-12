/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/


@interface ConnectionFailureInstance : NSObject {

	double _flowStart;
	double _flowDuration;

}

@property (assign,nonatomic) double flowStart;                 //@synthesize flowStart=_flowStart - In the implementation block
@property (assign,nonatomic) double flowDuration;              //@synthesize flowDuration=_flowDuration - In the implementation block
-(id)description;
-(double)flowDuration;
-(double)flowStart;
-(void)setFlowStart:(double)arg1 ;
-(void)setFlowDuration:(double)arg1 ;
@end

