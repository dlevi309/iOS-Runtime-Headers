/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)sharedContentManager;
+(BOOL)_deviceIsCarplayCapable;
-(void)beginUpdates;
-(void)sessionDidDisconnect:(id)arg1 ;
-(void)_setupNotifications;
-(void)sessionDidConnect:(id)arg1 ;
-(void)endUpdates;
-(void)_updateSupportedAPIs;
-(id)init;
-(void)_contentItemChangedNotification:(id)arg1 ;
-(id<MPPlayableContentDelegate>)delegate;
-(void)_pushContentItemsUpdate;
-(id<MPPlayableContentDataSource>)dataSource;
-(void)_scheduleUpdateSupportedAPIs;
-(void)_tearDownNotifications;
-(MPPlayableContentManagerContext *)context;
-(NSArray *)nowPlayingIdentifiers;
-(void)setNowPlayingIdentifiers:(NSArray *)arg1 ;
-(void)setDelegate:(id<MPPlayableContentDelegate>)arg1 ;
-(BOOL)_contentItemWasSentToMediaRemote:(id)arg1 ;
-(void)setDataSource:(id<MPPlayableContentDataSource>)arg1 ;
-(void)_tearDownMediaRemoteEndpoint;
-(BOOL)_musicListsLimited;
-(void)reloadData;
-(void)_setupMediaRemoteEndpoint;
-(BOOL)_onQueueContentItemWasSentToMediaRemote:(id)arg1 ;
-(void)_markContentItemsAsSentToMediaRemote:(id)arg1 ;
-(BOOL)_areContentLimitsEnforced;
-(id)_init;
-(void)_limitedUIChanged:(id)arg1 ;
-(void)_handlePlaybackInitializationCompletedWithContext:(id)arg1 error:(id)arg2 ;
-(void)_enqueueArtworkUpdate:(id)arg1 size:(CGSize)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)_browsableContentEndpointChanged:(id)arg1 ;
-(void)dealloc;
-(void)_enqueueArtworkUpdate:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setContext:(MPPlayableContentManagerContext *)arg1 ;
@end

