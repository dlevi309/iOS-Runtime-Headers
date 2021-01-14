/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (readonly) NSURL * dbSyncInterruptedFileURL; 
@property (getter=isServer) BOOL server;                                                           //@synthesize isServer=_isServer - In the implementation block
@property (getter=isSystemServer,readonly) BOOL systemServer; 
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
@property (readonly) BOOL surrogatesOnlyFindBundleContainerizedBundles; 
@property (readonly) NSData * HMACSecret; 
+(id)sharedInstance;
+(BOOL)inSyncBubble;
+(BOOL)inXCTestRigInsecure;
+(id)systemGroupContainerURL;
+(BOOL)hasPersistentPreferences;
+(id)userContainerURL;
+(BOOL)hasServer;
+(BOOL)appleInternal;
+(id)systemContainerURL;
-(BOOL)isInSyncBubble;
-(BOOL)isServer;
-(NSURL *)installJournalDirectoryURL;
-(id)init;
-(id)preferencesFileChangeNotificationName;
-(void)setServer:(BOOL)arg1 ;
-(double)databaseSaveInterval;
-(BOOL)alwaysUseDebugOpenWithMenus;
-(id)simulatorRuntimeBuildVersion;
-(NSURL *)dbRecoveryFileURL;
-(BOOL)isInEducationMode;
-(NSURL *)securePeferencesFileURL;
-(NSURL *)systemGroupContainerURL;
-(id)databaseStoreFileURLWithUID:(unsigned)arg1 ;
-(BOOL)issueSandboxExceptionsIfMayNotMapDatabase;
-(id)debugDescription;
-(void)setHasServer:(BOOL)arg1 ;
-(NSURL *)preferencesFileURL;
-(id)simulatorRuntimeVersion;
-(BOOL)hasPersistentPreferences;
-(BOOL)allowsAlternateIcons;
-(id)darwinNotificationNameForCurrentUser:(id)arg1 userID:(const unsigned*)arg2 ;
-(BOOL)abortIfMayNotMapDatabase;
-(BOOL)surrogatesOnlyFindBundleContainerizedBundles;
-(unsigned short)databaseStoreFileMode;
-(unsigned)currentSchemaVersion;
-(BOOL)markLocalizationsStoredInDatabase;
-(id)serviceNameForConnectionType:(unsigned short)arg1 ;
-(BOOL)isInXCTestRigInsecure;
-(NSArray *)preferredLocalizations;
-(NSURL *)userContainerURL;
-(NSURL *)dbSentinelFileURL;
-(NSURL *)dbSyncInterruptedFileURL;
-(NSURL *)queriedSchemesMapFileURL;
-(NSURL *)databaseStoreFileURL;
-(double)databaseSaveLatency;
-(BOOL)hasServer;
-(unsigned)proxyUIDForCurrentEffectiveUID;
-(BOOL)isAppleInternal;
-(NSURL *)identifiersFileURL;
-(id)databaseUpdateNotificationNameForUserID:(unsigned)arg1 ;
-(BOOL)isSystemServer;
-(long long)concurrentInstallOperations;
-(id)simulatorRootURL;
-(id)databaseUpdateNotificationName;
-(unsigned)proxyUIDForUID:(unsigned)arg1 ;
-(NSData *)HMACSecret;
-(id)preferencesUpdateNotificationName;
-(BOOL)isRegionChina;
-(NSURL *)systemContainerURL;
-(id)userPreferencesURL;
-(id)classesWithNameForXCTests:(const char*)arg1 ;
@end

