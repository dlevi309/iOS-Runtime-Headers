/*
* Generated on Thursday, January 14, 2021 at 2:27:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <CoreHAP/HAP2LoggingObject.h>
#import <libobjc.A.dylib/HAP2AccessoryServerDiscoveryDelegate.h>
#import <libobjc.A.dylib/HAP2AccessoryServerCoordinatorPrivate.h>
#import <libobjc.A.dylib/HAP2AccessoryServerCoordinator.h>

@protocol HAP2AccessoryServerCoordinator <NSObject>
@property (assign,nonatomic,__weak) id<HAP2AccessoryServerCoordinatorDelegate> delegate; 
@property (getter=isDiscovering,nonatomic,readonly) BOOL discovering; 
@required
-(void)stopDiscovering;
-(id<HAP2AccessoryServerCoordinatorDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(BOOL)isDiscovering;
-(void)startDiscovering;

@end


@protocol HAP2AccessoryServerCoordinatorDelegate, HAP2AccessoryServerBrowserPrivate, HAP2AccessoryServerDiscovery, HAP2AccessoryServerPairingFactory, HAP2AccessoryServerTransportFactory, HAP2AccessoryServerSecureTransportFactory, HAP2AccessoryServerEncodingFactory, HAP2AccessoryServerControllerFactory;
@class NSMutableDictionary, HAP2SerializedOperationQueue, NSOperationQueue, HAP2PropertyLock, NSString;

@interface HAP2AccessoryServerCoordinator : HAP2LoggingObject <HAP2AccessoryServerDiscoveryDelegate, HAP2AccessoryServerCoordinatorPrivate, HAP2AccessoryServerCoordinator> {

	BOOL _discovering;
	BOOL _startDiscoveringPending;
	BOOL _stopDiscoveringPending;
	id<HAP2AccessoryServerCoordinatorDelegate> _delegate;
	NSMutableDictionary* _discoveredAccessoryServers;
	id<HAP2AccessoryServerBrowserPrivate> _browser;
	id<HAP2AccessoryServerDiscovery> _discovery;
	id<HAP2AccessoryServerPairingFactory> _pairingFactory;
	id<HAP2AccessoryServerTransportFactory> _transportFactory;
	id<HAP2AccessoryServerSecureTransportFactory> _secureTransportFactory;
	id<HAP2AccessoryServerEncodingFactory> _encodingFactory;
	id<HAP2AccessoryServerControllerFactory> _controllerFactory;
	HAP2SerializedOperationQueue* _operationQueue;
	NSOperationQueue* _localOperationQueue;
	HAP2PropertyLock* _propertyLock;

}

@property (nonatomic,__weak,readonly) id<HAP2AccessoryServerBrowserPrivate> browser;                              //@synthesize browser=_browser - In the implementation block
@property (nonatomic,readonly) id<HAP2AccessoryServerDiscovery> discovery;                                        //@synthesize discovery=_discovery - In the implementation block
@property (nonatomic,readonly) id<HAP2AccessoryServerPairingFactory> pairingFactory;                              //@synthesize pairingFactory=_pairingFactory - In the implementation block
@property (nonatomic,readonly) id<HAP2AccessoryServerTransportFactory> transportFactory;                          //@synthesize transportFactory=_transportFactory - In the implementation block
@property (nonatomic,readonly) id<HAP2AccessoryServerSecureTransportFactory> secureTransportFactory;              //@synthesize secureTransportFactory=_secureTransportFactory - In the implementation block
@property (nonatomic,readonly) id<HAP2AccessoryServerEncodingFactory> encodingFactory;                            //@synthesize encodingFactory=_encodingFactory - In the implementation block
@property (nonatomic,readonly) id<HAP2AccessoryServerControllerFactory> controllerFactory;                        //@synthesize controllerFactory=_controllerFactory - In the implementation block
@property (nonatomic,readonly) HAP2SerializedOperationQueue * operationQueue;                                     //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * localOperationQueue;                                            //@synthesize localOperationQueue=_localOperationQueue - In the implementation block
@property (nonatomic,readonly) HAP2PropertyLock * propertyLock;                                                   //@synthesize propertyLock=_propertyLock - In the implementation block
@property (assign,getter=isDiscovering,nonatomic) BOOL discovering;                                               //@synthesize discovering=_discovering - In the implementation block
@property (assign,getter=isStartDiscoveringPending,nonatomic) BOOL startDiscoveringPending;                       //@synthesize startDiscoveringPending=_startDiscoveringPending - In the implementation block
@property (assign,getter=isStopDiscoveringPending,nonatomic) BOOL stopDiscoveringPending;                         //@synthesize stopDiscoveringPending=_stopDiscoveringPending - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * discoveredAccessoryServers;                                  //@synthesize discoveredAccessoryServers=_discoveredAccessoryServers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<HAP2AccessoryServerCoordinatorDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
-(HAP2SerializedOperationQueue *)operationQueue;
-(void)stopDiscovering;
-(id<HAP2AccessoryServerBrowserPrivate>)browser;
-(id<HAP2AccessoryServerCoordinatorDelegate>)delegate;
-(void)_startDiscovering;
-(void)_stopDiscovering;
-(void)setDelegate:(id<HAP2AccessoryServerCoordinatorDelegate>)arg1 ;
-(NSMutableDictionary *)discoveredAccessoryServers;
-(BOOL)isDiscovering;
-(HAP2PropertyLock *)propertyLock;
-(void)setDiscovering:(BOOL)arg1 ;
-(id<HAP2AccessoryServerDiscovery>)discovery;
-(void)startDiscovering;
-(id<HAP2AccessoryServerTransportFactory>)transportFactory;
-(void)_didDiscoverAccessory:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSOperationQueue *)localOperationQueue;
-(void)_didStartDiscoveringWithError:(id)arg1 ;
-(void)_didStopDiscoveringWithError:(id)arg1 ;
-(void)_didLoseAccessory:(id)arg1 error:(id)arg2 ;
-(BOOL)isStartDiscoveringPending;
-(void)setStartDiscoveringPending:(BOOL)arg1 ;
-(BOOL)isStopDiscoveringPending;
-(void)setStopDiscoveringPending:(BOOL)arg1 ;
-(void)_didDeterminePairingStateForAccessory:(id)arg1 isPaired:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_didDiscoverPairedAccessory:(id)arg1 transport:(id)arg2 operationQueue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_didDiscoverUnpairedAccessory:(id)arg1 transport:(id)arg2 operationQueue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)_createUnpairedAccessoryServerWithAccessoryInfo:(id)arg1 transport:(id)arg2 operationQueue:(id)arg3 ;
-(id)_createPairedAccessoryServerWithAccessoryInfo:(id)arg1 transport:(id)arg2 operationQueue:(id)arg3 ;
-(id)_createMetadataForAccessoryServerWithAccessoryInfo:(id)arg1 ;
-(id<HAP2AccessoryServerEncodingFactory>)encodingFactory;
-(id<HAP2AccessoryServerSecureTransportFactory>)secureTransportFactory;
-(id<HAP2AccessoryServerControllerFactory>)controllerFactory;
-(id<HAP2AccessoryServerPairingFactory>)pairingFactory;
-(void)discovery:(id)arg1 didDiscoverAccessory:(id)arg2 ;
-(void)discovery:(id)arg1 didStartDiscoveringWithError:(id)arg2 ;
-(void)discovery:(id)arg1 didStopDiscoveringWithError:(id)arg2 ;
-(void)discovery:(id)arg1 didLoseAccessory:(id)arg2 error:(id)arg3 ;
-(void)setBrowser:(id)arg1 operationQueue:(id)arg2 ;
-(void)resurfaceDiscoveryInfoForDeviceID:(id)arg1 ;
-(id)initWithDiscovery:(id)arg1 pairingFactory:(id)arg2 transportFactory:(id)arg3 secureTransportFactory:(id)arg4 encodingFactory:(id)arg5 controllerFactory:(id)arg6 ;
@end

