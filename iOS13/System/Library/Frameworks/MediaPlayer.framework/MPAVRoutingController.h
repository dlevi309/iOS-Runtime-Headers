/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <libobjc.A.dylib/_MPStateDumpPropertyListTransformable.h>

@protocol MPAVRoutingControllerDelegate, MPAVOutputDevicePlaybackDataSource;
@class NSArray, NSMutableArray, MPAVRoutingControllerSelectionQueue, MPAVRoutingDataSource, NSString, MPAVRoute, NSSet;

@interface MPAVRoutingController : NSObject <_MPStateDumpPropertyListTransformable> {

	NSArray* _cachedRoutes;
	NSArray* _cachedPickedRoutes;
	NSMutableArray* _asyncFetchingCompletionHandlers;
	BOOL _asyncFetchingRoutes;
	long long _externalScreenType;
	BOOL _hasExternalScreenType;
	BOOL _scheduledSendDelegateRoutesChanged;
	long long _volumeControlStateForPickedRoute;
	MPAVRoutingControllerSelectionQueue* _routingControllerSelectionQueue;
	int _deviceAvailabilityNotifyToken;
	BOOL _deviceAvailabilityOverrideState;
	BOOL _fetchAvailableRoutesSynchronously;
	BOOL _representsLongFormVideoContent;
	id<MPAVRoutingControllerDelegate> _delegate;
	MPAVRoutingDataSource* _dataSource;
	NSString* _name;
	long long _discoveryMode;
	NSString* _category;
	long long _routeTypes;
	MPAVRoute* _legacyCachedRoute;
	id<MPAVOutputDevicePlaybackDataSource> _playbackDataSource;
	NSString* _presentedBundleID;
	NSString* _representedBundleID;

}

@property (nonatomic,retain) MPAVRoute * legacyCachedRoute;                                                 //@synthesize legacyCachedRoute=_legacyCachedRoute - In the implementation block
@property (assign,nonatomic,__weak) id<MPAVOutputDevicePlaybackDataSource> playbackDataSource;              //@synthesize playbackDataSource=_playbackDataSource - In the implementation block
@property (nonatomic,copy) NSString * presentedBundleID;                                                    //@synthesize presentedBundleID=_presentedBundleID - In the implementation block
@property (nonatomic,copy) NSString * representedBundleID;                                                  //@synthesize representedBundleID=_representedBundleID - In the implementation block
@property (nonatomic,readonly) BOOL representsLongFormVideoContent;                                         //@synthesize representsLongFormVideoContent=_representsLongFormVideoContent - In the implementation block
@property (assign,nonatomic,__weak) id<MPAVRoutingControllerDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) MPAVRoutingDataSource * dataSource;                                          //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,copy) NSString * name;                                                                 //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) long long discoveryMode;                                                       //@synthesize discoveryMode=_discoveryMode - In the implementation block
@property (assign,nonatomic) BOOL fetchAvailableRoutesSynchronously;                                        //@synthesize fetchAvailableRoutesSynchronously=_fetchAvailableRoutesSynchronously - In the implementation block
@property (nonatomic,readonly) long long externalScreenType; 
@property (nonatomic,copy,readonly) NSArray * availableRoutes; 
@property (nonatomic,copy) NSString * category;                                                             //@synthesize category=_category - In the implementation block
@property (assign,nonatomic) long long routeTypes;                                                          //@synthesize routeTypes=_routeTypes - In the implementation block
@property (nonatomic,readonly) MPAVRoute * pickedRoute; 
@property (nonatomic,readonly) NSArray * pickedRoutes; 
@property (nonatomic,readonly) NSSet * pendingPickedRoutes; 
@property (nonatomic,readonly) MPAVRoute * pendingPickedRoute; 
@property (nonatomic,readonly) BOOL hasPendingPickedRoutes; 
@property (nonatomic,readonly) BOOL volumeControlIsAvailable; 
@property (nonatomic,readonly) BOOL supportsMultipleSelection; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_iconImageForRoute:(id)arg1 ;
+(void)getActiveRouteWithTimeout:(double)arg1 completion:(/*^block*/id)arg2 ;
+(id)_sharedSerialQueue;
+(void)_getActiveRouteWithTimeout:(double)arg1 discoveredRoutes:(id)arg2 completion:(/*^block*/id)arg3 ;
+(BOOL)bundleIdRepresentsLongFormVideoContent:(id)arg1 ;
+(id)_iconImageForIdentifier:(id)arg1 ;
+(id)_currentDeviceRoutingIconImage;
+(void)getActiveRouteWithCompletion:(/*^block*/id)arg1 ;
+(void)setActiveRoute:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)setActiveRoute:(id)arg1 reason:(id)arg2 completion:(/*^block*/id)arg3 ;
+(id)systemRoute;
+(id)systemRouteWithContextUID:(id)arg1 ;
+(id)_currentDeviceRoutingIconImageName;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(NSString *)name;
-(id<MPAVRoutingControllerDelegate>)delegate;
-(void)setDelegate:(id<MPAVRoutingControllerDelegate>)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)initWithName:(id)arg1 ;
-(NSString *)category;
-(void)setCategory:(NSString *)arg1 ;
-(MPAVRoutingDataSource *)dataSource;
-(void)_registerNotifications;
-(void)_unregisterNotifications;
-(void)setDiscoveryMode:(long long)arg1 ;
-(long long)discoveryMode;
-(id)_stateDumpObject;
-(NSArray *)pickedRoutes;
-(long long)_volumeControlStateForPickedRoute;
-(BOOL)_deviceAvailabilityOverrideState;
-(id)initWithDataSource:(id)arg1 name:(id)arg2 ;
-(NSArray *)availableRoutes;
-(long long)externalScreenType;
-(BOOL)hasPendingPickedRoutes;
-(MPAVRoute *)pickedRoute;
-(MPAVRoute *)pendingPickedRoute;
-(NSSet *)pendingPickedRoutes;
-(BOOL)routeIsLeaderOfEndpoint:(id)arg1 ;
-(BOOL)routeIsPendingPick:(id)arg1 ;
-(void)setRouteTypes:(long long)arg1 ;
-(BOOL)volumeControlIsAvailable;
-(void)setPresentedBundleID:(NSString *)arg1 ;
-(void)setRepresentedBundleID:(NSString *)arg1 ;
-(BOOL)airtunesRouteIsPicked;
-(void)fetchAvailableRoutesWithCompletionQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchAvailableRoutesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getActiveRouteWithTimeout:(double)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)handsetRouteIsPicked;
-(BOOL)pickBestDeviceRoute;
-(BOOL)pickHandsetRoute;
-(BOOL)pickSpeakerRoute;
-(void)selectRoute:(id)arg1 operation:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)speakerRouteIsPicked;
-(BOOL)receiverRouteIsPicked;
-(BOOL)routeOtherThanHandsetAndSpeakerAvailable;
-(BOOL)routeOtherThanHandsetAvailable;
-(void)unpickAirPlayScreenRouteWithCompletion:(/*^block*/id)arg1 ;
-(id)videoRouteForRoute:(id)arg1 ;
-(BOOL)wirelessDisplayRouteIsPicked;
-(BOOL)wirelessDisplayRoutesAvailable;
-(void)clearCachedRoutes;
-(void)unpickTVRoutes;
-(void)_clearLegacyCachedRoute;
-(long long)_externalScreenType:(BOOL*)arg1 ;
-(void)_onQueue_clearCachedRoutes;
-(void)_onQueueSetExternalScreenType:(long long)arg1 ;
-(id)_pickedRouteInArray:(id)arg1 ;
-(id)_pickedRoutesInArray:(id)arg1 ;
-(void)_promptForHijackIfNeeded:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_scheduleSendDelegateRoutesChanged;
-(void)_sendDelegateFailedToPickRouteWithError:(id)arg1 ;
-(void)_sendDelegatePickedRoutesChanged;
-(void)_setExternalScreenType:(long long)arg1 ;
-(void)_setVolumeControlStateForPickedRoute:(long long)arg1 ;
-(void)_updateCachedRoutes;
-(void)_activeAudioRouteDidChangeNotification:(id)arg1 ;
-(void)_externalScreenTypeDidChangeNotification:(id)arg1 ;
-(void)_mediaServerDiedNotification:(id)arg1 ;
-(void)_pickableRoutesDidChangeNotification:(id)arg1 ;
-(void)_routeStatusDidChangeNotification:(id)arg1 ;
-(void)_volumeControlAvailabilityDidChangeNotification:(id)arg1 ;
-(BOOL)pickRoute:(id)arg1 ;
-(BOOL)pickRoute:(id)arg1 withPassword:(id)arg2 ;
-(BOOL)pickRoute:(id)arg1 withPassword:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_pickRoute:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)supportsMultipleSelection;
-(BOOL)addPickedRoute:(id)arg1 ;
-(BOOL)addPickedRoute:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)removePickedRoute:(id)arg1 ;
-(BOOL)removePickedRoute:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)fetchAvailableRoutesSynchronously;
-(void)setFetchAvailableRoutesSynchronously:(BOOL)arg1 ;
-(long long)routeTypes;
-(MPAVRoute *)legacyCachedRoute;
-(void)setLegacyCachedRoute:(MPAVRoute *)arg1 ;
-(id<MPAVOutputDevicePlaybackDataSource>)playbackDataSource;
-(void)setPlaybackDataSource:(id<MPAVOutputDevicePlaybackDataSource>)arg1 ;
-(NSString *)presentedBundleID;
-(NSString *)representedBundleID;
-(BOOL)representsLongFormVideoContent;
@end

