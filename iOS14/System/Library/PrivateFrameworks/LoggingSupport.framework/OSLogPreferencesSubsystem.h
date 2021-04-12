/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
*/


@class NSString, NSDictionary, NSMutableDictionary, NSArray;

@interface OSLogPreferencesSubsystem : NSObject {

	NSString* _systemPrefsFile;
	NSDictionary* _systemPrefs;
	NSString* _internalPrefsFile;
	NSDictionary* _internalPrefs;
	NSString* _prefsFile;
	NSMutableDictionary* _prefs;
	NSString* _name;

}

@property (nonatomic,readonly) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSArray * categories; 
@property (nonatomic,readonly) BOOL isLocked; 
@property (nonatomic,readonly) long long effectiveEnabledLevel; 
@property (nonatomic,readonly) long long effectivePersistedLevel; 
@property (assign,nonatomic) long long enabledLevel; 
@property (assign,nonatomic) long long persistedLevel; 
-(BOOL)isLocked;
-(long long)enabledLevel;
-(long long)persistedLevel;
-(void)setEnabledLevel:(long long)arg1 ;
-(void)setPersistedLevel:(long long)arg1 ;
-(id)_prefsForCategory:(id)arg1 ;
-(long long)effectiveEnabledLevel;
-(long long)effectivePersistedLevel;
-(long long)defaultEnabledLevel;
-(long long)defaultPersistedLevel;
-(long long)_defaultEnabledLevelForCategory:(id)arg1 ;
-(long long)_defaultPersistedLevelForCategory:(id)arg1 ;
-(long long)_enabledLevelForCategory:(id)arg1 ;
-(long long)_persistedLevelForCategory:(id)arg1 ;
-(NSArray *)categories;
-(BOOL)_signpostEnabledForCategory:(id)arg1 ;
-(BOOL)_signpostPersistedForCategory:(id)arg1 ;
-(id)_levelPrefsForCategory:(id)arg1 ;
-(void)_setEnabledLevel:(long long)arg1 forCategory:(id)arg2 ;
-(void)_setPersistedLevel:(long long)arg1 forCategory:(id)arg2 ;
-(void)_setSignpostEnabled:(BOOL)arg1 forCategory:(id)arg2 ;
-(void)_setSignpostPersisted:(BOOL)arg1 forCategory:(id)arg2 ;
-(void)_resetCategory:(id)arg1 ;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(void)reset;
-(void)resetAll;
@end

