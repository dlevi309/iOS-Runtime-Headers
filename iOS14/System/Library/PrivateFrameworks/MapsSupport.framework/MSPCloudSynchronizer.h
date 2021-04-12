/*
* Generated on Thursday, January 14, 2021 at 2:24:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <libobjc.A.dylib/MSPCloudSynchronizerRunConditionsDelegate.h>
#import <libobjc.A.dylib/MSPCloudNotificationReceiver.h>

@protocol OS_dispatch_source, OS_dispatch_queue, MSPCloudSynchronizerDelegate;
@class NSString, MSPCloudSynchronizerRunConditions, NSObject, NSUUID, MSPCloudClientRegistration, MSPJournal, MSPCloudMigrator, NSArray, MSPCloudKitAccountAccess;

@interface MSPCloudSynchronizer : NSObject <MSPCloudSynchronizerRunConditionsDelegate, MSPCloudNotificationReceiver> {

	BOOL _isRunning;
	BOOL _hasMigratedPreSync;
	BOOL _hasMigrated;
	NSString* _accountID;
	MSPCloudSynchronizerRunConditions* _runConditions;
	NSObject*<OS_dispatch_source> _mergeTimer;
	NSUUID* _clientIdentifier;
	MSPCloudClientRegistration* _clientRegistration;
	MSPJournal* _journal;
	NSObject*<OS_dispatch_queue> _mergeQueue;
	MSPCloudMigrator* _migrator;
	unsigned long long _lastRetryInterval;
	NSArray* _containers;
	id<MSPCloudSynchronizerDelegate> _delegate;
	MSPCloudKitAccountAccess* _cloudAccess;

}

@property (nonatomic,retain) NSString * accountID;                                           //@synthesize accountID=_accountID - In the implementation block
@property (assign,nonatomic) BOOL isRunning;                                                 //@synthesize isRunning=_isRunning - In the implementation block
@property (nonatomic,retain) MSPCloudSynchronizerRunConditions * runConditions;              //@synthesize runConditions=_runConditions - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> mergeTimer;                       //@synthesize mergeTimer=_mergeTimer - In the implementation block
@property (nonatomic,retain) NSUUID * clientIdentifier;                                      //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,retain) MSPCloudClientRegistration * clientRegistration;                //@synthesize clientRegistration=_clientRegistration - In the implementation block
@property (nonatomic,retain) MSPJournal * journal;                                           //@synthesize journal=_journal - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> mergeQueue;                        //@synthesize mergeQueue=_mergeQueue - In the implementation block
@property (nonatomic,retain) MSPCloudMigrator * migrator;                                    //@synthesize migrator=_migrator - In the implementation block
@property (assign,nonatomic) BOOL hasMigratedPreSync;                                        //@synthesize hasMigratedPreSync=_hasMigratedPreSync - In the implementation block
@property (assign,nonatomic) BOOL hasMigrated;                                               //@synthesize hasMigrated=_hasMigrated - In the implementation block
@property (assign,nonatomic) unsigned long long lastRetryInterval;                           //@synthesize lastRetryInterval=_lastRetryInterval - In the implementation block
@property (nonatomic,retain) NSArray * containers;                                           //@synthesize containers=_containers - In the implementation block
@property (assign,nonatomic,__weak) id<MSPCloudSynchronizerDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) MSPCloudKitAccountAccess * cloudAccess;                         //@synthesize cloudAccess=_cloudAccess - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)containers;
-(NSString *)accountID;
-(void)setIsRunning:(BOOL)arg1 ;
-(void)setAccountID:(NSString *)arg1 ;
-(void)handleAccountChangeWithError:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)runConditionsChanged:(id)arg1 ;
-(void)setClientIdentifier:(NSUUID *)arg1 ;
-(void)setMigrator:(MSPCloudMigrator *)arg1 ;
-(MSPJournal *)journal;
-(void)_merge;
-(void)setHasMigratedPreSync:(BOOL)arg1 ;
-(void)setJournal:(MSPJournal *)arg1 ;
-(id<MSPCloudSynchronizerDelegate>)delegate;
-(void)performPreSyncMigrations:(/*^block*/id)arg1 ;
-(void)start;
-(unsigned long long)lastRetryInterval;
-(void)didReceiveRemoteNotification:(id)arg1 ;
-(BOOL)hasMigrated;
-(id)initWithCloudContainers:(id)arg1 clientRegistration:(id)arg2 runConditions:(id)arg3 cloudAccess:(id)arg4 ;
-(unsigned long long)retryIntervalForError:(id)arg1 ;
-(void)stop;
-(MSPCloudClientRegistration *)clientRegistration;
-(void)setMergeQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDelegate:(id<MSPCloudSynchronizerDelegate>)arg1 ;
-(void)requestMerge;
-(MSPCloudMigrator *)migrator;
-(void)setContainers:(NSArray *)arg1 ;
-(BOOL)isCurrentlyRunning;
-(id)initWithContainers:(id)arg1 ;
-(void)setHasMigrated:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)mergeQueue;
-(void)requestMergeWithReason:(unsigned long long)arg1 ;
-(void)merge;
-(void)setRunConditions:(MSPCloudSynchronizerRunConditions *)arg1 ;
-(BOOL)isRunning;
-(void)requestMergeWithReason:(unsigned long long)arg1 afterDelay:(unsigned long long)arg2 ;
-(MSPCloudKitAccountAccess *)cloudAccess;
-(NSObject*<OS_dispatch_source>)mergeTimer;
-(void)prepareForMergeWithGroup:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithDefaultLocalContainers;
-(void)setMergeTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSUUID *)clientIdentifier;
-(BOOL)hasMigratedPreSync;
-(id)initWithDefaultRemoteContainers;
-(void)setLastRetryInterval:(unsigned long long)arg1 ;
-(void)setClientRegistration:(MSPCloudClientRegistration *)arg1 ;
-(void)setCloudAccess:(MSPCloudKitAccountAccess *)arg1 ;
-(void)performMigrationsWithCompletion:(/*^block*/id)arg1 ;
-(MSPCloudSynchronizerRunConditions *)runConditions;
-(void)dealloc;
@end

