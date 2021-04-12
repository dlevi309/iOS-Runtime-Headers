/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/


@protocol OS_dispatch_queue;
#import <CoreServices/CoreServices-Structs.h>
@class NSObject, NSURL, NSData, NSMutableDictionary, NSArray;

@interface _LSDefaults : NSObject {

	NSObject*<OS_dispatch_queue> _ivarQueue;
	NSURL* _systemContainerURL;
	NSURL* _systemGroupContainerURL;
	NSURL* _userContainerURL;
	NSData* _hmacSecret;
	NSMutableDictionary* _darwinNotificationNames;
	unsigned _darwinNotificationNamesUID;
	os_unfair_lock_s _darwinNotificationNamesLock;
	BOOL _inSyncBubble;
	BOOL _inXCTestRigInsecure;
	BOOL _appleInternal;
	BOOL _isServer;
	BOOL _hasServer;
	BOOL _inEducationMode;
	BOOL _hasPersistentPreferences;
	long long _currentDisplayGamut;

}

@property (readonly) unsigned currentSchemaVersion; 
@property (readonly) NSURL * systemContainerURL; 
@property (readonly) NSURL * systemGroupContainerURL; 
@property (readonly) NSURL * userContainerURL; 
@property (readonly) unsigned short databaseStoreFileMode; 
@property (readonly) NSURL * databaseStoreFileURL; 
@property (readonly) NSURL * queriedSchemesMapFileURL; 
@property (readonly) NSURL * identifiersFileURL; 
@property (readonly) NSURL * preferencesFileURL; 
@property (readonly) NSURL * securePeferencesFileURL; 
@property (readonly) NSURL * dbSentinelFileURL; 
@property (readonly) NSURL * installJournalDirectoryURL; 
@property (readonly) NSURL * dbRecoveryFileURL; 
@property (getter=isServer) BOOL server;                                                           //@synthesize isServer=_isServer - In the implementation block
@property (assign) BOOL hasServer;                                                                 //@synthesize hasServer=_hasServer - In the implementation block
@property (getter=isInEducationMode,readonly) BOOL inEducationMode;                                //@synthesize inEducationMode=_inEducationMode - In the implementation block
@property (readonly) BOOL hasPersistentPreferences;                                                //@synthesize hasPersistentPreferences=_hasPersistentPreferences - In the implementation block
@property (getter=isInSyncBubble,readonly) BOOL inSyncBubble;                                      //@synthesize inSyncBubble=_inSyncBubble - In the implementation block
@property (getter=isInXCTestRigInsecure,nonatomic,readonly) BOOL inXCTestRigInsecure;              //@synthesize inXCTestRigInsecure=_inXCTestRigInsecure - In the implementation block
@property (getter=isAppleInternal,nonatomic,readonly) BOOL appleInternal;                          //@synthesize appleInternal=_appleInternal - In the implementation block
@property (nonatomic,readonly) BOOL allowsAlternateIcons; 
@property (nonatomic,readonly) BOOL abortIfMayNotMapDatabase; 
@property (nonatomic,readonly) BOOL issueSandboxExceptionsIfMayNotMapDatabase; 
@property (readonly) double databaseSaveInterval; 
@property (readonly) double databaseSaveLatency; 
@property (readonly) long long concurrentInstallOperations; 
@property (readonly) NSArray * preferredLocalizations; 
@property (readonly) BOOL markLocalizationsStoredInDatabase; 
@property (readonly) BOOL alwaysUseDebugOpenWithMenus; 
@property (getter=isRegionChina,readonly) BOOL regionChina; 
@property (readonly) NSData * HMACSecret; 
+(id)sharedInstance;
+(BOOL)appleInternal;
+(BOOL)inSyncBubble;
+(BOOL)inXCTestRigInsecure;
+(BOOL)hasServer;
+(BOOL)hasPersistentPreferences;
+(id)systemContainerURL;
+(id)userContainerURL;
+(id)systemGroupContainerURL;
-(id)init;
-(id)debugDescription;
-(NSArray *)preferredLocalizations;
-(BOOL)isServer;
-(BOOL)allowsAlternateIcons;
-(BOOL)isInXCTestRigInsecure;
-(NSURL *)dbRecoveryFileURL;
-(id)serviceNameForConnectionType:(unsigned short)arg1 ;
-(BOOL)isInEducationMode;
-(void)setHasServer:(BOOL)arg1 ;
-(BOOL)isAppleInternal;
-(BOOL)hasServer;
-(BOOL)hasPersistentPreferences;
-(NSURL *)systemContainerURL;
-(NSURL *)userContainerURL;
-(NSURL *)systemGroupContainerURL;
-(unsigned)proxyUIDForCurrentEffectiveUID;
-(id)databaseStoreFileURLWithUID:(unsigned)arg1 ;
-(unsigned)currentSchemaVersion;
-(unsigned)proxyUIDForUID:(unsigned)arg1 ;
-(id)darwinNotificationNameForCurrentUser:(id)arg1 ;
-(NSURL *)databaseStoreFileURL;
-(NSURL *)queriedSchemesMapFileURL;
-(NSURL *)identifiersFileURL;
-(NSURL *)preferencesFileURL;
-(NSURL *)securePeferencesFileURL;
-(BOOL)abortIfMayNotMapDatabase;
-(BOOL)isInSyncBubble;
-(double)databaseSaveInterval;
-(double)databaseSaveLatency;
-(id)userPreferencesURL;
-(unsigned short)databaseStoreFileMode;
-(NSURL *)dbSentinelFileURL;
-(NSURL *)installJournalDirectoryURL;
-(id)simulatorRootURL;
-(id)simulatorRuntimeVersion;
-(id)simulatorRuntimeBuildVersion;
-(id)classesWithNameForXCTests:(const char*)arg1 ;
-(BOOL)issueSandboxExceptionsIfMayNotMapDatabase;
-(id)preferencesUpdateNotificationName;
-(id)preferencesFileChangeNotificationName;
-(long long)concurrentInstallOperations;
-(BOOL)markLocalizationsStoredInDatabase;
-(BOOL)alwaysUseDebugOpenWithMenus;
-(BOOL)isRegionChina;
-(NSData *)HMACSecret;
-(void)setServer:(BOOL)arg1 ;
-(id)databaseUpdateNotificationName;
@end

