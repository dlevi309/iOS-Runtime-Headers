/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	NSString* _routeUID;
	NSString* _productIdentifier;
	NSString* _groupUID;
	long long _routeType;
	long long _pickableRouteType;
	long long _routeSubtype;
	NSArray* _auxiliaryDevices;
	NSString* _playingPairedDeviceName;
	void* _externalDevice;
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
@property (nonatomic,readonly) MPAVRouteConnection * connection;                                                  //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) NSString * designatedGroupLeaderName; 
@property (nonatomic,readonly) NSArray * routeNames; 
@property (nonatomic,readonly) NSString * routeUID;                                                               //@synthesize routeUID=_routeUID - In the implementation block
@property (nonatomic,readonly) NSString * productIdentifier;                                                      //@synthesize productIdentifier=_productIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * groupUID;                                                               //@synthesize groupUID=_groupUID - In the implementation block
@property (nonatomic,readonly) long long routeType;                                                               //@synthesize routeType=_routeType - In the implementation block
@property (nonatomic,readonly) long long pickableRouteType;                                                       //@synthesize pickableRouteType=_pickableRouteType - In the implementation block
@property (nonatomic,readonly) long long routeSubtype;                                                            //@synthesize routeSubtype=_routeSubtype - In the implementation block
@property (nonatomic,readonly) BOOL canAccessRemoteAssets;                                                        //@synthesize canAccessRemoteAssets=_canAccessRemoteAssets - In the implementation block
@property (nonatomic,readonly) BOOL canPlayEncryptedProgressiveDownloadAssets;                                    //@synthesize canPlayEncryptedProgressiveDownloadAssets=_canPlayEncryptedProgressiveDownloadAssets - In the implementation block
@property (nonatomic,readonly) BOOL canFetchMediaDataFromSender;                                                  //@synthesize canFetchMediaDataFromSender=_canFetchMediaDataFromSender - In the implementation block
@property (nonatomic,readonly) BOOL presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;              //@synthesize presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets=_presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets - In the implementation block
@property (nonatomic,readonly) BOOL isDeviceRoute; 
@property (getter=isProxyGroupPlayer,nonatomic,readonly) BOOL proxyGroupPlayer; 
@property (getter=isVolumeControlAvailable,nonatomic,readonly) BOOL volumeControlAvailable; 
@property (nonatomic,readonly) BOOL supportsGrouping; 
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
@property (getter=isB444Route,nonatomic,readonly) BOOL b444Route; 
@property (getter=isB298Route,nonatomic,readonly) BOOL b298Route; 
@property (getter=isB419Route,nonatomic,readonly) BOOL b419Route; 
@property (getter=isB364Route,nonatomic,readonly) BOOL b364Route; 
@property (getter=isLowLatencyRoute,nonatomic,readonly) BOOL lowLatencyRoute; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(MPAVRouteConnection *)connection;
-(MPAVBatteryLevel *)batteryLevel;
-(long long)routeType;
-(NSArray *)routeNames;
-(NSString *)routeName;
-(void)setRouteName:(NSString *)arg1 ;
-(NSString *)productIdentifier;
-(BOOL)canAccessRemoteAssets;
-(BOOL)canPlayEncryptedProgressiveDownloadAssets;
-(BOOL)canFetchMediaDataFromSender;
-(BOOL)presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
-(void*)_externalDevice;
-(BOOL)isDisplayedAsPicked;
-(NSString *)routeUID;
-(BOOL)isVolumeControlAvailable;
-(NSString *)designatedGroupLeaderName;
-(NSDictionary *)avRouteDescription;
-(void)setAVRouteDescription:(id)arg1 ;
-(BOOL)isAirPlayingToDevice;
-(NSString *)groupLeaderAirplayIdentifier;
-(BOOL)isAppleTVRoute;
-(BOOL)isDeviceRoute;
-(BOOL)isProxyGroupPlayer;
-(BOOL)supportsGrouping;
-(BOOL)supportsRemoteControl;
-(BOOL)isSplitterCapable;
-(BOOL)isSplitRoute;
-(long long)numberOfOutputDevices;
-(BOOL)isPicked;
-(void)setPicked:(BOOL)arg1 ;
-(BOOL)isRoutingToWirelessDevice;
-(MPAVRoute *)wirelessDisplayRoute;
-(void)setWirelessDisplayRoute:(MPAVRoute *)arg1 ;
-(long long)passwordType;
-(long long)displayRouteType;
-(void)setDisplayRouteType:(long long)arg1 ;
-(BOOL)isShareableRoute;
-(BOOL)isHeadphonesRoute;
-(BOOL)isAirpodsRoute;
-(BOOL)isB298Route;
-(BOOL)isPowerbeatsRoute;
-(BOOL)isBeatsSoloRoute;
-(BOOL)isBeatsStudioRoute;
-(BOOL)isBeatsXRoute;
-(BOOL)isDeviceSpeakerRoute;
-(BOOL)isHearingDeviceRoute;
-(BOOL)isSmartAudio;
-(BOOL)isStereoPair;
-(BOOL)isTVRoute;
-(BOOL)isW1Route;
-(BOOL)isAirPlayRoute;
-(BOOL)isH1Route;
-(BOOL)isW2Route;
-(BOOL)isB444Route;
-(BOOL)isB419Route;
-(BOOL)isB364Route;
-(BOOL)isLowLatencyRoute;
-(BOOL)supportsWirelessDisplay;
-(NSString *)groupUID;
-(long long)pickableRouteType;
-(long long)routeSubtype;
-(NSArray *)auxiliaryDevices;
-(NSString *)playingPairedDeviceName;
-(BOOL)isPickedOnPairedDevice;
-(BOOL)isPlayingOnPairedDevice;
-(BOOL)requiresPassword;
-(BOOL)isCarplayRoute;
-(BOOL)isHomePodRoute;
@end

