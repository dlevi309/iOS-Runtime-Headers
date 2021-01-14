/*
* Generated on Thursday, January 14, 2021 at 2:21:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <Foundation/NSProxy.h>

@class NSMutableDictionary, MRAVRoutingDiscoverySessionConfiguration, MRAVRoutingDiscoverySession;

@interface MRAVRoutingDiscoverySessionWrapper : NSProxy {

	NSMutableDictionary* _endpointsChangedCallbacks;
	NSMutableDictionary* _endpointsAddedCallbacks;
	NSMutableDictionary* _endpointsRemovedCallbacks;
	NSMutableDictionary* _endpointsModifiedCallbacks;
	NSMutableDictionary* _outputDevicesChangedCallbacks;
	NSMutableDictionary* _outputDevicesAddedCallbacks;
	NSMutableDictionary* _outputDevicesRemovedCallbacks;
	NSMutableDictionary* _outputDevicesModifiedCallbacks;
	NSMutableDictionary* _endpointsTokensMap;
	NSMutableDictionary* _outputDevicesTokensMap;
	unsigned _discoveryMode;
	MRAVRoutingDiscoverySessionConfiguration* _configuration;
	MRAVRoutingDiscoverySession* _sharedSession;

}

@property (nonatomic,retain) MRAVRoutingDiscoverySessionConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) MRAVRoutingDiscoverySession * sharedSession;                           //@synthesize sharedSession=_sharedSession - In the implementation block
-(void)setPopulatesExternalDevice:(BOOL)arg1 ;
-(void)setAlwaysAllowUpdates:(BOOL)arg1 ;
-(id)addOutputDevicesChangedCallback:(/*^block*/id)arg1 ;
-(id)addOutputDevicesAddedCallback:(/*^block*/id)arg1 ;
-(void)setRoutingContextUID:(id)arg1 ;
-(id)addEndpointsRemovedCallback:(/*^block*/id)arg1 ;
-(void)transferEndpointsModifiedCallbacksFromSession:(id)arg1 toSession:(id)arg2 ;
-(id)addOutputDevicesRemovedCallback:(/*^block*/id)arg1 ;
-(void)removeOutputDevicesModifiedCallback:(id)arg1 ;
-(id)addEndpointsChangedCallback:(/*^block*/id)arg1 ;
-(void)removeOutputDevicesAddedCallback:(id)arg1 ;
-(id)addEndpointsModifiedCallback:(/*^block*/id)arg1 ;
-(unsigned)discoveryMode;
-(void)removeOutputDevicesChangedCallback:(id)arg1 ;
-(void)transferEndpointsChangedCallbacksFromSession:(id)arg1 toSession:(id)arg2 ;
-(void)removeOutputDevicesRemovedCallback:(id)arg1 ;
-(void)transferOutputDevicesChangedCallbacksFromSession:(id)arg1 toSession:(id)arg2 ;
-(void)transferOutputDevicesModifiedCallbacksFromSession:(id)arg1 toSession:(id)arg2 ;
-(void)reevaluateDiscoveryModeForSession:(id)arg1 ;
-(void)transferOutputDevicesRemovedCallbacksFromSession:(id)arg1 toSession:(id)arg2 ;
-(void)transferCallbacksFromSession:(id)arg1 toSession:(id)arg2 ;
-(void)transferEndpointsRemovedCallbacksFromSession:(id)arg1 toSession:(id)arg2 ;
-(void)setSharedSession:(MRAVRoutingDiscoverySession *)arg1 ;
-(MRAVRoutingDiscoverySessionConfiguration *)configuration;
-(void)updateSharedSession;
-(void)removeEndpointsModifiedCallback:(id)arg1 ;
-(void)transferEndpointsAddedCallbacksFromSession:(id)arg1 toSession:(id)arg2 ;
-(void)updatePreviousSharedSessionState:(id)arg1 ;
-(void)transferOutputDevicesAddedCallbacksFromSession:(id)arg1 toSession:(id)arg2 ;
-(void)removeEndpointsAddedCallback:(id)arg1 ;
-(id)addOutputDevicesModifiedCallback:(/*^block*/id)arg1 ;
-(id)initWithSession:(id)arg1 configuration:(id)arg2 ;
-(void)removeEndpointsChangedCallback:(id)arg1 ;
-(void)removeEndpointsRemovedCallback:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)setDiscoveryMode:(unsigned)arg1 ;
-(void)dealloc;
-(id)addEndpointsAddedCallback:(/*^block*/id)arg1 ;
-(void)setConfiguration:(MRAVRoutingDiscoverySessionConfiguration *)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(MRAVRoutingDiscoverySession *)sharedSession;
@end

