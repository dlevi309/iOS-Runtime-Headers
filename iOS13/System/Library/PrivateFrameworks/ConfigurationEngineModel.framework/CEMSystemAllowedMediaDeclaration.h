/*
* Generated on Monday, March 1, 2021 at 2:34:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMConfigurationBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class CEMSystemAllowedMediaDeclaration_MediaItems, NSString;

@interface CEMSystemAllowedMediaDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {

	CEMSystemAllowedMediaDeclaration_MediaItems* _payloadLogoutEject;
	CEMSystemAllowedMediaDeclaration_MediaItems* _payloadMountControls;
	CEMSystemAllowedMediaDeclaration_MediaItems* _payloadUnmountControls;

}

@property (nonatomic,copy) CEMSystemAllowedMediaDeclaration_MediaItems * payloadLogoutEject;                  //@synthesize payloadLogoutEject=_payloadLogoutEject - In the implementation block
@property (nonatomic,copy) CEMSystemAllowedMediaDeclaration_MediaItems * payloadMountControls;                //@synthesize payloadMountControls=_payloadMountControls - In the implementation block
@property (nonatomic,copy) CEMSystemAllowedMediaDeclaration_MediaItems * payloadUnmountControls;              //@synthesize payloadUnmountControls=_payloadUnmountControls - In the implementation block
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
+(id)buildWithIdentifier:(id)arg1 withLogoutEject:(id)arg2 withMountControls:(id)arg3 withUnmountControls:(id)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)multipleAllowed;
-(BOOL)mustBeSupervised;
-(int)activationLevel;
-(id)assetReferences;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadLogoutEject:(CEMSystemAllowedMediaDeclaration_MediaItems *)arg1 ;
-(void)setPayloadMountControls:(CEMSystemAllowedMediaDeclaration_MediaItems *)arg1 ;
-(void)setPayloadUnmountControls:(CEMSystemAllowedMediaDeclaration_MediaItems *)arg1 ;
-(CEMSystemAllowedMediaDeclaration_MediaItems *)payloadLogoutEject;
-(CEMSystemAllowedMediaDeclaration_MediaItems *)payloadMountControls;
-(CEMSystemAllowedMediaDeclaration_MediaItems *)payloadUnmountControls;
@end

