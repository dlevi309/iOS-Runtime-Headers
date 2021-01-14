/*
* Generated on Thursday, January 14, 2021 at 2:20:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
*/


#import <CoreFoundation/CoreFoundation-Structs.h>
@interface NSUserDefaults : NSObject {

	id _kvo_;
	CFStringRef _identifier_;
	CFStringRef _container_;
	void** _reserved[2];

}
+(id)_copyStandardUserDefaultsIfPresent;
+(void)_ensureAndLockPreferredLanguageLock;
+(void)_web_addDefaultsChangeObserver;
+(void)setStandardUserDefaults:(id)arg1 ;
+(void)resetStandardUserDefaults;
+(id)_web_preferredLanguageCode;
+(void)_web_defaultsDidChange;
+(id)standardUserDefaults;
-(void)registerDefaults:(id)arg1 ;
-(id)dictionaryRepresentation;
-(id)initWithSuiteName:(id)arg1 ;
-(id)initWithUser:(id)arg1 ;
-(void)setFloat:(float)arg1 forKey:(id)arg2 ;
-(oneway void)release;
-(id)dataForKey:(id)arg1 ;
-(float)floatForKey:(id)arg1 ;
-(id)dictionaryForKey:(id)arg1 ;
-(void)finalize;
-(id)init;
-(void)setLong:(long long)arg1 forKey:(id)arg2 ;
-(id)URLForKey:(id)arg1 ;
-(long long)longForKey:(id)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(void)setDouble:(double)arg1 forKey:(id)arg2 ;
-(id)valueForKey:(id)arg1 ;
-(double)doubleForKey:(id)arg1 ;
-(id)searchList;
-(void)removeObjectForKey:(id)arg1 ;
-(void)removePersistentDomainForName:(id)arg1 ;
-(BOOL)objectIsForcedForKey:(id)arg1 inDomain:(id)arg2 ;
-(void)setInteger:(long long)arg1 forKey:(id)arg2 ;
-(id)_initWithSuiteName:(id)arg1 container:(id)arg2 ;
-(void)_didEndKeyValueObserving;
-(void)_willBeginKeyValueObserving;
-(void)setPersistentDomain:(id)arg1 forName:(id)arg2 ;
-(void)removeObjectForKey:(id)arg1 inDomain:(id)arg2 ;
-(void)removeVolatileDomainForName:(id)arg1 ;
-(id)persistentDomainForName:(id)arg1 ;
-(BOOL)synchronize;
-(void)removeSuiteNamed:(id)arg1 ;
-(void)setURL:(id)arg1 forKey:(id)arg2 ;
-(void)setSearchList:(id)arg1 ;
-(void)addSuiteNamed:(id)arg1 ;
-(void)setVolatileDomain:(id)arg1 forName:(id)arg2 ;
-(id)objectForKey:(id)arg1 ;
-(id)persistentDomainNames;
-(BOOL)objectIsForcedForKey:(id)arg1 ;
-(id)volatileDomainForName:(id)arg1 ;
-(id)volatileDomainNames;
-(id)stringArrayForKey:(id)arg1 ;
-(BOOL)boolForKey:(id)arg1 ;
-(id)arrayForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 inDomain:(id)arg3 ;
-(id)objectForKey:(id)arg1 inDomain:(id)arg2 ;
-(void)setBool:(BOOL)arg1 forKey:(id)arg2 ;
-(long long)integerForKey:(id)arg1 ;
-(id)stringForKey:(id)arg1 ;
-(void)dealloc;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(CFStringRef)_container;
-(BOOL)_observingCFPreferences;
-(CFStringRef)_identifier;
-(void)_setContainer:(CFURLRef)arg1 ;
-(void)_setIdentifier:(CFStringRef)arg1 ;
@end

