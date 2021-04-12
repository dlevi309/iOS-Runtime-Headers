/*
* Generated on Monday, March 1, 2021 at 2:35:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementModel.framework/RemoteManagementModel
*/

#import <RemoteManagementModel/RemoteManagementModel-Structs.h>
#import <RemoteManagementModel/RMModelConfigurationBase.h>
#import <libobjc.A.dylib/RMModelRegisteredTypeProtocol.h>

@class NSString;

@interface RMModelAccountGoogleDeclaration : RMModelConfigurationBase <RMModelRegisteredTypeProtocol> {

	NSString* _payloadDescription;
	NSString* _payloadUserIdentityAssetReference;

}

@property (nonatomic,copy) NSString * payloadDescription;                             //@synthesize payloadDescription=_payloadDescription - In the implementation block
@property (nonatomic,copy) NSString * payloadUserIdentityAssetReference;              //@synthesize payloadUserIdentityAssetReference=_payloadUserIdentityAssetReference - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 ;
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)buildWithIdentifier:(id)arg1 description:(id)arg2 userIdentityAssetReference:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)payloadDescription;
-(id)assetReferences;
-(void)setPayloadDescription:(NSString *)arg1 ;
-(BOOL)loadPayloadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
-(id)serializePayloadWithType:(short)arg1 ;
-(NSString *)payloadUserIdentityAssetReference;
-(void)setPayloadUserIdentityAssetReference:(NSString *)arg1 ;
@end

