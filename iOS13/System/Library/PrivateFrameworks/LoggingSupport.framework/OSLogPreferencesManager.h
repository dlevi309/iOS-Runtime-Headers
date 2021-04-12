/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)reset;
-(long long)persistedLevel;
-(long long)enabledLevel;
-(void)setPersistedLevel:(long long)arg1 ;
-(void)setEnabledLevel:(long long)arg1 ;
-(NSArray *)subsystems;
-(void)resetAll;
-(NSArray *)processes;
-(id)_levelPrefs;
-(void)resetAllProcesses;
-(void)resetAllSubsystems;
@end

