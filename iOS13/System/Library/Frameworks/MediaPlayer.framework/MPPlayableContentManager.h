/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/CARSessionObserving.h>

@protocol OS_dispatch_queue, MPPlayableContentDataSource, MPPlayableContentDelegate;
@class NSMutableSet, NSObject, NSOperationQueue, CARSessionStatus, MPPlayableContentManagerContext, NSArray, NSString;

@interface MPPlayableContentManager : NSObject <CARSessionObserving> {

	NSMutableSet* _mutatedContentItems;
	NSMutableSet* _contentItemIdentifiersSentToMediaRemote;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSOperationQueue* _artworkUpdateQueue;
	BOOL _coalescingUpdates;
	BOOL _scheduledSupportedAPIsChange;
	CARSessionStatus* _currentSessionStatus;
	id<MPPlayableContentDataSource> _dataSource;
	id<MPPlayableContentDelegate> _delegate;
	MPPlayableContentManagerContext* _context;
	NSArray* _nowPlayingIdentifiers;

}

@property (nonatomic,retain) MPPlayableContentManagerContext * context;                      //@synthesize context=_context - In the implementation block
@property (assign,nonatomic,__weak) id<MPPlayableContentDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<MPPlayableContentDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * nowPlayingIdentifiers;                                  //@synthesize nowPlayingIdentifiers=_nowPlayingIdentifiers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_deviceIsCarplayCapable;
+(id)sharedContentManager;
-(id)init;
-(void)dealloc;
-(id<MPPlayableContentDelegate>)delegate;
-(void)setDelegate:(id<MPPlayableContentDelegate>)arg1 ;
-(id)_init;
-(MPPlayableContentManagerContext *)context;
-(void)setContext:(MPPlayableContentManagerContext *)arg1 ;
-(id<MPPlayableContentDataSource>)dataSource;
-(void)setDataSource:(id<MPPlayableContentDataSource>)arg1 ;
-(void)reloadData;
-(void)beginUpdates;
-(void)endUpdates;
-(void)_setupNotifications;
-(void)_tearDownNotifications;
-(void)sessionDidConnect:(id)arg1 ;
-(void)sessionDidDisconnect:(id)arg1 ;
-(void)setNowPlayingIdentifiers:(NSArray *)arg1 ;
-(void)_contentItemChangedNotification:(id)arg1 ;
-(void)_enqueueArtworkUpdate:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_enqueueArtworkUpdate:(id)arg1 size:(CGSize)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)_setupMediaRemoteEndpoint;
-(void)_tearDownMediaRemoteEndpoint;
-(void)_pushContentItemsUpdate;
-(void)_handlePlaybackInitializationCompletedWithContext:(id)arg1 error:(id)arg2 ;
-(BOOL)_contentItemWasSentToMediaRemote:(id)arg1 ;
-(BOOL)_onQueueContentItemWasSentToMediaRemote:(id)arg1 ;
-(void)_markContentItemsAsSentToMediaRemote:(id)arg1 ;
-(void)_limitedUIChanged:(id)arg1 ;
-(void)_browsableContentEndpointChanged:(id)arg1 ;
-(BOOL)_musicListsLimited;
-(BOOL)_areContentLimitsEnforced;
-(void)_updateSupportedAPIs;
-(void)_scheduleUpdateSupportedAPIs;
-(NSArray *)nowPlayingIdentifiers;
@end

