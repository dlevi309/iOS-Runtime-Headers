/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NEVPNProtocolPPP.h>

@class NEKeychainItem, NSString, NEIdentityKeychainItem, NSData;

@interface NEVPNProtocolL2TP : NEVPNProtocolPPP {

	BOOL _machineIdentityDataImported;
	long long _machineAuthenticationMethod;
	NEKeychainItem* _sharedSecretKeychainItem;
	NSString* _localIdentifier;
	NEIdentityKeychainItem* _machineIdentity;
	NSData* _machineIdentityDataInternal;

}

@property (retain) NEIdentityKeychainItem * machineIdentity;              //@synthesize machineIdentity=_machineIdentity - In the implementation block
@property (copy) NSData * machineIdentityDataInternal;                    //@synthesize machineIdentityDataInternal=_machineIdentityDataInternal - In the implementation block
@property (assign) BOOL machineIdentityDataImported;                      //@synthesize machineIdentityDataImported=_machineIdentityDataImported - In the implementation block
@property (assign) long long machineAuthenticationMethod;                 //@synthesize machineAuthenticationMethod=_machineAuthenticationMethod - In the implementation block
@property (copy) NSData * sharedSecretReference; 
@property (copy) NEKeychainItem * sharedSecretKeychainItem;               //@synthesize sharedSecretKeychainItem=_sharedSecretKeychainItem - In the implementation block
@property (copy) NSData * machineIdentityReference; 
@property (copy) NSString * localIdentifier;                              //@synthesize localIdentifier=_localIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(NSString *)localIdentifier;
-(BOOL)checkValidityAndCollectErrors:(id)arg1 ;
-(id)init;
-(NSData *)sharedSecretReference;
-(void)encodeWithCoder:(id)arg1 ;
-(void)syncWithKeychainInDomain:(long long)arg1 configuration:(id)arg2 suffix:(id)arg3 ;
-(void)removeKeychainItemsInDomain:(long long)arg1 keepIdentity:(BOOL)arg2 ;
-(void)setSharedSecretReference:(NSData *)arg1 ;
-(void)setSharedSecretKeychainItem:(NEKeychainItem *)arg1 ;
-(void)setMachineIdentityReference:(NSData *)arg1 ;
-(void)setLocalIdentifier:(NSString *)arg1 ;
-(void)setMachineAuthenticationMethod:(long long)arg1 ;
-(NEKeychainItem *)sharedSecretKeychainItem;
-(BOOL)needToUpdateKeychain;
-(long long)machineAuthenticationMethod;
-(NSData *)machineIdentityReference;
-(SCNetworkInterfaceRef)createInterface;
-(BOOL)setServiceProtocolsInService:(SCNetworkServiceRef)arg1 ;
-(BOOL)updateWithServiceProtocolsFromService:(SCNetworkServiceRef)arg1 ;
-(void)migratePasswordsFromPreferences:(SCPreferencesRef)arg1 ;
-(NEIdentityKeychainItem *)machineIdentity;
-(NSData *)machineIdentityDataInternal;
-(BOOL)machineIdentityDataImported;
-(void)setMachineIdentity:(NEIdentityKeychainItem *)arg1 ;
-(void)setMachineIdentityDataInternal:(NSData *)arg1 ;
-(void)setMachineIdentityDataImported:(BOOL)arg1 ;
-(id)copyLegacyIPSecDictionary;
-(void)setIPSecSettingsFromLegacyDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

