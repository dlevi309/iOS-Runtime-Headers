/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@protocol OS_dispatch_queue;
@class NSObject, SBCPlaybackPositionSyncService, SBCPlaybackPositionDomain;

@interface MPUbiquitousPlaybackPositionController : NSObject {

	BOOL _isServiceActive;
	BOOL _externallyActive;
	BOOL _beganUsingPlaybackPositionMetadata;
	BOOL _databaseHasBookmarkableContents;
	BOOL _applicationBecomingActive;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _serviceQueue;
	SBCPlaybackPositionSyncService* _uppServiceProxy;
	SBCPlaybackPositionDomain* _uppDomain;

}

@property (nonatomic,retain,readonly) NSObject*<OS_dispatch_queue> queue;                                 //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain,readonly) NSObject*<OS_dispatch_queue> serviceQueue;                          //@synthesize serviceQueue=_serviceQueue - In the implementation block
@property (nonatomic,retain) SBCPlaybackPositionSyncService * uppServiceProxy;                            //@synthesize uppServiceProxy=_uppServiceProxy - In the implementation block
@property (nonatomic,retain) SBCPlaybackPositionDomain * uppDomain;                                       //@synthesize uppDomain=_uppDomain - In the implementation block
@property (assign,getter=isServiceActive,nonatomic) BOOL serviceActive;                                   //@synthesize isServiceActive=_isServiceActive - In the implementation block
@property (assign,getter=isServiceActive,nonatomic) BOOL beganUsingPlaybackPositionMetadata;              //@synthesize beganUsingPlaybackPositionMetadata=_beganUsingPlaybackPositionMetadata - In the implementation block
@property (assign,nonatomic) BOOL databaseHasBookmarkableContents;                                        //@synthesize databaseHasBookmarkableContents=_databaseHasBookmarkableContents - In the implementation block
@property (nonatomic,readonly) BOOL applicationBecomingActive;                                            //@synthesize applicationBecomingActive=_applicationBecomingActive - In the implementation block
@property (assign,nonatomic) BOOL externallyActive;                                                       //@synthesize externallyActive=_externallyActive - In the implementation block
+(id)sharedUbiquitousPlaybackPositionController;
-(void)_applicationDidEnterBackgroundNotification:(id)arg1 ;
-(void)_defaultMediaLibraryDidChangeNotification:(id)arg1 ;
-(id)init;
-(void)setUppDomain:(SBCPlaybackPositionDomain *)arg1 ;
-(NSObject*<OS_dispatch_queue>)serviceQueue;
-(BOOL)externallyActive;
-(void)beginUsingPlaybackPositionMetadata;
-(void)_applicationDidEnterForegroundNotification:(id)arg1 ;
-(void)setExternallyActive:(BOOL)arg1 ;
-(void)noteChangedPlaybackPositionMetadataForTrackPersistentID:(long long)arg1 isCheckpoint:(BOOL)arg2 ;
-(BOOL)_onQueue_shouldBeActive;
-(id)playbackPositionForLocalEntityIdentifier:(id)arg1 ;
-(id)playbackPositionForLocalEntityIdentifiers:(id)arg1 ;
-(void)persistPlaybackPositionMetadataEntity:(id)arg1 isCheckpoint:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_onServiceQueue_resignActiveService;
-(id)_playbackPositionEntityWithValuesFromMusicLibraryTrackPersistentID:(long long)arg1 ;
-(BOOL)_onQueue_isEnabled;
-(id)_onServiceQueue_connectedUPPServiceProxy;
-(void)_onServiceQueue_becomeActiveService;
-(BOOL)isServiceActive;
-(BOOL)isServiceActive;
-(void)_onServiceQueue_updateActiveServiceIfNeeded;
-(void)setServiceActive:(BOOL)arg1 ;
-(SBCPlaybackPositionSyncService *)uppServiceProxy;
-(void)setUppServiceProxy:(SBCPlaybackPositionSyncService *)arg1 ;
-(void)setBeganUsingPlaybackPositionMetadata:(BOOL)arg1 ;
-(BOOL)databaseHasBookmarkableContents;
-(BOOL)applicationBecomingActive;
-(void)setDatabaseHasBookmarkableContents:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)_applicationWillEnterForegroundNotification:(id)arg1 ;
-(SBCPlaybackPositionDomain *)uppDomain;
-(void)dealloc;
@end

