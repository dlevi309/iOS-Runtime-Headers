/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)reset;
-(NSString *)bundleID;
-(BOOL)isLocked;
-(long long)persistedLevel;
-(long long)enabledLevel;
-(void)setPersistedLevel:(long long)arg1 ;
-(void)setEnabledLevel:(long long)arg1 ;
-(id)initWithBundleID:(id)arg1 ;
-(id)_levelPrefs;
-(long long)effectiveEnabledLevel;
-(long long)effectivePersistedLevel;
-(long long)defaultEnabledLevel;
-(long long)defaultPersistedLevel;
@end

