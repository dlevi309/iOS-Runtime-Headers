/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/


@interface FlowSample : NSObject {

	double _minRxThroughput;
	double _maxRxThroughput;
	double _minTxThroughput;
	double _maxTxThroughput;
	double _elapsedTime;
	unsigned long long _totalObservedIfTypeRxBytes;
	unsigned long long _totalObservedIfTypeTxBytes;

}

@property (assign,nonatomic) double elapsedTime;                                         //@synthesize elapsedTime=_elapsedTime - In the implementation block
@property (assign,nonatomic) unsigned long long totalObservedIfTypeRxBytes;              //@synthesize totalObservedIfTypeRxBytes=_totalObservedIfTypeRxBytes - In the implementation block
@property (assign,nonatomic) unsigned long long totalObservedIfTypeTxBytes;              //@synthesize totalObservedIfTypeTxBytes=_totalObservedIfTypeTxBytes - In the implementation block
@property (nonatomic,readonly) double minRxThroughput; 
@property (nonatomic,readonly) double averageRxThroughput; 
@property (nonatomic,readonly) double maxRxThroughput; 
@property (nonatomic,readonly) double minTxThroughput; 
@property (nonatomic,readonly) double averageTxThroughput; 
@property (nonatomic,readonly) double maxTxThroughput; 
@property (nonatomic,readonly) BOOL isIdle; 
-(void)setElapsedTime:(double)arg1 ;
-(BOOL)isIdle;
-(double)elapsedTime;
-(id)description;
-(void)accumulateFrom:(id)arg1 ;
-(unsigned long long)totalObservedIfTypeRxBytes;
-(void)setTotalObservedIfTypeRxBytes:(unsigned long long)arg1 ;
-(unsigned long long)totalObservedIfTypeTxBytes;
-(void)setTotalObservedIfTypeTxBytes:(unsigned long long)arg1 ;
-(double)maxRxThroughput;
-(double)maxTxThroughput;
-(double)averageRxThroughput;
-(double)averageTxThroughput;
-(double)minRxThroughput;
-(double)minTxThroughput;
@end

