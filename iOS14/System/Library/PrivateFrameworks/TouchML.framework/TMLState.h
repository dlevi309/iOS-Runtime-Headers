/*
* Generated on Thursday, January 14, 2021 at 2:28:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
*/


@class NSMutableDictionary, NSMutableOrderedSet, NSString, NSOrderedSet;

@interface TMLState : NSObject {

	NSMutableDictionary* _properties;
	NSMutableOrderedSet* _propertyKeys;
	NSString* _tmlStateName;
	NSString* _tmlStateExtends;
	TMLState* _baseState;

}

@property (nonatomic,readonly) NSOrderedSet * propertyKeys;              //@synthesize propertyKeys=_propertyKeys - In the implementation block
@property (nonatomic,readonly) NSString * tmlStateName;                  //@synthesize tmlStateName=_tmlStateName - In the implementation block
@property (nonatomic,readonly) NSString * tmlStateExtends;               //@synthesize tmlStateExtends=_tmlStateExtends - In the implementation block
+(Class)registerState:(id)arg1 forClass:(Class)arg2 ;
+(id)stateForClass:(Class)arg1 stateName:(id)arg2 ;
-(id)init;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)valueForKey:(id)arg1 ;
-(void)setValue:(id)arg1 forKeyPath:(id)arg2 ;
-(id)valueForKeyPath:(id)arg1 ;
-(NSOrderedSet *)propertyKeys;
-(id)initWithStateName:(id)arg1 ;
-(void)applyToObject:(id)arg1 ignorePropertyKeys:(id)arg2 ;
-(void)setTMLValue:(id)arg1 forKeyPath:(id)arg2 ;
-(id)tmlIdentifier;
-(void)enterStateFromState:(id)arg1 ;
-(void)leaveStateToState:(id)arg1 ;
-(void)applyToObject:(id)arg1 fromState:(id)arg2 ;
-(NSString *)tmlStateName;
-(NSString *)tmlStateExtends;
@end

