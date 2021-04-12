/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(long long)pickableRouteTypeForOutputDevice:(void*)arg1 ;
+(void*)logicalLeaderFromOutputDevices:(id)arg1 ;
+(id)localDeviceUID;
-(id)description;
-(long long)routeType;
-(id)routeName;
-(id)productIdentifier;
-(NSArray *)outputDevices;
-(BOOL)canAccessRemoteAssets;
-(BOOL)isGroupLeader;
-(BOOL)canPlayEncryptedProgressiveDownloadAssets;
-(BOOL)canFetchMediaDataFromSender;
-(BOOL)presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
-(id)routeUID;
-(BOOL)isVolumeControlAvailable;
-(BOOL)isAppleTVRoute;
-(BOOL)isDeviceRoute;
-(BOOL)isProxyGroupPlayer;
-(BOOL)supportsGrouping;
-(BOOL)isSplitterCapable;
-(BOOL)isDeviceSpeakerRoute;
-(BOOL)isStereoPair;
-(BOOL)isAirPlayRoute;
-(BOOL)isLowLatencyRoute;
-(BOOL)supportsWirelessDisplay;
-(id)groupUID;
-(long long)pickableRouteType;
-(long long)routeSubtype;
-(id)playingPairedDeviceName;
-(BOOL)isPickedOnPairedDevice;
-(BOOL)requiresPassword;
-(BOOL)isCarplayRoute;
-(BOOL)isHomePodRoute;
-(id)initWithOutputDevices:(id)arg1 ;
-(BOOL)_anyOutputDevicePassesMRFunction:(/*function pointer*/void*)arg1 ;
-(BOOL)_anyOutputDevicePassesTest:(/*^block*/id)arg1 ;
-(void*)logicalLeaderOutputDevice;
@end

