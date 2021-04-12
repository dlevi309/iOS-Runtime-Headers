/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


#import <HealthDaemon/HealthDaemon-Structs.h>
@class HDAssertionManager, NSUUID, NSString;

@interface HDAssertion : NSObject {

	HDAssertionManager* _manager;
	long long _state;
	double _remainingBudget;
	double _budgetIntervalStartTime;
	os_unfair_lock_s _lock;
	NSUUID* _UUID;
	NSString* _assertionIdentifier;
	NSString* _ownerIdentifier;
	double _budget;

}

@property (readonly) long long rawState; 
@property (nonatomic,copy,readonly) NSUUID * UUID;                               //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,copy,readonly) NSString * assertionIdentifier;              //@synthesize assertionIdentifier=_assertionIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * ownerIdentifier;                  //@synthesize ownerIdentifier=_ownerIdentifier - In the implementation block
@property (readonly) long long state; 
@property (assign,nonatomic) double budget;                                      //@synthesize budget=_budget - In the implementation block
@property (readonly) double remainingBudget; 
-(void)setBudget:(double)arg1 ;
-(double)budget;
-(NSString *)assertionIdentifier;
-(long long)_lock_consumeBudgetThroughTime:(double)arg1 error:(id*)arg2 ;
-(NSUUID *)UUID;
-(long long)rawState;
-(long long)_lock_state;
-(double)_lock_remainingBudget;
-(id)description;
-(BOOL)_consumeFromBudgetThroughTime:(double)arg1 ;
-(double)remainingBudget;
-(id)_lock_cloneWithOwnerIdentifier:(id)arg1 ;
-(NSString *)ownerIdentifier;
-(BOOL)_lock_setBudget:(double)arg1 error:(id*)arg2 ;
-(long long)state;
-(void)invalidate;
-(void)_invalidateAndRelease:(BOOL)arg1 ;
-(id)cloneWithOwnerIdentifier:(id)arg1 ;
-(long long)_takeWithManager:(id)arg1 ;
-(id)initWithAssertionIdentifier:(id)arg1 ownerIdentifier:(id)arg2 ;
-(void)_setBudgetIntervalStartTime:(double)arg1 ;
-(id)_lock_description;
-(void)dealloc;
-(id)_lock_setBudgetIntervalStartTime:(double)arg1 ;
@end

