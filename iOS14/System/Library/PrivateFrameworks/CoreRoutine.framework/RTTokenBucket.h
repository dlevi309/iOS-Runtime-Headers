/*
* Generated on Thursday, January 14, 2021 at 2:23:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
*/


@interface RTTokenBucket : NSObject {

	double _fillRate;
	double _capacity;
	double _operationCost;
	double _tokenBucket;
	double _lastArrivalTime;
	double _totalInterArrivalTime;
	double _wastedTokens;
	double _totalTokensGenerated;
	double _totalTokensConsumed;
	unsigned long long _totalOperations;
	unsigned long long _operationsAllowed;
	double _interArrivalTime;
	double _lastBucketFill;

}

@property (assign,nonatomic) double lastBucketFill;                //@synthesize lastBucketFill=_lastBucketFill - In the implementation block
@property (assign,nonatomic) double interArrivalTime;              //@synthesize interArrivalTime=_interArrivalTime - In the implementation block
-(id)initWithFillRate:(double)arg1 capacity:(double)arg2 initialAllocation:(double)arg3 ;
-(void)setLastBucketFill:(double)arg1 ;
-(id)init;
-(double)timeIntervalUntilOperationAllowed;
-(double)interArrivalTime;
-(void)_replenishTokens;
-(unsigned long long)countOfOperationsAllowed;
-(id)dumpStatistics;
-(double)timeIntervalUntilOperationAllowedWithCost:(double)arg1 ;
-(BOOL)operationAllowed;
-(void)setInterArrivalTime:(double)arg1 ;
-(BOOL)_consumeTokens:(unsigned long long)arg1 ;
-(void)reset;
-(unsigned long long)countOfOperationsAllowedWithCost:(double)arg1 ;
-(BOOL)operationAllowedWithCost:(double)arg1 ;
-(id)initWithFillRate:(double)arg1 capacity:(double)arg2 ;
-(double)lastBucketFill;
@end

