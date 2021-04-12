/*
* Generated on Monday, March 1, 2021 at 2:34:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMConfigurationBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class CEMApplicationLockDeclaration_App, NSString;

@interface CEMApplicationLockDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {

	CEMApplicationLockDeclaration_App* _payloadApp;

}

@property (nonatomic,copy) CEMApplicationLockDeclaration_App * payloadApp;              //@synthesize payloadApp=_payloadApp - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)profileType;
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)restrictionPayloadKeys;
+(id)buildWithIdentifier:(id)arg1 withApp:(id)arg2 ;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 withApp:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)multipleAllowed;
-(BOOL)mustBeSupervised;
-(int)activationLevel;
-(id)assetReferences;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadApp:(CEMApplicationLockDeclaration_App *)arg1 ;
-(CEMApplicationLockDeclaration_App *)payloadApp;
@end

