/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
*/


@class NSString, NSMutableDictionary, NSArray;

@interface OSLogPreferencesManager : NSObject {

	NSString* _name;
	NSString* _prefsFile;
	NSMutableDictionary* _prefs;

}

@property (nonatomic,readonly) NSArray * processes; 
@property (nonatomic,readonly) NSArray * subsystems; 
@property (assign,nonatomic) long long enabledLevel; 
@property (assign,nonatomic) long long persistedLevel; 
+(id)sharedManager;
-(id)init;
-(NSArray *)processes;
-(long long)enabledLevel;
-(long long)persistedLevel;
-(id)_levelPrefs;
-(void)setEnabledLevel:(long long)arg1 ;
-(void)setPersistedLevel:(long long)arg1 ;
-(void)resetAllProcesses;
-(void)resetAllSubsystems;
-(NSArray *)subsystems;
-(void)reset;
-(void)resetAll;
@end

