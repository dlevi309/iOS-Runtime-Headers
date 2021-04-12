/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString, NSNumber, NSMutableArray, NSUserDefaults, NSXPCConnection, NSDate;

@interface WLKSettingsStore : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _readWriteQueue;
	NSString* _pushToken;
	NSString* _accountID;
	NSNumber* _optedInVal;
	BOOL _optedIn;
	BOOL _migratediOS;
	BOOL _migratedtvOS;
	NSMutableArray* _apps;
	NSUserDefaults* _defaultsAccessor;
	int _didChangeNotificationToken;
	NSXPCConnection* _connection;
	BOOL _hasOutstandingChanges;
	int _ignoreChangesCount;
	NSDate* _lastSyncDate;
	NSDate* _lastSyncToCloudDate;

}

@property (assign) int ignoreChangesCount;                                     //@synthesize ignoreChangesCount=_ignoreChangesCount - In the implementation block
@property (assign) BOOL hasOutstandingChanges;                                 //@synthesize hasOutstandingChanges=_hasOutstandingChanges - In the implementation block
@property (assign,nonatomic) BOOL privateModeEnabled; 
@property (assign,nonatomic) BOOL sportsScoreSpoilersAllowed; 
@property (assign,nonatomic) BOOL optedIn; 
@property (nonatomic,copy) NSNumber * optedInVal;                              //@synthesize optedInVal=_optedInVal - In the implementation block
@property (assign,nonatomic) BOOL migratediOS; 
@property (assign,nonatomic) BOOL migratedtvOS; 
@property (nonatomic,copy) NSString * pushToken; 
@property (nonatomic,copy,readonly) NSDate * lastSyncDate;                     //@synthesize lastSyncDate=_lastSyncDate - In the implementation block
@property (nonatomic,copy,readonly) NSDate * lastSyncToCloudDate;              //@synthesize lastSyncToCloudDate=_lastSyncToCloudDate - In the implementation block
+(id)sharedSettings;
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
+(void)synchronizeSettingsDefaultsForKeys:(id)arg1 ;
-(void)setPushToken:(NSString *)arg1 ;
-(void)synchronize:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)refresh;
-(void)setHasOutstandingChanges:(BOOL)arg1 ;
-(void)_writeToDisk;
-(NSString *)pushToken;
-(id)init;
-(void)_updateDisplayNamesForUI:(/*^block*/id)arg1 ;
-(void)setLastSyncDate:(NSDate *)arg1 ;
-(id)_dictionaryOnDisk;
-(void)setMigratedtvOS:(BOOL)arg1 ;
-(void)setLastSyncToCloudDate:(NSDate *)arg1 ;
-(void)setPrivateModeEnabled:(BOOL)arg1 ;
-(id)_dictionaryRepresentationDataOnly;
-(id)watchListAppsFiltered;
-(void)setName:(id)arg1 forChannelID:(id)arg2 externalID:(id)arg3 ;
-(NSNumber *)optedInVal;
-(void)_attemptCullingOfObsoleteApp:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(void)beginIgnoringChanges;
-(void)_activeAccountChangedNotification:(id)arg1 ;
-(void)_tickleKVO;
-(void)_dictionaryOnDisk:(/*^block*/id)arg1 ;
-(int)ignoreChangesCount;
-(id)description;
-(BOOL)sportsScoreSpoilersAllowed;
-(id)deniedBrands;
-(void)endIgnoringChanges;
-(void)setIgnoreChangesCount:(int)arg1 ;
-(BOOL)migratedtvOS;
-(id)_supportPath;
-(NSDate *)lastSyncDate;
-(void)forceUpdateWithCompletion:(/*^block*/id)arg1 ;
-(void)setOptedIn:(BOOL)arg1 ;
-(void)setStatus:(unsigned long long)arg1 forChannelID:(id)arg2 externalID:(id)arg3 ;
-(id)_dictionaryRepresentationCopyingItems:(BOOL)arg1 ;
-(BOOL)synchronize:(unsigned long long)arg1 ;
-(id)settingsForChannelID:(id)arg1 externalID:(id)arg2 ;
-(void)_writeToDisk:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSDate *)lastSyncToCloudDate;
-(id)consentedBrands;
-(id)_connection;
-(void)setSportsScoreSpoilersAllowed:(BOOL)arg1 ;
-(BOOL)privateModeEnabled;
-(BOOL)optedIn;
-(BOOL)migratediOS;
-(BOOL)hasOutstandingChanges;
-(id)_appsForChannelID:(id)arg1 ;
-(void)_readFromDisk;
-(id)_watchListAppsFiltered;
-(void)_removeWatchListApp:(id)arg1 ;
-(id)watchListApps;
-(void)setOptedInVal:(NSNumber *)arg1 ;
-(void)dealloc;
-(void)setMigratediOS:(BOOL)arg1 ;
@end

