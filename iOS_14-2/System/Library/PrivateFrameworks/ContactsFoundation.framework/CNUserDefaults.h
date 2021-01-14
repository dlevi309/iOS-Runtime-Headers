/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/


@protocol CNPrimitiveUserDefaults;
@class NSDictionary;

@interface CNUserDefaults : NSObject {

	id<CNPrimitiveUserDefaults> _primitiveDefaults;
	NSDictionary* _registeredDefaults;

}

@property (copy) NSDictionary * registeredDefaults;              //@synthesize registeredDefaults=_registeredDefaults - In the implementation block
+(id)preferencesWithApplicationID:(id)arg1 ;
+(id)inMemoryPreferences;
+(id)standardPreferences;
-(void)registerDefaults:(id)arg1 ;
-(NSDictionary *)registeredDefaults;
-(long long)integerForKey:(id)arg1 keyExists:(BOOL*)arg2 ;
-(void)primitiveRemoveObjectForKey:(id)arg1 ;
-(void)setDouble:(double)arg1 forKey:(id)arg2 ;
-(BOOL)userHasOptedInToPreference:(id)arg1 ;
-(double)doubleForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(id)primitiveObjectForKey:(id)arg1 ;
-(void)setInteger:(long long)arg1 forKey:(id)arg2 ;
-(void)setupAutosync;
-(long long)primitiveIntegerValueForKey:(id)arg1 keyExists:(BOOL*)arg2 ;
-(void)setRegisteredDefaults:(NSDictionary *)arg1 ;
-(BOOL)synchronize;
-(BOOL)userHasOptedOutOfPreference:(id)arg1 ;
-(BOOL)primitiveBoolValueForKey:(id)arg1 keyExists:(BOOL*)arg2 ;
-(id)objectForKey:(id)arg1 ;
-(id)initWithApplicationID:(id)arg1 ;
-(id)initWithPrimitiveDefaults:(id)arg1 ;
-(BOOL)boolForKey:(id)arg1 ;
-(void)setBool:(BOOL)arg1 forKey:(id)arg2 ;
-(long long)integerForKey:(id)arg1 ;
-(BOOL)boolForKey:(id)arg1 keyExists:(BOOL*)arg2 ;
-(void)setPrimitiveObject:(id)arg1 forKey:(id)arg2 ;
-(id)primitiveDefaults;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
@end

