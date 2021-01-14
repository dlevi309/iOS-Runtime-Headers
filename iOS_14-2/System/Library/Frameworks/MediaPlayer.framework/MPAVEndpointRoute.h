/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)routeName;
-(id)routeUID;
-(BOOL)presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
-(long long)routeType;
-(BOOL)isProxyGroupPlayer;
-(long long)routeSubtype;
-(id)routeNames;
-(NSString *)sortName;
-(BOOL)supportsAirPlayGrouping;
-(BOOL)isSplitterCapable;
-(id)clusterComposition;
-(BOOL)canFetchMediaDataFromSender;
-(BOOL)canPlayEncryptedProgressiveDownloadAssets;
-(id)initWithEndpoint:(void*)arg1 ;
-(BOOL)canAccessRemoteAssets;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isLowLatencyRoute;
-(void*)endpoint;
-(id)groupUID;
-(void)establishGroup;
-(MPMRAVEndpointWrapper *)endpointWrapper;
-(void)setEndpointWrapper:(MPMRAVEndpointWrapper *)arg1 ;
-(void)_endpointDidChange:(id)arg1 ;
-(void)_endpointOutputDevicesDidChange:(id)arg1 ;
-(BOOL)_groupLeaderIsOfDeviceSubtype:(unsigned)arg1 ;
-(unsigned long long)_outputDevicesComposition;
-(id)description;
-(MPAVRouteConnection *)connection;
-(long long)originalRouteSubtype;
-(BOOL)isTVRoute;
-(BOOL)isAppleTVRoute;
-(BOOL)isDeviceRoute;
-(BOOL)isClusterRoute;
-(BOOL)isHomePodRoute;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isSplitRoute;
-(BOOL)isB520Route;
-(BOOL)isDeviceSpeakerRoute;
-(BOOL)isStereoPair;
-(id)designatedGroupLeaderName;
-(BOOL)isAirPlayingToDevice;
-(id)groupLeaderAirplayIdentifier;
-(BOOL)supportsRemoteControl;
-(long long)numberOfOutputDevices;
-(BOOL)isRoutingToWirelessDevice;
-(BOOL)canModifyGroupMembership;
-(void)setConnection:(MPAVRouteConnection *)arg1 ;
-(BOOL)isHomeTheaterRoute;
-(BOOL)supportsGrouping;
-(void)dealloc;
@end

