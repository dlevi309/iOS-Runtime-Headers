/*
* Generated on Monday, March 1, 2021 at 2:34:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMConfigurationBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class NSNumber, NSString;

@interface CEMDeviceActivationLockSettingsDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {

	NSNumber* _payloadActivationLockAllowedWhileSupervised;

}

@property (nonatomic,copy) NSNumber * payloadActivationLockAllowedWhileSupervised;              //@synthesize payloadActivationLockAllowedWhileSupervised=_payloadActivationLockAllowedWhileSupervised - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)profileType;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 ;
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)restrictionPayloadKeys;
+(id)buildWithIdentifier:(id)arg1 withActivationLockAllowedWhileSupervised:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)multipleAllowed;
-(BOOL)mustBeSupervised;
-(int)activationLevel;
-(id)assetReferences;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadActivationLockAllowedWhileSupervised:(NSNumber *)arg1 ;
-(NSNumber *)payloadActivationLockAllowedWhileSupervised;
@end

