/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <libobjc.A.dylib/_MPStateDumpPropertyListTransformable.h>

@protocol MPAVRoutingControllerDelegate, MPAVOutputDevicePlaybackDataSource;
@class NSArray, MPAVRoutingControllerSelectionQueue, MPAVRoutingDataSource, NSString, MPAVRoute, NSSet;

@interface MPAVRoutingController : NSObject <_MPStateDumpPropertyListTransformable> {

	NSArray* _cachedRoutes;
	NSArray* _cachedPickedRoutes;
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
+(id)systemRoute;
+(id)_iconNameForRoute:(id)arg1 ;
+(id)_iconImageNameForClusterRoute:(id)arg1 ;
+(id)_currentDeviceRoutingIconImageName;
+(void)getActiveRouteWithCompletion:(/*^block*/id)arg1 ;
+(void)getActiveRouteWithTimeout:(double)arg1 completion:(/*^block*/id)arg2 ;
+(id)_sharedSerialQueue;
+(void)_getActiveRouteWithTimeout:(double)arg1 discoveredRoutes:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)setActiveRoute:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)setActiveRoute:(id)arg1 reason:(id)arg2 completion:(/*^block*/id)arg3 ;
+(BOOL)bundleIdRepresentsLongFormVideoContent:(id)arg1 ;
+(id)_iconImageNameForDeviceSubtypes:(id)arg1 route:(id)arg2 ;
+(id)_iconImageForRoute:(id)arg1 ;
+(id)_currentDeviceRoutingIconImage;
+(id)_iconImageForIdentifier:(id)arg1 ;
+(id)_iconImageForRoutes:(id)arg1 ;
+(id)systemRouteWithContextUID:(id)arg1 ;
-(BOOL)pickRoute:(id)arg1 ;
-(MPAVRoute *)pickedRoute;
-(void)_pickableRoutesDidChangeNotification:(id)arg1 ;
-(void)fetchAvailableRoutesWithCompletionHandler:(/*^block*/id)arg1 ;
-(long long)discoveryMode;
-(void)setCategory:(NSString *)arg1 ;
-(void)_registerNotifications;
-(id)cachedPickedRoutes;
-(void)_activeAudioRouteDidChangeNotification:(id)arg1 ;
-(BOOL)pickSpeakerRoute;
-(void)_externalScreenTypeDidChangeNotification:(id)arg1 ;
-(MPAVRoute *)pendingPickedRoute;
-(void)clearCachedRoutes;
-(id)init;
-(BOOL)supportsMultipleSelection;
-(NSSet *)pendingPickedRoutes;
-(NSString *)representedBundleID;
-(BOOL)receiverRouteIsPicked;
-(void)_volumeControlAvailabilityDidChangeNotification:(id)arg1 ;
-(id<MPAVRoutingControllerDelegate>)delegate;
-(BOOL)addPickedRoute:(id)arg1 ;
-(BOOL)removePickedRoute:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)representsLongFormVideoContent;
-(void)setRepresentedBundleID:(NSString *)arg1 ;
-(void)_onQueueSetExternalScreenType:(long long)arg1 ;
-(void)_clearLegacyCachedRoute;
-(id)updatePickedRoutes;
-(void)_mediaServerDiedNotification:(id)arg1 ;
-(void)unpickTVRoutes;
-(NSString *)category;
-(MPAVRoutingDataSource *)dataSource;
-(id)_pickedRoutesInArray:(id)arg1 ;
-(void)_scheduleSendDelegateRoutesChanged;
-(void)fetchAvailableRoutesWithCompletionQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSArray *)availableRoutes;
-(BOOL)_deviceAvailabilityOverrideState;
-(BOOL)routeIsPendingPick:(id)arg1 ;
-(long long)_volumeControlStateForPickedRoute;
-(void)getActiveRouteWithTimeout:(double)arg1 completion:(/*^block*/id)arg2 ;
-(id<MPAVOutputDevicePlaybackDataSource>)playbackDataSource;
-(NSString *)name;
-(long long)routeTypes;
-(BOOL)pickBestDeviceRoute;
-(void)setRouteTypes:(long long)arg1 ;
-(id)initWithName:(id)arg1 ;
-(BOOL)pickHandsetRoute;
-(void)setDelegate:(id<MPAVRoutingControllerDelegate>)arg1 ;
-(long long)_externalScreenType:(BOOL*)arg1 ;
-(MPAVRoute *)legacyCachedRoute;
-(void)_unregisterNotifications;
-(void)_setVolumeControlStateForPickedRoute:(long long)arg1 ;
-(void)selectRoutes:(id)arg1 operation:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(NSString *)description;
-(void)_routeStatusDidChangeNotification:(id)arg1 ;
-(id)_pickedRouteInArray:(id)arg1 ;
-(void)setPresentedBundleID:(NSString *)arg1 ;
-(void)setFetchAvailableRoutesSynchronously:(BOOL)arg1 ;
-(id)cachedRoutes;
-(id)_stateDumpObject;
-(NSArray *)pickedRoutes;
-(NSString *)presentedBundleID;
-(BOOL)routeIsLeaderOfEndpoint:(id)arg1 ;
-(BOOL)fetchAvailableRoutesSynchronously;
-(BOOL)speakerRouteIsPicked;
-(void)_setExternalScreenType:(long long)arg1 ;
-(long long)externalScreenType;
-(BOOL)_pickRoute:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_promptForHijackIfNeeded:(id)arg1 handler:(/*^block*/id)arg2 ;
-(BOOL)routeOtherThanHandsetAvailable;
-(id)videoRouteForRoute:(id)arg1 ;
-(void)setCachedRoutes:(id)arg1 ;
-(id)initWithDataSource:(id)arg1 name:(id)arg2 ;
-(BOOL)pickRoute:(id)arg1 withPassword:(id)arg2 ;
-(void)selectRoute:(id)arg1 operation:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)routeOtherThanHandsetAndSpeakerAvailable;
-(void)setName:(NSString *)arg1 ;
-(BOOL)wirelessDisplayRouteIsPicked;
-(void)_sendDelegateFailedToPickRouteWithError:(id)arg1 ;
-(BOOL)hasPendingPickedRoutes;
-(BOOL)wirelessDisplayRoutesAvailable;
-(void)unpickAirPlayScreenRouteWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)removePickedRoute:(id)arg1 ;
-(void)setLegacyCachedRoute:(MPAVRoute *)arg1 ;
-(void)setPlaybackDataSource:(id<MPAVOutputDevicePlaybackDataSource>)arg1 ;
-(void)setDiscoveryMode:(long long)arg1 ;
-(BOOL)airtunesRouteIsPicked;
-(BOOL)addPickedRoute:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)volumeControlIsAvailable;
-(BOOL)pickRoute:(id)arg1 withPassword:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_syncUpdateRoutes;
-(id)updateAvailableRoutes;
-(BOOL)handsetRouteIsPicked;
-(void)_sendDelegatePickedRoutesChanged;
-(void)dealloc;
-(void)_updateCachedRoutes;
@end

