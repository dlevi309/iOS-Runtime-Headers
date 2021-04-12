/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString, NSNumber, NSMutableArray, NSUserDefaults, NSXPCConnection, NSDate;

@interface WLKSettingsStore : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _readWriteQueue;
	BOOL _privateModeEnabled;
	BOOL _sportsScoreSpoilersAllowed;
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
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
+(id)sharedSettings;
+(void)synchronizeSettingsDefaultsForKeys:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)_connection;
-(BOOL)optedIn;
-(NSDate *)lastSyncDate;
-(void)refresh;
-(NSString *)pushToken;
-(id)_dictionaryRepresentation;
-(void)setPushToken:(NSString *)arg1 ;
-(BOOL)synchronize:(unsigned long long)arg1 ;
-(void)_writeToDisk;
-(void)setLastSyncDate:(NSDate *)arg1 ;
-(id)_supportPath;
-(void)setOptedIn:(BOOL)arg1 ;
-(id)_watchListAppsFiltered;
-(void)_updateDisplayNamesForUI:(/*^block*/id)arg1 ;
-(void)synchronize:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)beginIgnoringChanges;
-(void)setStatus:(unsigned long long)arg1 forChannelID:(id)arg2 externalID:(id)arg3 ;
-(void)endIgnoringChanges;
-(void)forceUpdateWithCompletion:(/*^block*/id)arg1 ;
-(id)settingsForChannelID:(id)arg1 externalID:(id)arg2 ;
-(BOOL)sportsScoreSpoilersAllowed;
-(BOOL)privateModeEnabled;
-(id)watchListApps;
-(id)consentedBrands;
-(id)deniedBrands;
-(NSNumber *)optedInVal;
-(void)_readFromDisk;
-(id)_dictionaryOnDisk;
-(void)_dictionaryOnDisk:(/*^block*/id)arg1 ;
-(BOOL)migratedtvOS;
-(BOOL)migratediOS;
-(void)_removeWatchListApp:(id)arg1 ;
-(void)setMigratedtvOS:(BOOL)arg1 ;
-(void)setMigratediOS:(BOOL)arg1 ;
-(void)setLastSyncToCloudDate:(NSDate *)arg1 ;
-(id)_dictionaryRepresentationDataOnly;
-(void)_activeAccountChangedNotification:(id)arg1 ;
-(id)_appsForChannelID:(id)arg1 ;
-(void)_attemptCullingOfObsoleteApp:(id)arg1 ;
-(void)_tickleKVO;
-(void)setName:(id)arg1 forChannelID:(id)arg2 externalID:(id)arg3 ;
-(int)ignoreChangesCount;
-(id)_dictionaryRepresentationCopyingItems:(BOOL)arg1 ;
-(void)setHasOutstandingChanges:(BOOL)arg1 ;
-(void)_writeToDisk:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setIgnoreChangesCount:(int)arg1 ;
-(BOOL)hasOutstandingChanges;
-(void)setPrivateModeEnabled:(BOOL)arg1 ;
-(void)setSportsScoreSpoilersAllowed:(BOOL)arg1 ;
-(id)watchListAppsFiltered;
-(void)setOptedInVal:(NSNumber *)arg1 ;
-(NSDate *)lastSyncToCloudDate;
@end

