/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <CoreHAP/HAPAccessoryServer.h>
#import <libobjc.A.dylib/HAP2AccessoryDelegate.h>
#import <libobjc.A.dylib/HAP2PairedAccessoryServerDelegate.h>
#import <libobjc.A.dylib/HAP2UnpairedAccessoryServerDelegate.h>
#import <libobjc.A.dylib/HAP2UnpairedAccessoryServerPairDelegate.h>
#import <libobjc.A.dylib/HAP2AccessoryServerDelegate.h>

@protocol HAP2UnpairedAccessoryServer, HAP2PairedAccessoryServer, HAP2Cancelable;
@class HAPAccessory, NSArray, HAP2SerializedOperationQueue, NSString;

@interface HAPAccessoryServerHAP2Adapter : HAPAccessoryServer <HAP2AccessoryDelegate, HAP2PairedAccessoryServerDelegate, HAP2UnpairedAccessoryServerDelegate, HAP2UnpairedAccessoryServerPairDelegate, HAP2AccessoryServerDelegate> {

	BOOL _internallyPaired;
	BOOL _skipUserConsent;
	BOOL _discoverAccessoriesOncePaired;
	id<HAP2UnpairedAccessoryServer> _unpairedServer;
	id<HAP2PairedAccessoryServer> _pairedServer;
	id<HAP2Cancelable> _pairingSessionCancelable;
	/*^block*/id _setupCodeCompletion;
	/*^block*/id _userConsentCompletion;
	/*^block*/id _authValidationCompletion;
	/*^block*/id _softwareAuthFinishedCompletion;
	/*^block*/id _authenticateUUIDCompletion;
	HAPAccessory* _primaryAccessory;
	NSArray* _accessories;
	HAP2SerializedOperationQueue* _operationQueue;

}

@property (nonatomic,readonly) HAP2SerializedOperationQueue * operationQueue;                                            //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,retain) id<HAP2UnpairedAccessoryServer> unpairedServer;                                             //@synthesize unpairedServer=_unpairedServer - In the implementation block
@property (nonatomic,retain) id<HAP2PairedAccessoryServer> pairedServer;                                                 //@synthesize pairedServer=_pairedServer - In the implementation block
@property (assign,getter=isInternallyPaired,nonatomic) BOOL internallyPaired;                                            //@synthesize internallyPaired=_internallyPaired - In the implementation block
@property (nonatomic,retain) id<HAP2Cancelable> pairingSessionCancelable;                                                //@synthesize pairingSessionCancelable=_pairingSessionCancelable - In the implementation block
@property (nonatomic,copy) id setupCodeCompletion;                                                                       //@synthesize setupCodeCompletion=_setupCodeCompletion - In the implementation block
@property (nonatomic,copy) id userConsentCompletion;                                                                     //@synthesize userConsentCompletion=_userConsentCompletion - In the implementation block
@property (assign,getter=shouldSkipUserConsent,nonatomic) BOOL skipUserConsent;                                          //@synthesize skipUserConsent=_skipUserConsent - In the implementation block
@property (nonatomic,copy) id authValidationCompletion;                                                                  //@synthesize authValidationCompletion=_authValidationCompletion - In the implementation block
@property (nonatomic,copy) id softwareAuthFinishedCompletion;                                                            //@synthesize softwareAuthFinishedCompletion=_softwareAuthFinishedCompletion - In the implementation block
@property (nonatomic,copy) id authenticateUUIDCompletion;                                                                //@synthesize authenticateUUIDCompletion=_authenticateUUIDCompletion - In the implementation block
@property (assign,getter=shouldDiscoverAccessoriesOncePaired,nonatomic) BOOL discoverAccessoriesOncePaired;              //@synthesize discoverAccessoriesOncePaired=_discoverAccessoriesOncePaired - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isPaired;
-(id)clientQueue;
-(BOOL)isReachable;
-(HAP2SerializedOperationQueue *)operationQueue;
-(long long)linkType;
-(id)category;
-(void)accessoryServerDidUpdateConnectionState:(id)arg1 ;
-(NSString *)description;
-(void)setAccessories:(id)arg1 ;
-(id)accessories;
-(id)productData;
-(id)version;
-(id)primaryAccessory;
-(void)setPrimaryAccessory:(id)arg1 ;
-(id)setupHash;
-(unsigned long long)configNumber;
-(BOOL)isSecuritySessionOpen;
-(void)listPairingsWithCompletionQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)writeCharacteristicValues:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)readCharacteristicValues:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)enableEvents:(BOOL)arg1 forCharacteristics:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 queue:(id)arg4 ;
-(void)identifyWithCompletion:(/*^block*/id)arg1 ;
-(void)discoverAccessories;
-(void)startPairingWithConsentRequired:(BOOL)arg1 config:(id)arg2 ownershipToken:(id)arg3 ;
-(void)continuePairingAfterAuthPrompt;
-(BOOL)stopPairingWithError:(id*)arg1 ;
-(BOOL)tryPairingPassword:(id)arg1 error:(id*)arg2 ;
-(void)addPairing:(id)arg1 completionQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)removePairing:(id)arg1 completionQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)removePairingForCurrentControllerOnQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)continueAuthAfterValidation:(BOOL)arg1 ;
-(void)continuePairingUsingWAC;
-(void)tearDownSessionOnAuthCompletion;
-(void)provisionToken:(id)arg1 ;
-(void)setSecuritySessionOpen:(BOOL)arg1 ;
-(void)_enableEvents:(BOOL)arg1 forCharacteristics:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 queue:(id)arg4 ;
-(void)authenticateAccessory;
-(void)handleUpdatesForCharacteristics:(id)arg1 stateNumber:(id)arg2 ;
-(void)accessoryServerDidUpdateHasPairings:(id)arg1 ;
-(void)accessoryServerDidUpdateName:(id)arg1 ;
-(void)accessoryServerDidUpdateCategory:(id)arg1 ;
-(void)_readCharacteristicValues:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_writeCharacteristicValues:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)initWithOperationQueue:(id)arg1 accessoryServer:(id)arg2 ;
-(BOOL)shouldDiscoverAccessoriesOncePaired;
-(void)setDiscoverAccessoriesOncePaired:(BOOL)arg1 ;
-(BOOL)isInternallyPaired;
-(id)activeServer;
-(id<HAP2PairedAccessoryServer>)pairedServer;
-(BOOL)_hap2CharacteristicTuplesForHAPCharacteristics:(id)arg1 tuples:(id*)arg2 error:(id*)arg3 ;
-(id<HAP2UnpairedAccessoryServer>)unpairedServer;
-(id)authValidationCompletion;
-(void)_continuePairingAfterAuthPromptWithError:(id)arg1 ;
-(void)setAuthValidationCompletion:(id)arg1 ;
-(id)authenticateUUIDCompletion;
-(void)setAuthenticateUUIDCompletion:(id)arg1 ;
-(id<HAP2Cancelable>)pairingSessionCancelable;
-(void)_notifyDelegatePairingStoppedWithError:(id)arg1 ;
-(void)setPairingSessionCancelable:(id<HAP2Cancelable>)arg1 ;
-(id)userConsentCompletion;
-(void)_handleIncorrectStartPairingCall;
-(void)setUserConsentCompletion:(id)arg1 ;
-(id)softwareAuthFinishedCompletion;
-(void)setSoftwareAuthFinishedCompletion:(id)arg1 ;
-(void)setSkipUserConsent:(BOOL)arg1 ;
-(id)setupCodeCompletion;
-(void)setSetupCodeCompletion:(id)arg1 ;
-(void)_printMissingValues:(id)arg1 ;
-(BOOL)_isActiveServer:(id)arg1 ;
-(id)_accessoryFromHAP2Accessory:(id)arg1 ;
-(void)_informDelegateOfUpdatedAccessories:(id)arg1 error:(id)arg2 ;
-(void)_resetPairingState;
-(BOOL)shouldSkipUserConsent;
-(void)accessory:(id)arg1 didNotifyForUpdatedValuesOnCharacteristic:(id)arg2 ;
-(void)accessoryServerDidBecomeUnpaired:(id)arg1 ;
-(void)accessoryServerDidUpdateAccessories:(id)arg1 ;
-(void)accessoryServer:(id)arg1 didFailToUpdateAccessoriesWithError:(id)arg2 ;
-(void)accessoryServer:(id)arg1 doesRequirePermission:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)accessoryServer:(id)arg1 doesRequireSetupCodeWithCompletion:(/*^block*/id)arg2 ;
-(void)accessoryServer:(id)arg1 didRejectSetupCodeWithBackoffInterval:(double)arg2 completion:(/*^block*/id)arg3 ;
-(void)accessoryServer:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)accessoryServer:(id)arg1 validateSoftwareAuthUUID:(id)arg2 token:(id)arg3 model:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)accessoryServer:(id)arg1 validatePairingCert:(id)arg2 model:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)accessoryServer:(id)arg1 authenticateSoftwareAuthUUID:(id)arg2 token:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)accessoryServer:(id)arg1 confirmSoftwareAuthUUID:(id)arg2 token:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)accessoryServer:(id)arg1 didFinishAuthWithError:(id)arg2 ;
-(id)initWithUnpairedServer:(id)arg1 ;
-(id)initWithPairedServer:(id)arg1 ;
-(void)setUnpairedServer:(id<HAP2UnpairedAccessoryServer>)arg1 ;
-(void)setPairedServer:(id<HAP2PairedAccessoryServer>)arg1 ;
-(void)setShouldBePaired:(BOOL)arg1 ;
-(BOOL)supportsTimedWrite;
-(id)_hapIdentifierForAccessory:(id)arg1 ;
-(void)setInternallyPaired:(BOOL)arg1 ;
@end

