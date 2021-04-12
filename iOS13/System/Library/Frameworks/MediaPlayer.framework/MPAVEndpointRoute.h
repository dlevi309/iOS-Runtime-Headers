/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPAVRoute.h>

@protocol OS_dispatch_queue;
@class MPAVRouteConnection, NSObject, NSString, MPMRAVEndpointWrapper;

@interface MPAVEndpointRoute : MPAVRoute {

	MPAVRouteConnection* _connection;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	NSString* _sortName;
	MPMRAVEndpointWrapper* _endpointWrapper;

}

@property (nonatomic,retain) MPAVRouteConnection * connection; 
@property (nonatomic,readonly) void* endpoint; 
@property (nonatomic,retain) MPMRAVEndpointWrapper * endpointWrapper;              //@synthesize endpointWrapper=_endpointWrapper - In the implementation block
@property (nonatomic,readonly) NSString * sortName; 
@property (nonatomic,readonly) BOOL canModifyGroupMembership; 
+(BOOL)supportsSecureCoding;
+(void)getActiveEndpointRouteWithCompletion:(/*^block*/id)arg1 ;
-(void)dealloc;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void*)endpoint;
-(id)initWithEndpoint:(void*)arg1 ;
-(MPAVRouteConnection *)connection;
-(void)setConnection:(MPAVRouteConnection *)arg1 ;
-(long long)routeType;
-(id)routeNames;
-(id)routeName;
-(BOOL)canAccessRemoteAssets;
-(BOOL)canPlayEncryptedProgressiveDownloadAssets;
-(BOOL)canFetchMediaDataFromSender;
-(BOOL)presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
-(id)routeUID;
-(id)designatedGroupLeaderName;
-(BOOL)isAirPlayingToDevice;
-(id)groupLeaderAirplayIdentifier;
-(BOOL)isAppleTVRoute;
-(BOOL)isDeviceRoute;
-(BOOL)isProxyGroupPlayer;
-(BOOL)supportsGrouping;
-(BOOL)supportsRemoteControl;
-(BOOL)isSplitterCapable;
-(BOOL)isSplitRoute;
-(long long)numberOfOutputDevices;
-(BOOL)isRoutingToWirelessDevice;
-(BOOL)isDeviceSpeakerRoute;
-(BOOL)isStereoPair;
-(BOOL)isTVRoute;
-(BOOL)isLowLatencyRoute;
-(id)groupUID;
-(long long)routeSubtype;
-(BOOL)isHomePodRoute;
-(NSString *)sortName;
-(void)establishGroup;
-(MPMRAVEndpointWrapper *)endpointWrapper;
-(void)setEndpointWrapper:(MPMRAVEndpointWrapper *)arg1 ;
-(BOOL)canModifyGroupMembership;
-(void)_endpointDidChange:(id)arg1 ;
-(void)_endpointOutputDevicesDidChange:(id)arg1 ;
-(BOOL)_groupLeaderIsOfDeviceSubtype:(unsigned)arg1 ;
-(unsigned long long)_outputDevicesComposition;
@end

