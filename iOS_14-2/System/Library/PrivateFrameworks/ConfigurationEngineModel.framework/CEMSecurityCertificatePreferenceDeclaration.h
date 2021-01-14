/*
* Generated on Thursday, January 14, 2021 at 2:24:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMConfigurationBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class NSString;

@interface CEMSecurityCertificatePreferenceDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {

	NSString* _payloadName;
	NSString* _payloadCertificateIdentifier;

}

@property (nonatomic,copy) NSString * payloadName;                               //@synthesize payloadName=_payloadName - In the implementation block
@property (nonatomic,copy) NSString * payloadCertificateIdentifier;              //@synthesize payloadCertificateIdentifier=_payloadCertificateIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)profileType;
+(id)restrictionPayloadKeys;
+(id)buildWithIdentifier:(id)arg1 withName:(id)arg2 withCertificateIdentifier:(id)arg3 ;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 withName:(id)arg2 withCertificateIdentifier:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)multipleAllowed;
-(BOOL)mustBeSupervised;
-(int)activationLevel;
-(id)assetReferences;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadName:(NSString *)arg1 ;
-(NSString *)payloadName;
-(NSString *)payloadCertificateIdentifier;
-(void)setPayloadCertificateIdentifier:(NSString *)arg1 ;
@end

