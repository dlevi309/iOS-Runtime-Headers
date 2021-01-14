/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

@class HAP2SerializedOperationQueue, HAP2PropertyLock, HAPPairSetupSession;


@protocol HAP2AccessoryServerPairingDriverWorkItemInfo <HAP2AccessoryServerPairingDriver>
@property (nonatomic,readonly) HAP2SerializedOperationQueue * operationQueue; 
@property (nonatomic,readonly) HAP2PropertyLock * propertyLock; 
@property (nonatomic,retain) HAPPairSetupSession * pairingSession; 
@property (nonatomic,readonly) id<HAP2AccessoryServerTransport> transport; 
@property (nonatomic,readonly) id<HAP2AccessoryServerSecureTransportFactory> secureTransportFactory; 
@property (nonatomic,readonly) id<HAP2AccessoryServerEncoding> encoding; 
@property (nonatomic,__weak,readonly) id<HAP2UnpairedAccessoryServer> accessoryServer; 
@property (nonatomic,__weak,readonly) id<HAP2AccessoryServerPairingDriverDelegate> delegate; 
@property (nonatomic,readonly) unsigned long long featureFlags; 
@required
-(HAP2SerializedOperationQueue *)operationQueue;
-(id<HAP2AccessoryServerTransport>)transport;
-(id<HAP2AccessoryServerPairingDriverDelegate>)delegate;
-(id<HAP2AccessoryServerEncoding>)encoding;
-(void)setPairingSession:(id)arg1;
-(HAP2PropertyLock *)propertyLock;
-(unsigned long long)featureFlags;
-(HAPPairSetupSession *)pairingSession;
-(id<HAP2AccessoryServerSecureTransportFactory>)secureTransportFactory;
-(id<HAP2UnpairedAccessoryServer>)accessoryServer;
-(void)workItem:(id)arg1 finishedWithError:(id)arg2;

@end

