/*
* Generated on Thursday, January 14, 2021 at 2:24:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/


@interface Score : NSObject {

	double _upPct;
	double _overallStay;
	double _handicapStay;
	double _epochs;
	double _lqmTransitionCount;
	double _connSuccesses;
	double _connAttempts;

}

@property (assign,nonatomic) double upPct;                           //@synthesize upPct=_upPct - In the implementation block
@property (assign,nonatomic) double overallStay;                     //@synthesize overallStay=_overallStay - In the implementation block
@property (assign,nonatomic) double handicapStay;                    //@synthesize handicapStay=_handicapStay - In the implementation block
@property (assign,nonatomic) double epochs;                          //@synthesize epochs=_epochs - In the implementation block
@property (assign,nonatomic) double lqmTransitionCount;              //@synthesize lqmTransitionCount=_lqmTransitionCount - In the implementation block
@property (assign,nonatomic) double connSuccesses;                   //@synthesize connSuccesses=_connSuccesses - In the implementation block
@property (assign,nonatomic) double connAttempts;                    //@synthesize connAttempts=_connAttempts - In the implementation block
-(double)connAttempts;
-(double)lqmTransitionCount;
-(void)setUpPct:(double)arg1 ;
-(id)description;
-(double)overallStay;
-(double)epochs;
-(double)handicapStay;
-(double)connSuccesses;
-(void)setConnSuccesses:(double)arg1 ;
-(void)setLqmTransitionCount:(double)arg1 ;
-(double)upPct;
-(void)setOverallStay:(double)arg1 ;
-(void)setConnAttempts:(double)arg1 ;
-(void)setHandicapStay:(double)arg1 ;
-(void)setEpochs:(double)arg1 ;
@end

