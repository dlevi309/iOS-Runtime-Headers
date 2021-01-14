/*
* Generated on Thursday, January 14, 2021 at 2:21:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/


@protocol OS_dispatch_queue;
@class NSArray, NSMutableDictionary, NSObject, NSMapTable, NSString;

@interface MRAVRoutingDiscoverySession : NSObject {

	NSArray* _endpoints;
	NSArray* _outputDevices;
	BOOL _alwaysAllowUpdates;
	BOOL _populatesExternalDevice;
	NSMutableDictionary* _endpointsChangedCallbacks;
	NSMutableDictionary* _endpointsAddedCallbacks;
	NSMutableDictionary* _endpointsRemovedCallbacks;
	NSMutableDictionary* _endpointsModifiedCallbacks;
	NSMutableDictionary* _outputDevicesChangedCallbacks;
	NSMutableDictionary* _outputDevicesAddedCallbacks;
	NSMutableDictionary* _outputDevicesRemovedCallbacks;
	NSMutableDictionary* _outputDevicesModifiedCallbacks;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	NSMapTable* _clientDiscoveryStates;

}

@property (nonatomic,retain) NSMutableDictionary * endpointsChangedCallbacks;                   //@synthesize endpointsChangedCallbacks=_endpointsChangedCallbacks - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * endpointsAddedCallbacks;                     //@synthesize endpointsAddedCallbacks=_endpointsAddedCallbacks - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * endpointsRemovedCallbacks;                   //@synthesize endpointsRemovedCallbacks=_endpointsRemovedCallbacks - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * endpointsModifiedCallbacks;                  //@synthesize endpointsModifiedCallbacks=_endpointsModifiedCallbacks - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * outputDevicesChangedCallbacks;               //@synthesize outputDevicesChangedCallbacks=_outputDevicesChangedCallbacks - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * outputDevicesAddedCallbacks;                 //@synthesize outputDevicesAddedCallbacks=_outputDevicesAddedCallbacks - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * outputDevicesRemovedCallbacks;               //@synthesize outputDevicesRemovedCallbacks=_outputDevicesRemovedCallbacks - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * outputDevicesModifiedCallbacks;              //@synthesize outputDevicesModifiedCallbacks=_outputDevicesModifiedCallbacks - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> serialQueue;                        //@synthesize serialQueue=_serialQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> calloutQueue;                       //@synthesize calloutQueue=_calloutQueue - In the implementation block
@property (nonatomic,retain) NSMapTable * clientDiscoveryStates;                                //@synthesize clientDiscoveryStates=_clientDiscoveryStates - In the implementation block
@property (nonatomic,copy) NSArray * endpoints; 
@property (nonatomic,copy) NSArray * outputDevices; 
@property (assign,nonatomic) unsigned endpointFeatures; 
@property (assign,nonatomic) BOOL populatesExternalDevice;                                      //@synthesize populatesExternalDevice=_populatesExternalDevice - In the implementation block
@property (nonatomic,readonly) BOOL devicePresenceDetected; 
@property (nonatomic,readonly) NSArray * availableEndpoints; 
@property (nonatomic,readonly) NSArray * availableOutputDevices; 
@property (assign,nonatomic) unsigned discoveryMode; 
@property (assign,nonatomic) BOOL alwaysAllowUpdates;                                           //@synthesize alwaysAllowUpdates=_alwaysAllowUpdates - In the implementation block
@property (assign,nonatomic) unsigned targetAudioSessionID; 
@property (nonatomic,copy) NSString * routingContextUID; 
+(id)discoverySessionWithEndpointFeatures:(unsigned)arg1 ;
+(id)discoverySessionWithConfiguration:(id)arg1 ;
+(id)discoverySessionWithEndpointFeatures:(unsigned)arg1 enableThrottling:(BOOL)arg2 ;
+(id)sharedDiscoverySessionForClass:(Class)arg1 configuration:(id)arg2 ;
-(void)setOutputDevices:(NSArray *)arg1 ;
-(NSMutableDictionary *)endpointsModifiedCallbacks;
-(void)setEndpoints:(NSArray *)arg1 ;
-(void)setEndpointsChangedCallbacks:(NSMutableDictionary *)arg1 ;
-(void)setPopulatesExternalDevice:(BOOL)arg1 ;
-(void)setAlwaysAllowUpdates:(BOOL)arg1 ;
-(id)addOutputDevicesChangedCallback:(/*^block*/id)arg1 ;
-(NSMutableDictionary *)endpointsAddedCallbacks;
-(id)addOutputDevicesAddedCallback:(/*^block*/id)arg1 ;
-(NSMutableDictionary *)endpointsRemovedCallbacks;
-(id)addEndpointsRemovedCallback:(/*^block*/id)arg1 ;
-(NSArray *)endpoints;
-(void)setClientDiscoveryStates:(NSMapTable *)arg1 ;
-(NSMutableDictionary *)outputDevicesAddedCallbacks;
-(BOOL)populatesExternalDevice;
-(id)addOutputDevicesRemovedCallback:(/*^block*/id)arg1 ;
-(void)removeOutputDevicesModifiedCallback:(id)arg1 ;
-(void)notifyEndpointsChanged:(id)arg1 ;
-(id)addEndpointsChangedCallback:(/*^block*/id)arg1 ;
-(NSMutableDictionary *)outputDevicesRemovedCallbacks;
-(void)setOutputDevicesChangedCallbacks:(NSMutableDictionary *)arg1 ;
-(void)removeOutputDevicesAddedCallback:(id)arg1 ;
-(void)setEndpointsModifiedCallbacks:(NSMutableDictionary *)arg1 ;
-(void)setOutputDevicesRemovedCallbacks:(NSMutableDictionary *)arg1 ;
-(id)addEndpointsModifiedCallback:(/*^block*/id)arg1 ;
-(BOOL)alwaysAllowUpdates;
-(NSMutableDictionary *)endpointsChangedCallbacks;
-(NSMutableDictionary *)outputDevicesChangedCallbacks;
-(void)notifyOutputDevicesChanged:(id)arg1 forFeature:(unsigned)arg2 ;
-(id)initWithFeatures:(unsigned)arg1 ;
-(void)removeOutputDevicesChangedCallback:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(void)removeOutputDevicesRemovedCallback:(id)arg1 ;
-(void)logOutputDevicesChanged:(id)arg1 oldOutputDevices:(id)arg2 ;
-(void)setEndpointsRemovedCallbacks:(NSMutableDictionary *)arg1 ;
-(NSObject*<OS_dispatch_queue>)calloutQueue;
-(id)initWithConfiguration:(id)arg1 ;
-(NSArray *)outputDevices;
-(void)removeEndpointsModifiedCallback:(id)arg1 ;
-(void)setEndpointsAddedCallbacks:(NSMutableDictionary *)arg1 ;
-(void)setOutputDevicesModifiedCallbacks:(NSMutableDictionary *)arg1 ;
-(void)logEndpointsChanged:(id)arg1 oldEndpoints:(id)arg2 ;
-(NSMapTable *)clientDiscoveryStates;
-(void)removeEndpointsAddedCallback:(id)arg1 ;
-(id)addOutputDevicesModifiedCallback:(/*^block*/id)arg1 ;
-(NSMutableDictionary *)outputDevicesModifiedCallbacks;
-(void)removeEndpointsChangedCallback:(id)arg1 ;
-(void)removeEndpointsRemovedCallback:(id)arg1 ;
-(id)addEndpointsAddedCallback:(/*^block*/id)arg1 ;
-(void)setOutputDevicesAddedCallbacks:(NSMutableDictionary *)arg1 ;
-(void)setEndpointFeatures:(unsigned)arg1 ;
@end

