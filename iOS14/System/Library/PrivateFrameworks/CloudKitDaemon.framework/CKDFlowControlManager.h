/*
* Generated on Thursday, January 14, 2021 at 2:26:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)hasStatusToReport;
-(id)CKPropertiesDescription;
-(BOOL)checkFlowControlIsLimited:(id)arg1 outReportableError:(id*)arg2 ;
-(id)initWithDefaultBudget:(unsigned long long)arg1 maximumThrottleTime:(double)arg2 andDefaultRegeneration:(double)arg3 ;
-(void)setMaximumThrottleTime:(double)arg1 ;
-(unsigned long long)currentBudgetCap:(id)arg1 ;
-(id)_flowControlForOperation:(id)arg1 ;
-(double)defaultRegeneration;
-(id)description;
-(unsigned long long)defaultBudget;
-(void)setDefaultRegeneration:(double)arg1 ;
-(NSMutableDictionary *)operationFlowControls;
-(void)updateFlowControlForOperation:(id)arg1 reportableError:(id)arg2 ;
-(double)maximumThrottleTime;
-(id)_flowControlForOperation:(id)arg1 createIfNecessary:(BOOL)arg2 ;
-(double)secondsUntilFlowControlNotLimited:(id)arg1 ;
-(double)currentBudget:(id)arg1 ;
-(void)updateFlowControl:(id)arg1 withCost:(unsigned long long)arg2 reportableError:(id)arg3 ;
-(void)setOperationFlowControls:(NSMutableDictionary *)arg1 ;
-(double)currentRegeneration:(id)arg1 ;
-(id)CKStatusReportArray;
-(void)setDefaultBudget:(unsigned long long)arg1 ;
-(void)updateFlowControl:(id)arg1 withRetryAfter:(double)arg2 reportableError:(id)arg3 ;
@end

