/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPAVRoute.h>

@class NSArray;

@interface MPAVOutputDeviceRoute : MPAVRoute {

	void* _logicalLeaderOutputDevice;
	NSArray* _outputDevices;

}

@property (nonatomic,readonly) NSArray * outputDevices;                            //@synthesize outputDevices=_outputDevices - In the implementation block
@property (nonatomic,readonly) void* logicalLeaderOutputDevice;                    //@synthesize logicalLeaderOutputDevice=_logicalLeaderOutputDevice - In the implementation block
@property (getter=isGroupLeader,nonatomic,readonly) BOOL groupLeader; 
+(id)localDeviceUID;
+(long long)pickableRouteTypeForOutputDevice:(void*)arg1 ;
+(void*)logicalLeaderFromOutputDevices:(id)arg1 ;
-(id)routeName;
-(id)routeUID;
-(BOOL)presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
-(long long)routeType;
-(BOOL)isProxyGroupPlayer;
-(long long)routeSubtype;
-(BOOL)requiresPassword;
-(BOOL)supportsAirPlayGrouping;
-(BOOL)isSplitterCapable;
-(id)clusterComposition;
-(BOOL)canFetchMediaDataFromSender;
-(BOOL)isVolumeControlAvailable;
-(BOOL)canPlayEncryptedProgressiveDownloadAssets;
-(BOOL)isGroupLeader;
-(void*)logicalLeaderOutputDevice;
-(BOOL)canAccessRemoteAssets;
-(BOOL)isLowLatencyRoute;
-(BOOL)isPickedOnPairedDevice;
-(id)groupUID;
-(id)productIdentifier;
-(BOOL)supportsWirelessDisplay;
-(BOOL)_anyOutputDevicePassesTest:(/*^block*/id)arg1 ;
-(long long)pickableRouteType;
-(id)description;
-(BOOL)isCarplayRoute;
-(BOOL)_anyOutputDevicePassesMRFunction:(/*function pointer*/void*)arg1 ;
-(long long)originalRouteSubtype;
-(id)initWithOutputDevices:(id)arg1 ;
-(NSArray *)outputDevices;
-(BOOL)isAppleTVRoute;
-(BOOL)isDeviceRoute;
-(BOOL)isAirPlayRoute;
-(BOOL)isClusterRoute;
-(BOOL)isHomePodRoute;
-(BOOL)isB520Route;
-(BOOL)isDeviceSpeakerRoute;
-(BOOL)isStereoPair;
-(id)playingPairedDeviceName;
-(BOOL)isHomeTheaterRoute;
-(BOOL)supportsGrouping;
@end

