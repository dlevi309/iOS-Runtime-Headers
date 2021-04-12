/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPAVRoutingDataSource.h>

@protocol OS_dispatch_queue;
@class NSString, NSObject, NSMutableDictionary;

@interface MPAVEndpointRoutingDataSource : MPAVRoutingDataSource {

	void* _discoverySession;
	void* _callbackToken;
	NSString* _routingContextUID;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSMutableDictionary* _endpoints;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialQueue;              //@synthesize serialQueue=_serialQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * endpoints;                       //@synthesize endpoints=_endpoints - In the implementation block
@property (nonatomic,copy) NSString * routingContextUID;                            //@synthesize routingContextUID=_routingContextUID - In the implementation block
-(id)init;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(void)setDiscoveryMode:(long long)arg1 ;
-(NSMutableDictionary *)endpoints;
-(void)setEndpoints:(NSMutableDictionary *)arg1 ;
-(NSString *)routingContextUID;
-(long long)discoveryMode;
-(BOOL)devicePresenceDetected;
-(void)setRoutingContextUID:(NSString *)arg1 ;
-(void)getRoutesForCategory:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)initWithThrottlingEnabled:(BOOL)arg1 ;
-(void)setPickedRoute:(id)arg1 withPassword:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_endpointsDidChange:(id)arg1 ;
-(void)setSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

