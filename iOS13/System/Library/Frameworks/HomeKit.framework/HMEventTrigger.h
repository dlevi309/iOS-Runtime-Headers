/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/HMTrigger.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSPredicate, HMMutableArray;

@interface HMEventTrigger : HMTrigger <NSSecureCoding> {

	NSArray* _recurrences;
	BOOL _executeOnce;
	NSPredicate* _internalPredicate;
	unsigned long long _activationState;
	HMMutableArray* _currentEvents;

}

@property (nonatomic,copy) NSPredicate * internalPredicate;                            //@synthesize internalPredicate=_internalPredicate - In the implementation block
@property (nonatomic,retain) HMMutableArray * currentEvents;                           //@synthesize currentEvents=_currentEvents - In the implementation block
@property (nonatomic,copy,readonly) NSArray * allEvents; 
@property (assign,nonatomic) unsigned long long activationState;                       //@synthesize activationState=_activationState - In the implementation block
@property (nonatomic,copy,readonly) NSArray * events; 
@property (nonatomic,copy,readonly) NSArray * endEvents; 
@property (nonatomic,copy,readonly) NSPredicate * predicate; 
@property (nonatomic,copy,readonly) NSArray * recurrences;                             //@synthesize recurrences=_recurrences - In the implementation block
@property (nonatomic,readonly) BOOL executeOnce;                                       //@synthesize executeOnce=_executeOnce - In the implementation block
@property (nonatomic,readonly) unsigned long long triggerActivationState; 
+(BOOL)supportsSecureCoding;
+(id)createWithDictionary:(id)arg1 home:(id)arg2 ;
+(BOOL)__validateRecurrences:(id)arg1 ;
+(id)_predicateForEvaluatingTriggerOccurringBeforeSignificantEvent:(id)arg1 applyingOffset:(id)arg2 ;
+(id)negateOffset:(id)arg1 ;
+(id)_predicateForEvaluatingTriggerOccurringAfterSignificantEvent:(id)arg1 applyingOffset:(id)arg2 ;
+(id)predicateForEvaluatingTriggerOccurringAfterSignificantEvent:(id)arg1 ;
+(id)predicateForEvaluatingTriggerOccurringBeforeSignificantEvent:(id)arg1 ;
+(id)predicateForEvaluatingTriggerOccurringAfterDateWithComponents:(id)arg1 ;
+(id)predicateForEvaluatingTriggerOccurringBeforeDateWithComponents:(id)arg1 ;
+(id)predicateForEvaluatingTriggerOccurringOnDateWithComponents:(id)arg1 ;
+(id)predicateForEvaluatingTriggerWithCharacteristic:(id)arg1 relatedBy:(unsigned long long)arg2 toValue:(id)arg3 ;
+(id)_predicateForEvaluatingTriggerWithCharacteristic:(id)arg1 value:(id)arg2 valueFormatString:(id)arg3 ;
+(id)predicateForEvaluatingTriggerOccurringBeforeSignificantEvent:(id)arg1 applyingOffset:(id)arg2 ;
+(id)predicateForEvaluatingTriggerOccurringAfterSignificantEvent:(id)arg1 applyingOffset:(id)arg2 ;
+(id)predicateForEvaluatingTriggerOccurringBetweenSignificantEvent:(id)arg1 secondSignificantEvent:(id)arg2 ;
+(id)predicateForEvaluatingTriggerWithPresence:(id)arg1 ;
+(id)predicateForEvaluatingTriggerOccurringBetweenDateWithComponents:(id)arg1 secondDateWithComponents:(id)arg2 ;
+(id)predicateForEvaluatingTriggerWithCharacteristic:(id)arg1 matchingValue:(id)arg2 ;
+(BOOL)isActionAffectedByEndEvents:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSPredicate *)predicate;
-(NSArray *)allEvents;
-(NSArray *)events;
-(unsigned long long)activationState;
-(NSPredicate *)internalPredicate;
-(void)setInternalPredicate:(NSPredicate *)arg1 ;
-(NSArray *)recurrences;
-(void)setRecurrences:(NSArray *)arg1 ;
-(id)_serializeForAdd;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(void)_registerNotificationHandlers;
-(void)__configureWithContext:(id)arg1 home:(id)arg2 ;
-(BOOL)compatibleWithApp;
-(id)initInternalWithName:(id)arg1 events:(id)arg2 endEvents:(id)arg3 recurrences:(id)arg4 predicate:(id)arg5 ;
-(id)initWithName:(id)arg1 events:(id)arg2 endEvents:(id)arg3 recurrences:(id)arg4 predicate:(id)arg5 ;
-(HMMutableArray *)currentEvents;
-(void)_addEvent:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_removeEvent:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_updateEvents:(id)arg1 endEvent:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)_updateCharacterisiticReferenceInNewEvent:(id)arg1 ;
-(void)_updatePredicate:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_updateRecurrences:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_updateExecuteOnce:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_handleEventTriggerConditionNotification:(id)arg1 ;
-(void)_handleEventTriggerRecurrencesNotification:(id)arg1 ;
-(void)_handleEventTriggerExecuteOnceNotification:(id)arg1 ;
-(void)handleEventAddedNotification:(id)arg1 ;
-(void)handleEventsRemovedNotification:(id)arg1 ;
-(void)handleActivationStateNotification:(id)arg1 ;
-(void)handleEventsUpdatedNotification:(id)arg1 ;
-(void)setExecuteOnce:(BOOL)arg1 ;
-(id)addedEvent:(id)arg1 ;
-(void)setActivationState:(unsigned long long)arg1 ;
-(BOOL)executeOnce;
-(BOOL)containsSharedTriggerActivationBits;
-(id)initWithName:(id)arg1 events:(id)arg2 predicate:(id)arg3 ;
-(NSArray *)endEvents;
-(unsigned long long)triggerActivationState;
-(void)addEvent:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeEvent:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateEvents:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateEndEvents:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_updateCharacteristicReference;
-(void)updatePredicate:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateRecurrences:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateExecuteOnce:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setCurrentEvents:(HMMutableArray *)arg1 ;
@end

