/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary, MPAVBatteryLevel, NSArray, MPAVRouteConnection;

@interface MPAVRoute : NSObject <NSSecureCoding> {

	NSString* _routeName;
	BOOL _picked;
	NSDictionary* _avRouteDescription;
	MPAVRoute* _wirelessDisplayRoute;
	long long _displayRouteType;
	MPAVBatteryLevel* _batteryLevel;
	BOOL _canAccessRemoteAssets;
	BOOL _canPlayEncryptedProgressiveDownloadAssets;
	BOOL _canFetchMediaDataFromSender;
	BOOL _presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
	BOOL _pickedOnPairedDevice;
	BOOL _playingOnPairedDevice;
	BOOL _requiresPassword;
	BOOL _carplayRoute;
	BOOL _homePodRoute;
	BOOL _b520Route;
	BOOL _homeTheaterRoute;
	BOOL _clusterRoute;
	NSString* _routeUID;
	NSString* _productIdentifier;
	NSString* _groupUID;
	long long _routeType;
	long long _pickableRouteType;
	long long _routeSubtype;
	NSArray* _clusterComposition;
	NSArray* _auxiliaryDevices;
	NSString* _playingPairedDeviceName;
	void* _externalDevice;
	long long _originalRouteSubtype;
	MPAVRouteConnection* _connection;

}

@property (getter=_externalDevice,nonatomic,readonly) void* externalDevice;                                       //@synthesize externalDevice=_externalDevice - In the implementation block
@property (nonatomic,readonly) BOOL isSplitRoute; 
@property (nonatomic,readonly) long long numberOfOutputDevices; 
@property (nonatomic,copy) NSString * routeName; 
@property (assign,getter=isPicked,nonatomic) BOOL picked; 
@property (getter=isRoutingToWirelessDevice,nonatomic,readonly) BOOL routingToWirelessDevice; 
@property (nonatomic,readonly) NSDictionary * avRouteDescription; 
@property (nonatomic,retain) MPAVRoute * wirelessDisplayRoute; 
@property (assign,nonatomic) long long displayRouteType; 
@property (nonatomic,readonly) long long originalRouteSubtype;                                                    //@synthesize originalRouteSubtype=_originalRouteSubtype - In the implementation block
@property (nonatomic,readonly) MPAVRouteConnection * connection;                                                  //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) NSString * designatedGroupLeaderName; 
@property (nonatomic,readonly) NSArray * routeNames; 
@property (nonatomic,readonly) NSString * routeUID;                                                               //@synthesize routeUID=_routeUID - In the implementation block
@property (nonatomic,readonly) NSString * productIdentifier;                                                      //@synthesize productIdentifier=_productIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * groupUID;                                                               //@synthesize groupUID=_groupUID - In the implementation block
@property (nonatomic,readonly) long long routeType;                                                               //@synthesize routeType=_routeType - In the implementation block
@property (nonatomic,readonly) long long pickableRouteType;                                                       //@synthesize pickableRouteType=_pickableRouteType - In the implementation block
@property (nonatomic,readonly) long long routeSubtype;                                                            //@synthesize routeSubtype=_routeSubtype - In the implementation block
@property (nonatomic,readonly) NSArray * clusterComposition;                                                      //@synthesize clusterComposition=_clusterComposition - In the implementation block
@property (nonatomic,readonly) BOOL canAccessRemoteAssets;                                                        //@synthesize canAccessRemoteAssets=_canAccessRemoteAssets - In the implementation block
@property (nonatomic,readonly) BOOL canPlayEncryptedProgressiveDownloadAssets;                                    //@synthesize canPlayEncryptedProgressiveDownloadAssets=_canPlayEncryptedProgressiveDownloadAssets - In the implementation block
@property (nonatomic,readonly) BOOL canFetchMediaDataFromSender;                                                  //@synthesize canFetchMediaDataFromSender=_canFetchMediaDataFromSender - In the implementation block
@property (nonatomic,readonly) BOOL presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;              //@synthesize presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets=_presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets - In the implementation block
@property (nonatomic,readonly) BOOL isDeviceRoute; 
@property (getter=isProxyGroupPlayer,nonatomic,readonly) BOOL proxyGroupPlayer; 
@property (getter=isVolumeControlAvailable,nonatomic,readonly) BOOL volumeControlAvailable; 
@property (nonatomic,readonly) BOOL supportsGrouping; 
@property (nonatomic,readonly) BOOL supportsAirPlayGrouping; 
@property (nonatomic,readonly) BOOL supportsRemoteControl; 
@property (getter=isSplitRoute,nonatomic,readonly) BOOL splitRoute; 
@property (getter=isSplitterCapable,nonatomic,readonly) BOOL splitterCapable; 
@property (nonatomic,readonly) MPAVBatteryLevel * batteryLevel;                                                   //@synthesize batteryLevel=_batteryLevel - In the implementation block
@property (nonatomic,readonly) NSArray * auxiliaryDevices;                                                        //@synthesize auxiliaryDevices=_auxiliaryDevices - In the implementation block
@property (nonatomic,readonly) NSString * playingPairedDeviceName;                                                //@synthesize playingPairedDeviceName=_playingPairedDeviceName - In the implementation block
@property (getter=isPickedOnPairedDevice,nonatomic,readonly) BOOL pickedOnPairedDevice;                           //@synthesize pickedOnPairedDevice=_pickedOnPairedDevice - In the implementation block
@property (getter=isPlayingOnPairedDevice,nonatomic,readonly) BOOL playingOnPairedDevice;                         //@synthesize playingOnPairedDevice=_playingOnPairedDevice - In the implementation block
@property (getter=isAirPlayingToDevice,nonatomic,readonly) BOOL airPlayingToDevice; 
@property (nonatomic,readonly) NSString * groupLeaderAirplayIdentifier; 
@property (nonatomic,readonly) BOOL requiresPassword;                                                             //@synthesize requiresPassword=_requiresPassword - In the implementation block
@property (nonatomic,readonly) BOOL supportsWirelessDisplay; 
@property (nonatomic,readonly) long long passwordType; 
@property (getter=isDisplayedAsPicked,nonatomic,readonly) BOOL displayAsPicked; 
@property (getter=isAirpodsRoute,nonatomic,readonly) BOOL airpodsRoute; 
@property (getter=isAppleTVRoute,nonatomic,readonly) BOOL appleTVRoute; 
@property (getter=isBeatsSoloRoute,nonatomic,readonly) BOOL beatsSoloRoute; 
@property (getter=isBeatsStudioRoute,nonatomic,readonly) BOOL beatsStudioRoute; 
@property (getter=isBeatsXRoute,nonatomic,readonly) BOOL beatsXRoute; 
@property (getter=isCarplayRoute,nonatomic,readonly) BOOL carplayRoute;                                           //@synthesize carplayRoute=_carplayRoute - In the implementation block
@property (getter=isDeviceSpeakerRoute,nonatomic,readonly) BOOL deviceSpeakerRoute; 
@property (getter=isHearingDeviceRoute,nonatomic,readonly) BOOL hearingDeviceRoute; 
@property (getter=isHomePodRoute,nonatomic,readonly) BOOL homePodRoute;                                           //@synthesize homePodRoute=_homePodRoute - In the implementation block
@property (getter=isPowerbeatsRoute,nonatomic,readonly) BOOL powerbeatsRoute; 
@property (getter=isSmartAudio,nonatomic,readonly) BOOL smartAudio; 
@property (getter=isW1Route,nonatomic,readonly) BOOL w1Route; 
@property (getter=isAirPlayRoute,nonatomic,readonly) BOOL airPlayRoute; 
@property (getter=isW2Route,nonatomic,readonly) BOOL w2Route; 
@property (getter=isH1Route,nonatomic,readonly) BOOL h1Route; 
@property (getter=isShareableRoute,nonatomic,readonly) BOOL shareableRoute; 
@property (getter=isHeadphonesRoute,nonatomic,readonly) BOOL headphonesRoute; 
@property (getter=isStereoPair,nonatomic,readonly) BOOL stereoPair; 
@property (getter=isTVRoute,nonatomic,readonly) BOOL tvRoute; 
@property (getter=isTVStickRoute,nonatomic,readonly) BOOL tvStickRoute; 
@property (getter=isSetTopBoxRoute,nonatomic,readonly) BOOL setTopBoxRoute; 
@property (getter=isB444Route,nonatomic,readonly) BOOL b444Route; 
@property (getter=isB298Route,nonatomic,readonly) BOOL b298Route; 
@property (getter=isB419Route,nonatomic,readonly) BOOL b419Route; 
@property (getter=isB364Route,nonatomic,readonly) BOOL b364Route; 
@property (getter=isB372Route,nonatomic,readonly) BOOL b372Route; 
@property (getter=isB520Route,nonatomic,readonly) BOOL b520Route;                                                 //@synthesize b520Route=_b520Route - In the implementation block
@property (getter=isHomeTheaterRoute,nonatomic,readonly) BOOL homeTheaterRoute;                                   //@synthesize homeTheaterRoute=_homeTheaterRoute - In the implementation block
@property (getter=isLowLatencyRoute,nonatomic,readonly) BOOL lowLatencyRoute; 
@property (getter=isClusterRoute,nonatomic,readonly) BOOL clusterRoute;                                           //@synthesize clusterRoute=_clusterRoute - In the implementation block
+(BOOL)supportsSecureCoding;
+(long long)routeSubtypeForMRSubtype:(unsigned)arg1 withOverridesFromMRType:(unsigned)arg2 ;
+(long long)routeSubtypeForMRSubtype:(unsigned)arg1 mrType:(unsigned)arg2 ;
+(id)clusterCompositionForOutputDevice:(id)arg1 ;
-(void)setRouteName:(NSString *)arg1 ;
-(NSString *)routeName;
-(long long)passwordType;
-(NSString *)routeUID;
-(BOOL)presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
-(long long)routeType;
-(BOOL)isProxyGroupPlayer;
-(long long)routeSubtype;
-(NSArray *)routeNames;
-(BOOL)requiresPassword;
-(BOOL)supportsAirPlayGrouping;
-(BOOL)isSplitterCapable;
-(NSArray *)clusterComposition;
-(BOOL)canFetchMediaDataFromSender;
-(BOOL)isVolumeControlAvailable;
-(BOOL)canPlayEncryptedProgressiveDownloadAssets;
-(MPAVBatteryLevel *)batteryLevel;
-(BOOL)canAccessRemoteAssets;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isLowLatencyRoute;
-(id)debugDescription;
-(BOOL)isPickedOnPairedDevice;
-(NSString *)groupUID;
-(NSString *)productIdentifier;
-(BOOL)supportsWirelessDisplay;
-(long long)pickableRouteType;
-(BOOL)isPicked;
-(id)description;
-(BOOL)isCarplayRoute;
-(BOOL)isDisplayedAsPicked;
-(MPAVRouteConnection *)connection;
-(void)setPicked:(BOOL)arg1 ;
-(long long)originalRouteSubtype;
-(BOOL)isTVRoute;
-(BOOL)isAppleTVRoute;
-(BOOL)isDeviceRoute;
-(BOOL)isAirPlayRoute;
-(BOOL)isW1Route;
-(void*)_externalDevice;
-(BOOL)isClusterRoute;
-(BOOL)isH1Route;
-(BOOL)isHomePodRoute;
-(unsigned long long)hash;
-(BOOL)isW2Route;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isSplitRoute;
-(BOOL)isB520Route;
-(BOOL)isDeviceSpeakerRoute;
-(BOOL)isB298Route;
-(BOOL)isB372Route;
-(BOOL)isStereoPair;
-(NSString *)designatedGroupLeaderName;
-(NSDictionary *)avRouteDescription;
-(void)setAVRouteDescription:(id)arg1 ;
-(BOOL)isAirPlayingToDevice;
-(NSString *)groupLeaderAirplayIdentifier;
-(BOOL)supportsRemoteControl;
-(long long)numberOfOutputDevices;
-(BOOL)isRoutingToWirelessDevice;
-(MPAVRoute *)wirelessDisplayRoute;
-(void)setWirelessDisplayRoute:(MPAVRoute *)arg1 ;
-(long long)displayRouteType;
-(void)setDisplayRouteType:(long long)arg1 ;
-(BOOL)isShareableRoute;
-(BOOL)isHeadphonesRoute;
-(BOOL)isAirpodsRoute;
-(BOOL)isPowerbeatsRoute;
-(BOOL)isBeatsSoloRoute;
-(BOOL)isBeatsStudioRoute;
-(BOOL)isBeatsXRoute;
-(BOOL)isHearingDeviceRoute;
-(BOOL)isSmartAudio;
-(BOOL)isTVStickRoute;
-(BOOL)isSetTopBoxRoute;
-(BOOL)isB444Route;
-(BOOL)isB419Route;
-(BOOL)isB364Route;
-(BOOL)containsDeviceWithSubtype:(long long)arg1 ;
-(NSArray *)auxiliaryDevices;
-(BOOL)isPlayingOnPairedDevice;
-(NSString *)playingPairedDeviceName;
-(BOOL)isHomeTheaterRoute;
-(BOOL)supportsGrouping;
-(BOOL)isEqual:(id)arg1 ;
@end

