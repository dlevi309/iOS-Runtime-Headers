/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSArray, NSString;

@interface MRAVRoutingDiscoverySession : NSObject {

	NSObject*<OS_dispatch_queue> _serialQueue;
	NSMutableDictionary* _endpointsChangedCallbacks;
	NSMutableDictionary* _outputDevicesChangedCallbacks;
	BOOL _alwaysAllowUpdates;

}

@property (nonatomic,readonly) unsigned endpointFeatures; 
@property (nonatomic,readonly) BOOL devicePresenceDetected; 
@property (nonatomic,readonly) NSArray * availableEndpoints; 
@property (nonatomic,readonly) NSArray * availableOutputDevices; 
@property (assign,nonatomic) unsigned discoveryMode; 
@property (assign,nonatomic) BOOL alwaysAllowUpdates;                                //@synthesize alwaysAllowUpdates=_alwaysAllowUpdates - In the implementation block
@property (assign,nonatomic) unsigned targetAudioSessionID; 
@property (nonatomic,copy) NSString * routingContextUID; 
@property (nonatomic,readonly) NSArray * endpointsChangedCallbacks; 
@property (nonatomic,readonly) NSArray * outputDevicesChangedCallbacks; 
+(id)discoverySessionWithEndpointFeatures:(unsigned)arg1 ;
+(id)discoverySessionWithEndpointFeatures:(unsigned)arg1 enableThrottling:(BOOL)arg2 ;
-(id)_init;
-(id)addEndpointsChangedCallback:(/*^block*/id)arg1 ;
-(NSArray *)endpointsChangedCallbacks;
-(NSArray *)outputDevicesChangedCallbacks;
-(id)addOutputDevicesChangedCallback:(/*^block*/id)arg1 ;
-(void)removeEndpointsChangedCallback:(id)arg1 ;
-(void)removeOutputDevicesChangedCallback:(id)arg1 ;
-(BOOL)alwaysAllowUpdates;
-(void)setAlwaysAllowUpdates:(BOOL)arg1 ;
@end

