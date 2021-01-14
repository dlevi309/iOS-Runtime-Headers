/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
*/


@class NSString, NSDictionary, NSMutableDictionary;

@interface OSLogPreferencesProcess : NSObject {

	NSString* _systemPrefsFile;
	NSDictionary* _systemPrefs;
	NSString* _internalPrefsFile;
	NSDictionary* _internalPrefs;
	NSString* _prefsFile;
	NSMutableDictionary* _prefs;
	NSString* _bundleID;

}

@property (nonatomic,readonly) NSString * bundleID;                            //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,readonly) BOOL isLocked; 
@property (nonatomic,readonly) long long effectiveEnabledLevel; 
@property (nonatomic,readonly) long long effectivePersistedLevel; 
@property (assign,nonatomic) long long enabledLevel; 
@property (assign,nonatomic) long long persistedLevel; 
-(BOOL)isLocked;
-(long long)enabledLevel;
-(long long)persistedLevel;
-(id)_levelPrefs;
-(void)setEnabledLevel:(long long)arg1 ;
-(void)setPersistedLevel:(long long)arg1 ;
-(long long)effectiveEnabledLevel;
-(long long)effectivePersistedLevel;
-(long long)defaultEnabledLevel;
-(long long)defaultPersistedLevel;
-(id)initWithBundleID:(id)arg1 ;
-(NSString *)bundleID;
-(void)reset;
@end

