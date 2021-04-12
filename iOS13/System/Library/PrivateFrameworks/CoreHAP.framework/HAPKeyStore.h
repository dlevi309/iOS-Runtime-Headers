/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

@class NSString;


@protocol HAPKeyStore <NSObject>
@property (nonatomic,readonly) NSString * activeControllerPairingIdentifier; 
@optional
-(BOOL)savePeripheralIdentifier:(id)arg1 forAccessoryIdentifier:(id)arg2 error:(id*)arg3;
-(BOOL)updatePeripheralIdentifier:(id)arg1 forAccessoryIdentifier:(id)arg2 protocolVersion:(unsigned long long)arg3 previousVersion:(unsigned long long*)arg4 resumeSessionID:(unsigned long long)arg5 error:(id*)arg6;
-(BOOL)deletePeripheralIdentifierForAccessoryIdentifier:(id)arg1 error:(id*)arg2;
-(BOOL)deleteAllPeripheralIdentifiers:(id*)arg1;
-(id)readPeripheralIdentifierForAccessoryIdentifier:(id)arg1 protocolVersion:(unsigned long long*)arg2 resumeSessionID:(unsigned long long*)arg3 error:(id*)arg4;
-(id)getPeripherialIdentifiersAndAccessoryNames;

@required
-(id)getLocalPairingIdentity:(id*)arg1;
-(BOOL)registerAccessoryWithHomeKit:(id)arg1 error:(id*)arg2;
-(BOOL)getControllerPublicKey:(id*)arg1 secretKey:(id*)arg2 username:(id*)arg3 allowCreation:(BOOL)arg4 error:(id*)arg5;
-(id)readPublicKeyForAccessoryName:(id)arg1 registeredWithHomeKit:(BOOL*)arg2 error:(id*)arg3;
-(BOOL)removeAccessoryKeyForName:(id)arg1 error:(id*)arg2;
-(BOOL)savePublicKey:(id)arg1 forAccessoryName:(id)arg2 error:(id*)arg3;
-(BOOL)getControllerPublicKey:(id*)arg1 secretKey:(id*)arg2 keyPair:(id*)arg3 username:(id*)arg4 allowCreation:(BOOL)arg5 error:(id*)arg6;
-(BOOL)saveKeyPair:(id)arg1 username:(id)arg2 syncable:(BOOL)arg3 error:(id*)arg4;
-(BOOL)removeControllerKeyPairLeaveTombstone:(BOOL)arg1 error:(id*)arg2;
-(id)getOrCreateLocalPairingIdentity:(id*)arg1;
-(BOOL)saveLocalPairingIdentity:(id)arg1 syncable:(BOOL)arg2 error:(id*)arg3;
-(BOOL)deserializeKeyPair:(id)arg1 publicKey:(id*)arg2 secretKey:(id*)arg3 error:(id*)arg4;
-(BOOL)getAllAvailableControllerPublicKeys:(id*)arg1 secretKeys:(id*)arg2 userNames:(id*)arg3 error:(id*)arg4;
-(BOOL)updateActiveControllerPairingIdentifier:(id)arg1;
-(BOOL)removeControllerKeyPairWithError:(id*)arg1;
-(BOOL)updateCurrentiCloudIdentifier:(id)arg1 controllerPairingIdentifier:(id)arg2 error:(id*)arg3;
-(BOOL)getCurrentiCloudIdentifier:(id*)arg1 controllerPairingIdentifier:(id*)arg2 error:(id*)arg3;
-(BOOL)removeControllerKeyPairForIdentifier:(id)arg1 leaveTombstone:(BOOL)arg2 error:(id*)arg3;
-(BOOL)getMetadataSecretKey:(id*)arg1 error:(id*)arg2;
-(BOOL)removeAllAccessoryKeys:(id*)arg1;
-(NSString *)activeControllerPairingIdentifier;

@end

