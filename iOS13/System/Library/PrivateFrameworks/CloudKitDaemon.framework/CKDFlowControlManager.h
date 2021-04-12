/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/


@class NSMutableDictionary;

@interface CKDFlowControlManager : NSObject {

	unsigned long long _defaultBudget;
	double _defaultRegeneration;
	double _maximumThrottleTime;
	NSMutableDictionary* _operationFlowControls;

}

@property (nonatomic,retain) NSMutableDictionary * operationFlowControls;              //@synthesize operationFlowControls=_operationFlowControls - In the implementation block
@property (assign,nonatomic) unsigned long long defaultBudget; 
@property (assign,nonatomic) double defaultRegeneration; 
@property (assign) double maximumThrottleTime;                                         //@synthesize maximumThrottleTime=_maximumThrottleTime - In the implementation block
-(id)description;
-(void)setMaximumThrottleTime:(double)arg1 ;
-(double)maximumThrottleTime;
-(id)CKPropertiesDescription;
-(id)CKStatusReportArray;
-(unsigned long long)defaultBudget;
-(BOOL)hasStatusToReport;
-(id)initWithDefaultBudget:(unsigned long long)arg1 maximumThrottleTime:(double)arg2 andDefaultRegeneration:(double)arg3 ;
-(void)setDefaultBudget:(unsigned long long)arg1 ;
-(void)setDefaultRegeneration:(double)arg1 ;
-(double)defaultRegeneration;
-(BOOL)checkFlowControlIsLimited:(id)arg1 outReportableError:(id*)arg2 ;
-(double)secondsUntilFlowControlNotLimited:(id)arg1 ;
-(void)updateFlowControlForOperation:(id)arg1 reportableError:(id)arg2 ;
-(void)updateFlowControl:(id)arg1 withRetryAfter:(unsigned long long)arg2 reportableError:(id)arg3 ;
-(double)currentBudget:(id)arg1 ;
-(unsigned long long)currentBudgetCap:(id)arg1 ;
-(double)currentRegeneration:(id)arg1 ;
-(void)updateFlowControl:(id)arg1 withCost:(unsigned long long)arg2 reportableError:(id)arg3 ;
-(void)setOperationFlowControls:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)operationFlowControls;
-(id)_flowControlForOperation:(id)arg1 createIfNecessary:(BOOL)arg2 ;
-(id)_flowControlForOperation:(id)arg1 ;
@end

