/*
* Generated on Thursday, January 14, 2021 at 2:21:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/


@class NSError, NSDate;

@interface CKFlowControl : NSObject {

	unsigned long long _budgetCap;
	double _regenerationPerSecond;
	unsigned long long _totalSamples;
	double _totalCost;
	double _budget;
	double _maximumThrottleTime;
	NSError* _lastReportableError;
	NSDate* _lastRegeneration;

}

@property (nonatomic,retain) NSError * lastReportableError;              //@synthesize lastReportableError=_lastReportableError - In the implementation block
@property (assign) double budget;                                        //@synthesize budget=_budget - In the implementation block
@property (retain) NSDate * lastRegeneration;                            //@synthesize lastRegeneration=_lastRegeneration - In the implementation block
@property (assign) unsigned long long budgetCap;                         //@synthesize budgetCap=_budgetCap - In the implementation block
@property (assign) double regenerationPerSecond;                         //@synthesize regenerationPerSecond=_regenerationPerSecond - In the implementation block
@property (assign,nonatomic) double maximumThrottleTime;                 //@synthesize maximumThrottleTime=_maximumThrottleTime - In the implementation block
+(id)flowControlWithBudgetCap:(unsigned long long)arg1 withMaximumThrottleTime:(double)arg2 andRegenerationPerSecond:(double)arg3 ;
-(void)setBudget:(double)arg1 ;
-(double)budget;
-(double)secondsUntilBudgetLimitationRemoved;
-(BOOL)attemptBudgetedExpenditureWithCost:(double)arg1 ;
-(void)expendWithCost:(double)arg1 reportableError:(id)arg2 ;
-(id)CKPropertiesDescription;
-(void)setMaximumThrottleTime:(double)arg1 ;
-(void)setLastRegeneration:(NSDate *)arg1 ;
-(NSDate *)lastRegeneration;
-(double)regenerationPerSecond;
-(unsigned long long)budgetCap;
-(id)description;
-(NSError *)lastReportableError;
-(BOOL)isLimited;
-(void)setRegenerationPerSecond:(double)arg1 ;
-(double)maximumThrottleTime;
-(id)initWithBudgetCap:(unsigned long long)arg1 withMaximumThrottleTime:(double)arg2 andRegenerationPerSecond:(double)arg3 ;
-(void)setLastReportableError:(NSError *)arg1 ;
-(void)regenerate;
-(double)_secondsUntilBudgetLimitationRemovedNoRegen;
-(void)setBudgetCap:(unsigned long long)arg1 ;
@end

