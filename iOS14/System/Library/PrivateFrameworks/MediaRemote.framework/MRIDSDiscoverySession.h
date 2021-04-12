/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRAVRoutingDiscoverySession.h>
#import <libobjc.A.dylib/MRProtocolClientConnectionDelegate.h>

@protocol OS_dispatch_queue;
@class MRProtocolClientConnection, NSArray, MRConcreteEndpoint, NSObject, CURunLoopThread, NSRunLoop, NSString;

@interface MRIDSDiscoverySession : MRAVRoutingDiscoverySession <MRProtocolClientConnectionDelegate> {

	MRProtocolClientConnection* _discoveryChannel;
	NSArray* _availableExternalAudioOutputDevices;
	NSArray* _availableExternalOutputDevices;
	NSArray* _availableExternalEndpoints;
	MRConcreteEndpoint* _companionEndpoint;
	NSArray* _companionOutputDevices;
	unsigned _discoveryMode;
	unsigned _endpointFeatures;
	NSObject*<OS_dispatch_queue> _idsQueue;
	CURunLoopThread* _runLoopThread;
	NSRunLoop* _runLoop;

}

@property (nonatomic,retain) NSArray * availableExternalAudioOutputDevices; 
@property (nonatomic,retain) NSArray * availableExternalOutputDevices; 
@property (nonatomic,retain) NSArray * availableExternalEndpoints; 
@property (nonatomic,retain) MRConcreteEndpoint * companionEndpoint;                     //@synthesize companionEndpoint=_companionEndpoint - In the implementation block
@property (nonatomic,retain) NSArray * companionOutputDevices; 
@property (nonatomic,retain) MRProtocolClientConnection * discoveryChannel;              //@synthesize discoveryChannel=_discoveryChannel - In the implementation block
@property (nonatomic,readonly) NSRunLoop * runLoop; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)transformOutputDevice:(id)arg1 fromEndpoint:(id)arg2 ;
-(void)setAvailableExternalOutputDevices:(NSArray *)arg1 ;
-(void)handleUpdateRemoteControlEndpointsMessage:(id)arg1 ;
-(unsigned)discoveryMode;
-(void)_onIDSQueue_disconnectDiscoveryChannel;
-(void)setCompanionOutputDevices:(NSArray *)arg1 ;
-(void)handleUpdateAudioOutputDevicesMessage:(id)arg1 ;
-(void)_handleDeviceInfoDidChangeNotification:(id)arg1 ;
-(void)setAvailableExternalEndpoints:(NSArray *)arg1 ;
-(NSArray *)companionOutputDevices;
-(id)compaionEndpoint;
-(void)clientConnection:(id)arg1 didReceiveMessage:(id)arg2 ;
-(void)_handleCompanionDeviceDisconnectedNotification:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
-(void)_handleCompanionDeviceDidResetNotification:(id)arg1 ;
-(MRConcreteEndpoint *)companionEndpoint;
-(id)availableEndpoints;
-(void)setCompanionEndpoint:(MRConcreteEndpoint *)arg1 ;
-(void)_onIDSQueue_connectDiscoveryChannel;
-(NSArray *)availableExternalEndpoints;
-(MRProtocolClientConnection *)discoveryChannel;
-(void)setDiscoveryChannel:(MRProtocolClientConnection *)arg1 ;
-(NSArray *)availableExternalOutputDevices;
-(NSArray *)availableExternalAudioOutputDevices;
-(unsigned)endpointFeatures;
-(id)availableOutputDevices;
-(void)setAvailableExternalAudioOutputDevices:(NSArray *)arg1 ;
-(void)setDiscoveryMode:(unsigned)arg1 ;
-(void)handleDeviceInfoUpdateMessage:(id)arg1 ;
-(NSRunLoop *)runLoop;
-(void)setEndpointFeatures:(unsigned)arg1 ;
-(void)_onIDSQueue_initalizeDiscoveryChannel;
@end

