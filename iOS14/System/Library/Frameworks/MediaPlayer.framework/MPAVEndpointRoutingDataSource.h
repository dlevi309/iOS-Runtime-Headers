/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPAVRoutingDataSource.h>

@protocol OS_dispatch_queue;
@class NSString, NSObject, NSMutableDictionary, MRAVRoutingDiscoverySessionConfiguration;

@interface MPAVEndpointRoutingDataSource : MPAVRoutingDataSource {

	void* _discoverySession;
	void* _callbackToken;
	NSString* _routingContextUID;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSMutableDictionary* _endpoints;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialQueue;                                                //@synthesize serialQueue=_serialQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * endpoints;                                                         //@synthesize endpoints=_endpoints - In the implementation block
@property (nonatomic,readonly) MRAVRoutingDiscoverySessionConfiguration * discoverySessionConfiguration; 
@property (nonatomic,copy) NSString * routingContextUID;                                                              //@synthesize routingContextUID=_routingContextUID - In the implementation block
-(void)setEndpoints:(NSMutableDictionary *)arg1 ;
-(BOOL)devicePresenceDetected;
-(void)setRoutingContextUID:(NSString *)arg1 ;
-(NSString *)routingContextUID;
-(NSMutableDictionary *)endpoints;
-(id)getRoutesForCategory:(id)arg1 ;
-(long long)discoveryMode;
-(id)init;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(MRAVRoutingDiscoverySessionConfiguration *)discoverySessionConfiguration;
-(void)setPickedRoute:(id)arg1 withPassword:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithThrottlingEnabled:(BOOL)arg1 ;
-(void)setDiscoveryMode:(long long)arg1 ;
-(void)_endpointsDidChange:(id)arg1 ;
-(void)dealloc;
@end

