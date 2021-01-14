/*
* Generated on Thursday, January 14, 2021 at 2:24:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
*/


@protocol OS_os_log;
@class NSMutableSet, NSUserDefaults, NSObject;

@interface DEDPersistence : NSObject {

	NSMutableSet* _bugSessionIdentifiers;
	NSUserDefaults* _userDefaults;
	NSObject*<OS_os_log> _log;

}

@property (retain) NSMutableSet * bugSessionIdentifiers;              //@synthesize bugSessionIdentifiers=_bugSessionIdentifiers - In the implementation block
@property (retain) NSUserDefaults * userDefaults;                     //@synthesize userDefaults=_userDefaults - In the implementation block
@property (retain) NSObject*<OS_os_log> log;                          //@synthesize log=_log - In the implementation block
+(id)sharedInstance;
-(void)setUserDefaults:(NSUserDefaults *)arg1 ;
-(id)init;
-(NSObject*<OS_os_log>)log;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(NSUserDefaults *)userDefaults;
-(void)removeBugSession:(id)arg1 ;
-(void)updateBugSession:(id)arg1 ;
-(id)loadSavedBugSessions;
-(BOOL)canProceedWithDevice:(id)arg1 ;
-(void)setBugSessionIdentifiers:(NSMutableSet *)arg1 ;
-(NSMutableSet *)bugSessionIdentifiers;
-(id)_indexKeyForBugSessionIdentifier:(id)arg1 ;
-(id)_indexKeyForBugSession:(id)arg1 ;
-(id)loadSavedSessionsFromPlist:(id)arg1 ;
-(void)validateSandboxAccess;
@end

