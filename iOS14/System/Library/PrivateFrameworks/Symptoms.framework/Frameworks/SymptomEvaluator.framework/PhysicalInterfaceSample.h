/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/


@interface PhysicalInterfaceSample : NSObject {

	double _startTimeIntervalSinceReferenceDate;
	double _elapsedTime;
	unsigned long long _rxBytes;
	unsigned long long _txBytes;

}

@property (assign,nonatomic) double startTimeIntervalSinceReferenceDate;              //@synthesize startTimeIntervalSinceReferenceDate=_startTimeIntervalSinceReferenceDate - In the implementation block
@property (assign,nonatomic) double elapsedTime;                                      //@synthesize elapsedTime=_elapsedTime - In the implementation block
@property (assign,nonatomic) unsigned long long rxBytes;                              //@synthesize rxBytes=_rxBytes - In the implementation block
@property (assign,nonatomic) unsigned long long txBytes;                              //@synthesize txBytes=_txBytes - In the implementation block
@property (nonatomic,readonly) double rxThroughput; 
@property (nonatomic,readonly) double txThroughput; 
@property (nonatomic,readonly) unsigned long long rxThroughputBps; 
@property (nonatomic,readonly) unsigned long long txThroughputBps; 
-(void)setTxBytes:(unsigned long long)arg1 ;
-(void)setElapsedTime:(double)arg1 ;
-(unsigned long long)txBytes;
-(unsigned long long)rxBytes;
-(void)setRxBytes:(unsigned long long)arg1 ;
-(double)elapsedTime;
-(id)description;
-(unsigned long long)rxThroughputBps;
-(unsigned long long)txThroughputBps;
-(double)startTimeIntervalSinceReferenceDate;
-(double)rxThroughput;
-(double)txThroughput;
-(void)setStartTimeIntervalSinceReferenceDate:(double)arg1 ;
@end

