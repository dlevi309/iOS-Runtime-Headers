/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/

#import <libobjc.A.dylib/VSObservanceDelegate.h>

@class NSDictionary, NSExpression, NSArray, NSString;

@interface VSExpressionEvaluator : NSObject <VSObservanceDelegate> {

	BOOL _monitoringForChanges;
	BOOL _hasDeterminedValue;
	NSDictionary* _substitutionVariables;
	NSExpression* _expression;
	id _object;
	id _value;
	NSArray* _observers;

}

@property (nonatomic,retain) id value;                                                             //@synthesize value=_value - In the implementation block
@property (assign,getter=isMonitoringForChanges,nonatomic) BOOL monitoringForChanges;              //@synthesize monitoringForChanges=_monitoringForChanges - In the implementation block
@property (nonatomic,copy) NSArray * observers;                                                    //@synthesize observers=_observers - In the implementation block
@property (assign,nonatomic) BOOL hasDeterminedValue;                                              //@synthesize hasDeterminedValue=_hasDeterminedValue - In the implementation block
@property (nonatomic,copy) NSExpression * expression;                                              //@synthesize expression=_expression - In the implementation block
@property (assign,nonatomic) id object;                                                            //@synthesize object=_object - In the implementation block
@property (nonatomic,copy) NSDictionary * substitutionVariables;                                   //@synthesize substitutionVariables=_substitutionVariables - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)automaticallyNotifiesObserversOfValue;
-(void)setSubstitutionVariables:(NSDictionary *)arg1 ;
-(NSArray *)observers;
-(NSDictionary *)substitutionVariables;
-(id)object;
-(void)setExpression:(NSExpression *)arg1 ;
-(void)setValue:(id)arg1 ;
-(void)setObject:(id)arg1 ;
-(void)setObservers:(NSArray *)arg1 ;
-(NSExpression *)expression;
-(id)value;
-(void)dealloc;
-(void)observeChange:(id)arg1 forObservance:(id)arg2 ;
-(BOOL)isMonitoringForChanges;
-(void)_stopMonitoringForChanges;
-(id)_observersForExpression:(id)arg1 ;
-(id)_observersForPredicate:(id)arg1 ;
-(void)setMonitoringForChanges:(BOOL)arg1 ;
-(BOOL)hasDeterminedValue;
-(void)setHasDeterminedValue:(BOOL)arg1 ;
-(void)_updateComputedResult:(id)arg1 ;
-(void)_startMonitoringForChanges;
-(void)_updateComputedResultIfNeeded;
@end

