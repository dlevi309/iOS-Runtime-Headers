/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)reset;
-(id)initWithFillRate:(double)arg1 capacity:(double)arg2 initialAllocation:(double)arg3 ;
-(BOOL)operationAllowed;
-(id)dumpStatistics;
-(void)_replenishTokens;
-(BOOL)_consumeTokens:(unsigned long long)arg1 ;
-(BOOL)operationAllowedWithCost:(double)arg1 ;
-(double)timeIntervalUntilOperationAllowedWithCost:(double)arg1 ;
-(unsigned long long)countOfOperationsAllowedWithCost:(double)arg1 ;
-(id)initWithFillRate:(double)arg1 capacity:(double)arg2 ;
-(double)timeIntervalUntilOperationAllowed;
-(unsigned long long)countOfOperationsAllowed;
-(double)interArrivalTime;
-(void)setInterArrivalTime:(double)arg1 ;
-(double)lastBucketFill;
-(void)setLastBucketFill:(double)arg1 ;
@end

