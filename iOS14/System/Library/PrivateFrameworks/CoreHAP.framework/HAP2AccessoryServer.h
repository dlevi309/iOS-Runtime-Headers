/*
* Generated on Thursday, January 14, 2021 at 2:27:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <CoreHAP/HAP2LoggingObject.h>
#import <libobjc.A.dylib/HAP2PairedAccessoryServerPrivate.h>
#import <libobjc.A.dylib/HAPAccessoryReachabilityDelegate.h>
#import <libobjc.A.dylib/HAP2UnpairedAccessoryServerPrivate.h>
#import <libobjc.A.dylib/HAP2AccessoryServerPairingDriverDelegate.h>
#import <libobjc.A.dylib/HAP2AccessoryServerPrivate.h>
#import <libobjc.A.dylib/HAP2AccessoryServer.h>

@protocol HAP2AccessoryServer <HAP2AccessoryServerMetadata>
@property (assign,nonatomic,__weak) id<HAP2AccessoryServerDelegate> delegate; 
@property (nonatomic,readonly) unsigned long long connectionState; 
@required
-(unsigned long long)connectionState;
-(id<HAP2AccessoryServerDelegate>)delegate;
-(void)setDelegate:(id)arg1;

@end


@protocol HAP2AccessoryServerDelegate, HAP2AccessoryServerControllerPrivate, HAP2AccessoryServerBrowserPrivate, HAP2AccessoryServerMetadata, HAP2Cancelable, HAP2AccessoryServerPairingDriver, HAP2UnpairedAccessoryServerPairDelegate, HAPAccessoryReachabilityClient, HAPAccessoryReachabilityProfile;
@class HAP2SerializedOperationQueue, NSString, NSArray, HMFVersion, NSBackgroundActivityScheduler, HAP2PropertyLock, HAPDeviceID, NSData;

@interface HAP2AccessoryServer : HAP2LoggingObject <HAP2PairedAccessoryServerPrivate, HAPAccessoryReachabilityDelegate, HAP2UnpairedAccessoryServerPrivate, HAP2AccessoryServerPairingDriverDelegate, HAP2AccessoryServerPrivate, HAP2AccessoryServer> {

	BOOL _internallyPaired;
	BOOL _hasDiscoveryAdvertisement;
	id<HAP2AccessoryServerDelegate> _delegate;
	unsigned long long _connectionState;
	HAP2SerializedOperationQueue* _operationQueue;
	NSString* _setupID;
	id<HAP2AccessoryServerControllerPrivate> _controller;
	id<HAP2AccessoryServerBrowserPrivate> _browser;
	id<HAP2AccessoryServerMetadata> _currentMetadata;
	NSString* _productData;
	NSArray* _privateAccessories;
	NSString* _pairedName;
	HMFVersion* _pairedProtocolVersion;
	id<HAP2Cancelable> _outstandingUpdateAccessoriesRequest;
	id<HAP2AccessoryServerPairingDriver> _internalPairingDriver;
	id<HAP2UnpairedAccessoryServerPairDelegate> _pairDelegate;
	id<HAPAccessoryReachabilityClient> _reachability;
	id<HAPAccessoryReachabilityProfile> _reachabilityProfile;
	NSBackgroundActivityScheduler* _backgroundScheduler;
	HAP2PropertyLock* _propertyLock;

}

@property (nonatomic,__weak,readonly) id<HAP2AccessoryServerBrowserPrivate> browser; 
@property (nonatomic,readonly) id<HAP2AccessoryServerControllerPrivate> controller; 
@property (nonatomic,readonly) HAP2SerializedOperationQueue * operationQueue; 
@property (nonatomic,retain) NSString * productData; 
@property (assign,nonatomic,__weak) id<HAP2AccessoryServerDelegate> delegate; 
@property (nonatomic,readonly) unsigned long long connectionState; 
@property (nonatomic,readonly) HAPDeviceID * deviceID; 
@property (nonatomic,readonly) BOOL hasPairings; 
@property (nonatomic,readonly) HMFVersion * protocolVersion; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * model; 
@property (nonatomic,readonly) unsigned long long category; 
@property (nonatomic,readonly) unsigned short stateNumber; 
@property (nonatomic,readonly) unsigned short configNumber; 
@property (nonatomic,readonly) NSData * setupHash; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isPaired,nonatomic,readonly) BOOL paired; 
@property (nonatomic,readonly) id<HAP2Accessory> primaryAccessory; 
@property (nonatomic,readonly) NSArray * accessories; 
@property (nonatomic,readonly) id<HAP2AccessoryServerPairingDriver> pairingDriver; 
@property (nonatomic,readonly) NSString * setupID; 
@property (nonatomic,retain) NSString * setupID;                                                  //@synthesize setupID=_setupID - In the implementation block
@property (nonatomic,__weak,readonly) id<HAP2AccessoryServerBrowserPrivate> browser;              //@synthesize browser=_browser - In the implementation block
@property (nonatomic,readonly) id<HAP2AccessoryServerControllerPrivate> controller;               //@synthesize controller=_controller - In the implementation block
@property (nonatomic,readonly) HAP2SerializedOperationQueue * operationQueue;                     //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,retain) NSString * productData;                                              //@synthesize productData=_productData - In the implementation block
@property (assign,nonatomic,__weak) id<HAP2AccessoryServerDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned long long connectionState;                                //@synthesize connectionState=_connectionState - In the implementation block
+(id)new;
+(id)unpairedAccessoryServerWithMetadata:(id)arg1 browser:(id)arg2 controller:(id)arg3 pairingDriver:(id)arg4 operationQueue:(id)arg5 ;
+(id)pairedAccessoryServerWithMetadata:(id)arg1 browser:(id)arg2 controller:(id)arg3 operationQueue:(id)arg4 ;
-(BOOL)isPaired;
-(HAPDeviceID *)deviceID;
-(HAP2SerializedOperationQueue *)operationQueue;
-(NSString *)model;
-(unsigned long long)connectionState;
-(id)init;
-(id<HAP2AccessoryServerBrowserPrivate>)browser;
-(id<HAP2AccessoryServerDelegate>)delegate;
-(unsigned long long)category;
-(HMFVersion *)protocolVersion;
-(NSString *)name;
-(void)setDelegate:(id<HAP2AccessoryServerDelegate>)arg1 ;
-(id)unpairWithCompletion:(/*^block*/id)arg1 ;
-(NSString *)description;
-(NSString *)setupID;
-(NSArray *)accessories;
-(id<HAP2AccessoryServerControllerPrivate>)controller;
-(void)setSetupID:(NSString *)arg1 ;
-(void)setProductData:(NSString *)arg1 ;
-(NSString *)productData;
-(void)dealloc;
-(id<HAP2Accessory>)primaryAccessory;
-(NSData *)setupHash;
-(unsigned short)stateNumber;
-(unsigned short)configNumber;
-(id)identifyWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)hasPairings;
-(void)pollAccessory;
-(void)pairingDriver:(id)arg1 validatePairingCert:(id)arg2 model:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)addPairing:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id<HAP2AccessoryServerPairingDriver>)pairingDriver;
-(void)startConfirming;
-(void)stopConfirming;
-(id)pairWithDelegate:(id)arg1 ;
-(void)becomePairedWithAccessoryServer:(id)arg1 ;
-(void)mergeWithNewlyDiscoveredUnpairedAccessoryServer:(id)arg1 ;
-(void)becomeUnpairedWithAccessoryServer:(id)arg1 ;
-(id)removePairing:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)getPairingsWithCompletion:(/*^block*/id)arg1 ;
-(id)updateAccessories;
-(void)mergeWithNewlyDiscoveredPairedAccessoryServer:(id)arg1 ;
-(id)readValuesForCharacteristics:(id)arg1 timeout:(double)arg2 completion:(/*^block*/id)arg3 ;
-(id)writeValuesForCharacteristics:(id)arg1 timeout:(double)arg2 completion:(/*^block*/id)arg3 ;
-(id)enableNotificationsForCharacteristics:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)disableNotificationsForCharacteristics:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handleEvents:(id)arg1 ;
-(void)handleUpdatedCharacteristicValues:(id)arg1 ;
-(void)handleReestablishedSession;
-(void)handleLostDiscoveryAdvertisement;
-(void)verifyConnection;
-(void)clearAccessories;
-(void)pairingDriver:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)_performBackgroundPollWithCompletion:(/*^block*/id)arg1 ;
-(void)_setBackgroundActivityScheduler:(id)arg1 ;
-(void)pairingDriver:(id)arg1 doesRequirePermission:(unsigned long long)arg2 accessory:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)pairingDriver:(id)arg1 didRejectSetupCodeForAccessory:(id)arg2 backoffInterval:(double)arg3 completion:(/*^block*/id)arg4 ;
-(void)pairingDriver:(id)arg1 didRequestLocalPairingIdentityWithCompletion:(/*^block*/id)arg2 ;
-(void)pairingDriver:(id)arg1 didSaveRemotePairingIdentity:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)pairingDriver:(id)arg1 doesRequireSetupCodeForAccessory:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)pairingDriver:(id)arg1 authenticateSoftwareAuthUUID:(id)arg2 token:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)pairingDriver:(id)arg1 confirmSoftwareAuthUUID:(id)arg2 token:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)pairingDriver:(id)arg1 didFinishAuthWithError:(id)arg2 ;
-(void)pairingDriver:(id)arg1 validateSoftwareAuthUUID:(id)arg2 token:(id)arg3 model:(id)arg4 completion:(/*^block*/id)arg5 ;
@end

