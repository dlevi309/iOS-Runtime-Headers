/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


@interface TSKFidgetResolver : NSObject {

	double _fidgetThreshold;
	id* _values;
	double* _times;
	unsigned long long _head;

}

@property (assign,nonatomic) double fidgetThreshold;              //@synthesize fidgetThreshold=_fidgetThreshold - In the implementation block
@property (nonatomic,readonly) id nonFidgetValue; 
-(id)init;
-(void)dealloc;
-(unsigned long long)p_previousValidIndexFromIndex:(unsigned long long)arg1 ;
-(void)pushValue:(id)arg1 withTime:(double)arg2 ;
-(void)p_advanceHead;
-(id)nonFidgetValue;
-(void)pushValue:(id)arg1 ;
-(double)fidgetThreshold;
-(void)setFidgetThreshold:(double)arg1 ;
@end

