/*
* Generated on Monday, March 1, 2021 at 2:35:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/CoreAccessories/PlugIns/Features/MediaLibrary-iOS.feature/MediaLibrary-iOS
*/


@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class NSMutableDictionary, NSString, ACCMediaLibraryShim, ACCMediaLibraryAccessory, NSObject, MPMusicPlayerController, NSArray;

@interface ACCMediaLibraryShimInfo : NSObject {

	NSMutableDictionary* _dbUpdateList;
	NSString* _syncValidityPersistentID;
	BOOL _sendHideNonLocal;
	BOOL _showCloudTracks;
	BOOL _showCloudTracksLastSent;
	BOOL _sendPlayAllSongsCapable;
	BOOL _requestedTransferID;
	BOOL _requestedMetaList;
	BOOL _requestedMetaProperties;
	BOOL _processingDiffUpdate;
	BOOL _isShuttingDown;
	BOOL _enableLibraryUpdate;
	int _libraryType;
	ACCMediaLibraryShim* _context;
	ACCMediaLibraryAccessory* _accessory;
	id _mpMediaLibrary;
	NSString* _anchor;
	NSObject*<OS_dispatch_queue> _libraryUpdateQ;
	NSString* _UIDString;
	NSObject*<OS_dispatch_semaphore> _waitForWindowSem;
	NSObject*<OS_dispatch_queue> _mpMusicPlayerControllerQueue;
	MPMusicPlayerController* _mpMusicPlayerControllerHandler;
	NSArray* _stationsGroupList;

}

@property (nonatomic,readonly) BOOL enableLibraryUpdate;                                             //@synthesize enableLibraryUpdate=_enableLibraryUpdate - In the implementation block
@property (nonatomic,retain) NSArray * stationsGroupList;                                            //@synthesize stationsGroupList=_stationsGroupList - In the implementation block
@property (nonatomic,readonly) ACCMediaLibraryShim * context;                                        //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) ACCMediaLibraryAccessory * accessory;                                 //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,readonly) BOOL isShuttingDown;                                                  //@synthesize isShuttingDown=_isShuttingDown - In the implementation block
@property (nonatomic,readonly) id mpMediaLibrary;                                                    //@synthesize mpMediaLibrary=_mpMediaLibrary - In the implementation block
@property (nonatomic,retain) NSString * anchor;                                                      //@synthesize anchor=_anchor - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> libraryUpdateQ;                          //@synthesize libraryUpdateQ=_libraryUpdateQ - In the implementation block
@property (nonatomic,readonly) int libraryType;                                                      //@synthesize libraryType=_libraryType - In the implementation block
@property (nonatomic,readonly) NSString * UIDString;                                                 //@synthesize UIDString=_UIDString - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_semaphore> waitForWindowSem;                    //@synthesize waitForWindowSem=_waitForWindowSem - In the implementation block
@property (nonatomic,readonly) BOOL subscribedToAppleMusic; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> mpMusicPlayerControllerQueue;              //@synthesize mpMusicPlayerControllerQueue=_mpMusicPlayerControllerQueue - In the implementation block
@property (nonatomic,retain) MPMusicPlayerController * mpMusicPlayerControllerHandler;               //@synthesize mpMusicPlayerControllerHandler=_mpMusicPlayerControllerHandler - In the implementation block
+(id)getMediaItemForContentItem:(id)arg1 propertyList:(id)arg2 playlistContent:(id)arg3 ;
+(BOOL)isItemAd:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(ACCMediaLibraryShim *)context;
-(NSString *)anchor;
-(void)setAnchor:(NSString *)arg1 ;
-(ACCMediaLibraryAccessory *)accessory;
-(void)_canShowCloudTracksDidChangeNotification:(id)arg1 ;
-(BOOL)isShuttingDown;
-(void)_mediaLibraryChanged:(id)arg1 ;
-(id)mpMediaLibrary;
-(BOOL)subscribedToAppleMusic;
-(id)getPlaylistItems:(id)arg1 ;
-(id)_handlePlaylistContentForEntify:(id)arg1 style:(int)arg2 revision:(id)arg3 ;
-(long long)_checkAndWaitForWindowOk:(long long)arg1 ;
-(BOOL)_isVisibleUpdate:(id)arg1 ;
-(long long)_attemptUpdate:(/*^block*/id)arg1 ;
-(id)_handleMediaLibraryPlaylistUpdate:(id)arg1 forLibrary:(id)arg2 forProperties:(id)arg3 success:(BOOL*)arg4 ;
-(id)_handleMediaLibraryItemUpdate:(id)arg1 forLibrary:(id)arg2 forProperties:(id)arg3 success:(BOOL*)arg4 forceDelete:(BOOL)arg5 ;
-(void)_sendRadioLibraryUpdates;
-(void)_beginRadioLibraryUpdates;
-(id)_beginMediaLibraryUpdatesWithAnchor:(id)arg1 validity:(id)arg2 ;
-(id)dbUpdateListDesc;
-(void)_radioLibraryChanged:(id)arg1 ;
-(id)_getUIDString;
-(void)_registerForMPNotifications;
-(NSString *)UIDString;
-(id)_getMediaItemForPersistentID:(unsigned long long)arg1 ;
-(void)playWithQuery:(id)arg1 andFirstItem:(id)arg2 ;
-(void)_startPlaybackOfRadioStation:(unsigned long long)arg1 ;
-(void)_startPlaybackOfCollection:(unsigned long long)arg1 ofType:(int)arg2 withFirst:(id)arg3 orIndex:(unsigned)arg4 ;
-(void)_startMLPlaybackOfAllSongsStartItem:(id)arg1 ;
-(id)initWithMediaLibrary:(id)arg1 accessory:(id)arg2 Context:(id)arg3 LibraryType:(int)arg4 ;
-(void)startSendingMediaLibraryUpdates:(id)arg1 lastRevision:(id)arg2 requestedTransferID:(BOOL)arg3 requestedMetaList:(BOOL)arg4 requestedMetaProperties:(BOOL)arg5 ;
-(void)stopSendingMediaLibraryUpdates;
-(void)shuttingDown;
-(void)startPlaybackOfItems:(id)arg1 withFirst:(unsigned)arg2 ;
-(void)startPlaybackOfCollection:(unsigned long long)arg1 ofType:(int)arg2 withFirst:(unsigned)arg3 ;
-(void)startPlaybackOfCollection:(unsigned long long)arg1 ofType:(int)arg2 withFirstPersistentID:(unsigned long long)arg3 ;
-(void)startMLPlaybackWithResume:(BOOL)arg1 ;
-(void)startMLPlaybackOfAllSongs;
-(void)startMLPlaybackOfAllSongsStartPersistentID:(unsigned long long)arg1 ;
-(void)confirmMediaLibraryUpdateLastRevision:(id)arg1 updateCount:(unsigned)arg2 ;
-(void)confirmMediaLibraryPlaylistContentUpdateLastRevision:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)libraryUpdateQ;
-(int)libraryType;
-(NSObject*<OS_dispatch_semaphore>)waitForWindowSem;
-(NSObject*<OS_dispatch_queue>)mpMusicPlayerControllerQueue;
-(void)setMpMusicPlayerControllerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(MPMusicPlayerController *)mpMusicPlayerControllerHandler;
-(void)setMpMusicPlayerControllerHandler:(MPMusicPlayerController *)arg1 ;
-(BOOL)enableLibraryUpdate;
-(NSArray *)stationsGroupList;
-(void)setStationsGroupList:(NSArray *)arg1 ;
@end

