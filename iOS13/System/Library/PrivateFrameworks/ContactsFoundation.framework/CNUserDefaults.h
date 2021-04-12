/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/


@protocol CNPrimitiveUserDefaults;
@class NSDictionary;

@interface CNUserDefaults : NSObject {

	id<CNPrimitiveUserDefaults> _primitiveDefaults;
	NSDictionary* _registeredDefaults;

}

@property (copy) NSDictionary * registeredDefaults;              //@synthesize registeredDefaults=_registeredDefaults - In the implementation block
+(id)standardPreferences;
+(id)preferencesWithApplicationID:(id)arg1 ;
+(id)inMemoryPreferences;
-(BOOL)synchronize;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(BOOL)boolForKey:(id)arg1 ;
-(long long)integerForKey:(id)arg1 ;
-(double)doubleForKey:(id)arg1 ;
-(void)setInteger:(long long)arg1 forKey:(id)arg2 ;
-(void)setDouble:(double)arg1 forKey:(id)arg2 ;
-(void)setBool:(BOOL)arg1 forKey:(id)arg2 ;
-(void)registerDefaults:(id)arg1 ;
-(BOOL)userHasOptedOutOfPreference:(id)arg1 ;
-(id)initWithApplicationID:(id)arg1 ;
-(id)initWithPrimitiveDefaults:(id)arg1 ;
-(void)setRegisteredDefaults:(NSDictionary *)arg1 ;
-(id)primitiveObjectForKey:(id)arg1 ;
-(void)setPrimitiveObject:(id)arg1 forKey:(id)arg2 ;
-(long long)primitiveIntegerValueForKey:(id)arg1 keyExists:(BOOL*)arg2 ;
-(BOOL)primitiveBoolValueForKey:(id)arg1 keyExists:(BOOL*)arg2 ;
-(void)primitiveRemoveObjectForKey:(id)arg1 ;
-(void)setupAutosync;
-(NSDictionary *)registeredDefaults;
-(BOOL)boolForKey:(id)arg1 keyExists:(BOOL*)arg2 ;
-(id)primitiveDefaults;
-(long long)integerForKey:(id)arg1 keyExists:(BOOL*)arg2 ;
-(BOOL)userHasOptedInToPreference:(id)arg1 ;
@end

