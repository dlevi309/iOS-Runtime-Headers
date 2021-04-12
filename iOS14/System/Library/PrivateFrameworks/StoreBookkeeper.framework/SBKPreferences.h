/*
* Generated on Thursday, January 14, 2021 at 2:28:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
*/


@interface SBKPreferences : NSObject
+(id)storeBookkeeperPreferences;
-(id)init;
-(BOOL)boolForKey:(id)arg1 ;
-(void)setBool:(BOOL)arg1 forKey:(id)arg2 ;
-(void)dealloc;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)objectForKey:(id)arg1 withDefaultValue:(id)arg2 ;
-(void)registerDefaultsIfKeyNotSet:(id)arg1 registrationBlock:(/*^block*/id)arg2 ;
-(void)_preferencesDidChange;
@end

