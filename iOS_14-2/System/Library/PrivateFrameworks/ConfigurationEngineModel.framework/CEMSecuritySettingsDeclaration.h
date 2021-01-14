/*
* Generated on Thursday, January 14, 2021 at 2:24:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMConfigurationBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class NSNumber, NSString;

@interface CEMSecuritySettingsDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {

	NSNumber* _payloadAllowUntrustedTLSPrompt;
	NSNumber* _payloadAllowOTAPKIUpdates;
	NSNumber* _payloadForceEncryptedBackup;
	NSNumber* _payloadAllowEraseContentAndSettings;
	NSNumber* _payloadAllowEnablingRestrictions;

}

@property (nonatomic,copy) NSNumber * payloadAllowUntrustedTLSPrompt;                   //@synthesize payloadAllowUntrustedTLSPrompt=_payloadAllowUntrustedTLSPrompt - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowOTAPKIUpdates;                        //@synthesize payloadAllowOTAPKIUpdates=_payloadAllowOTAPKIUpdates - In the implementation block
@property (nonatomic,copy) NSNumber * payloadForceEncryptedBackup;                      //@synthesize payloadForceEncryptedBackup=_payloadForceEncryptedBackup - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowEraseContentAndSettings;              //@synthesize payloadAllowEraseContentAndSettings=_payloadAllowEraseContentAndSettings - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowEnablingRestrictions;                 //@synthesize payloadAllowEnablingRestrictions=_payloadAllowEnablingRestrictions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 ;
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)profileType;
+(id)restrictionPayloadKeys;
+(id)buildWithIdentifier:(id)arg1 withAllowUntrustedTLSPrompt:(id)arg2 withAllowOTAPKIUpdates:(id)arg3 withForceEncryptedBackup:(id)arg4 withAllowEraseContentAndSettings:(id)arg5 withAllowEnablingRestrictions:(id)arg6 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)multipleAllowed;
-(BOOL)mustBeSupervised;
-(int)activationLevel;
-(id)assetReferences;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadAllowUntrustedTLSPrompt:(NSNumber *)arg1 ;
-(void)setPayloadAllowOTAPKIUpdates:(NSNumber *)arg1 ;
-(void)setPayloadForceEncryptedBackup:(NSNumber *)arg1 ;
-(void)setPayloadAllowEraseContentAndSettings:(NSNumber *)arg1 ;
-(void)setPayloadAllowEnablingRestrictions:(NSNumber *)arg1 ;
-(NSNumber *)payloadAllowUntrustedTLSPrompt;
-(NSNumber *)payloadAllowOTAPKIUpdates;
-(NSNumber *)payloadForceEncryptedBackup;
-(NSNumber *)payloadAllowEraseContentAndSettings;
-(NSNumber *)payloadAllowEnablingRestrictions;
@end
