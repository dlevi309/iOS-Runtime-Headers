/*
* Generated on Thursday, January 14, 2021 at 2:27:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

@class NSString;


@protocol HAPKeyStore <NSObject>
@property (nonatomic,readonly) NSString * activeControllerPairingIdentifier; 
@optional
-(BOOL)updatePeripheralIdentifier:(id)arg1 forAccessoryIdentifier:(id)arg2 protocolVersion:(unsigned long long)arg3 previousVersion:(unsigned long long*)arg4 resumeSessionID:(unsigned long long)arg5 error:(id*)arg6;
-(id)getPeripherialIdentifiersAndAccessoryNames;
-(BOOL)deletePeripheralIdentifierForAccessoryIdentifier:(id)arg1 error:(id*)arg2;
-(BOOL)deleteAllPeripheralIdentifiers:(id*)arg1;
-(id)readPeripheralIdentifierForAccessoryIdentifier:(id)arg1 protocolVersion:(unsigned long long*)arg2 resumeSessionID:(unsigned long long*)arg3 error:(id*)arg4;
-(BOOL)savePeripheralIdentifier:(id)arg1 forAccessoryIdentifier:(id)arg2 error:(id*)arg3;

@required
-(BOOL)updateActiveControllerPairingIdentifier:(id)arg1;
-(id)getOrCreateLocalPairingIdentity:(id*)arg1;
-(BOOL)savePublicKey:(id)arg1 forAccessoryName:(id)arg2 error:(id*)arg3;
-(BOOL)getControllerPublicKey:(id*)arg1 secretKey:(id*)arg2 keyPair:(id*)arg3 username:(id*)arg4 allowCreation:(BOOL)arg5 error:(id*)arg6;
-(BOOL)removeAccessoryKeyForName:(id)arg1 error:(id*)arg2;
-(BOOL)saveLocalPairingIdentity:(id)arg1 syncable:(BOOL)arg2 error:(id*)arg3;
-(BOOL)saveKeyPair:(id)arg1 username:(id)arg2 syncable:(BOOL)arg3 error:(id*)arg4;
-(BOOL)deserializeKeyPair:(id)arg1 publicKey:(id*)arg2 secretKey:(id*)arg3 error:(id*)arg4;
-(BOOL)registerAccessoryWithHomeKit:(id)arg1 error:(id*)arg2;
-(id)getLocalPairingIdentity:(id*)arg1;
-(BOOL)removeAllAccessoryKeys:(id*)arg1;
-(BOOL)getAllAvailableControllerPublicKeys:(id*)arg1 secretKeys:(id*)arg2 userNames:(id*)arg3 error:(id*)arg4;
-(id)readPublicKeyForAccessoryName:(id)arg1 registeredWithHomeKit:(BOOL*)arg2 error:(id*)arg3;
-(BOOL)removeControllerKeyPairWithError:(id*)arg1;
-(BOOL)removeControllerKeyPairForIdentifier:(id)arg1 leaveTombstone:(BOOL)arg2 error:(id*)arg3;
-(BOOL)updateCurrentiCloudIdentifier:(id)arg1 controllerPairingIdentifier:(id)arg2 error:(id*)arg3;
-(NSString *)activeControllerPairingIdentifier;
-(BOOL)getControllerPublicKey:(id*)arg1 secretKey:(id*)arg2 username:(id*)arg3 allowCreation:(BOOL)arg4 error:(id*)arg5;
-(BOOL)getCurrentiCloudIdentifier:(id*)arg1 controllerPairingIdentifier:(id*)arg2 error:(id*)arg3;
-(BOOL)removeControllerKeyPairLeaveTombstone:(BOOL)arg1 error:(id*)arg2;
-(BOOL)getMetadataSecretKey:(id*)arg1 error:(id*)arg2;

@end

