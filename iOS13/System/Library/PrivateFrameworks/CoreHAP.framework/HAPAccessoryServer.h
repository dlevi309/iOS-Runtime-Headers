/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <HMFoundation/HMFObject.h>

@protocol HMFLocking, HAPAccessoryServerDelegate, OS_dispatch_queue, HAPKeyStore;
@class NSString, NSNumber, NSObject, NSData, HAPAccessory, NSArray, HMFVersion, NSHashTable, HAPDeviceID;

@interface HAPAccessoryServer : HMFObject {

	NSString* _name;
	NSString* _identifier;
	id<HMFLocking> _lock;
	BOOL _hasPairings;
	BOOL _reachable;
	BOOL _securitySessionOpen;
	BOOL _supportsTimedWrite;
	BOOL _bleLinkConnected;
	BOOL _incompatibleUpdate;
	NSNumber* _category;
	unsigned long long _configNumber;
	id<HAPAccessoryServerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSData* _setupHash;
	unsigned long long _authMethod;
	HAPAccessory* _primaryAccessory;
	NSArray* _accessories;
	long long _linkType;
	HMFVersion* _version;
	NSHashTable* _internalDelegates;
	NSObject*<OS_dispatch_queue> _internalDelegateQueue;
	NSObject*<OS_dispatch_queue> _clientQueue;
	unsigned long long _stateNumber;
	unsigned long long _compatibilityFeatures;
	id<HAPKeyStore> _keyStore;
	unsigned long long _pairSetupType;

}

@property (nonatomic,readonly) NSHashTable * internalDelegates;                                 //@synthesize internalDelegates=_internalDelegates - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> internalDelegateQueue;              //@synthesize internalDelegateQueue=_internalDelegateQueue - In the implementation block
@property (__weak,readonly) id<HAPAccessoryServerDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue;                      //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;                        //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,copy) NSString * name;                                                     //@synthesize name=_name - In the implementation block
@property (getter=isPaired,nonatomic,readonly) BOOL paired; 
@property (assign,nonatomic) BOOL hasPairings;                                                  //@synthesize hasPairings=_hasPairings - In the implementation block
@property (assign,getter=isReachable,nonatomic) BOOL reachable;                                 //@synthesize reachable=_reachable - In the implementation block
@property (getter=isSecuritySessionOpen) BOOL securitySessionOpen;                              //@synthesize securitySessionOpen=_securitySessionOpen - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSNumber * category;                                                 //@synthesize category=_category - In the implementation block
@property (assign,nonatomic) unsigned long long configNumber;                                   //@synthesize configNumber=_configNumber - In the implementation block
@property (assign,nonatomic) unsigned long long stateNumber;                                    //@synthesize stateNumber=_stateNumber - In the implementation block
@property (assign,nonatomic) unsigned long long compatibilityFeatures;                          //@synthesize compatibilityFeatures=_compatibilityFeatures - In the implementation block
@property (assign,getter=isIncompatibleUpdate,nonatomic) BOOL incompatibleUpdate;               //@synthesize incompatibleUpdate=_incompatibleUpdate - In the implementation block
@property (nonatomic,retain) HAPAccessory * primaryAccessory;                                   //@synthesize primaryAccessory=_primaryAccessory - In the implementation block
@property (nonatomic,copy) NSArray * accessories;                                               //@synthesize accessories=_accessories - In the implementation block
@property (nonatomic,__weak,readonly) id<HAPKeyStore> keyStore;                                 //@synthesize keyStore=_keyStore - In the implementation block
@property (nonatomic,copy) NSData * setupHash;                                                  //@synthesize setupHash=_setupHash - In the implementation block
@property (copy) HMFVersion * version;                                                          //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) unsigned long long pairSetupType;                                  //@synthesize pairSetupType=_pairSetupType - In the implementation block
@property (copy,readonly) HAPDeviceID * deviceID; 
@property (nonatomic,readonly) long long linkType;                                              //@synthesize linkType=_linkType - In the implementation block
@property (assign,nonatomic) BOOL supportsTimedWrite;                                           //@synthesize supportsTimedWrite=_supportsTimedWrite - In the implementation block
@property (assign,nonatomic) unsigned long long authMethod;                                     //@synthesize authMethod=_authMethod - In the implementation block
@property (getter=isBLELinkConnected,nonatomic,readonly) BOOL bleLinkConnected;                 //@synthesize bleLinkConnected=_bleLinkConnected - In the implementation block
+(BOOL)isAccessoryServerWithIdentifierPaired:(id)arg1 keyStore:(id)arg2 ;
-(id)init;
-(NSString *)name;
-(id<HAPAccessoryServerDelegate>)delegate;
-(void)setName:(NSString *)arg1 ;
-(NSString *)identifier;
-(NSNumber *)category;
-(void)setCategory:(NSNumber *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(HMFVersion *)version;
-(void)setVersion:(HMFVersion *)arg1 ;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(HAPDeviceID *)deviceID;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(void)reconfirm;
-(NSArray *)accessories;
-(long long)linkType;
-(BOOL)isReachable;
-(void)setReachable:(BOOL)arg1 ;
-(BOOL)isPaired;
-(NSObject*<OS_dispatch_queue>)internalDelegateQueue;
-(void)setAccessories:(NSArray *)arg1 ;
-(void)setStateNumber:(unsigned long long)arg1 ;
-(unsigned long long)stateNumber;
-(unsigned long long)configNumber;
-(id)initWithKeystore:(id)arg1 ;
-(unsigned long long)compatibilityFeatures;
-(NSData *)setupHash;
-(void)setSetupHash:(NSData *)arg1 ;
-(id<HAPKeyStore>)keyStore;
-(void)setHasPairings:(BOOL)arg1 ;
-(BOOL)hasPairings;
-(unsigned long long)authMethod;
-(void)continuePairingAfterAuthPrompt;
-(void)setSecuritySessionOpen:(BOOL)arg1 ;
-(BOOL)removePairingForCurrentControllerOnQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)pairSetupType;
-(void)startPairingWithConsentRequired:(BOOL)arg1 config:(id)arg2 ownershipToken:(id)arg3 ;
-(BOOL)requiresTimedWrite:(id)arg1 ;
-(void)enumerateInternalDelegatesUsingBlock:(/*^block*/id)arg1 ;
-(void)setConfigNumber:(unsigned long long)arg1 ;
-(void)setCompatibilityFeatures:(unsigned long long)arg1 ;
-(void)enableEvents:(BOOL)arg1 forCharacteristics:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 queue:(id)arg4 ;
-(void)setSupportsTimedWrite:(BOOL)arg1 ;
-(void)setPairSetupType:(unsigned long long)arg1 ;
-(void)setAuthMethod:(unsigned long long)arg1 ;
-(void)continuePairingUsingWAC;
-(HAPAccessory *)primaryAccessory;
-(void)discoverAccessories;
-(BOOL)tryPairingPassword:(id)arg1 error:(id*)arg2 ;
-(void)tearDownAndRestablishSession;
-(BOOL)stopPairingWithError:(id*)arg1 ;
-(void)readCharacteristicValues:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 logEventSession:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)writeCharacteristicValues:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 logEventSession:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)handleUpdatesForCharacteristics:(id)arg1 stateNumber:(id)arg2 ;
-(void)addPairing:(id)arg1 completionQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)removePairing:(id)arg1 completionQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)listPairingsWithCompletionQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)identifyWithCompletion:(/*^block*/id)arg1 ;
-(id)productData;
-(void)addInternalDelegate:(id)arg1 ;
-(BOOL)isSecuritySessionOpen;
-(BOOL)matchesSetupID:(id)arg1 serverIdentifier:(id)arg2 ;
-(void)setPrimaryAccessory:(HAPAccessory *)arg1 ;
-(BOOL)isIncompatibleUpdate;
-(BOOL)isBLELinkConnected;
-(BOOL)matchesSetupID:(id)arg1 ;
-(BOOL)supportsTimedWrite;
-(NSHashTable *)internalDelegates;
-(void)removeInternalDelegate:(id)arg1 ;
-(void)setIncompatibleUpdate:(BOOL)arg1 ;
@end

