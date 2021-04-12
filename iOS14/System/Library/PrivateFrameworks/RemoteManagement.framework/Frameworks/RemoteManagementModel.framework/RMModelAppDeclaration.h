/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementModel.framework/RemoteManagementModel
*/

#import <RemoteManagementModel/RemoteManagementModel-Structs.h>
#import <RemoteManagementModel/RMModelConfigurationBase.h>
#import <libobjc.A.dylib/RMModelRegisteredTypeProtocol.h>

@class NSString, RMModelAppDeclaration_Installation;

@interface RMModelAppDeclaration : RMModelConfigurationBase <RMModelRegisteredTypeProtocol> {

	NSString* _payloadBundleIdentifier;
	RMModelAppDeclaration_Installation* _payloadInstallation;

}

@property (nonatomic,copy) NSString * payloadBundleIdentifier;                                    //@synthesize payloadBundleIdentifier=_payloadBundleIdentifier - In the implementation block
@property (nonatomic,copy) RMModelAppDeclaration_Installation * payloadInstallation;              //@synthesize payloadInstallation=_payloadInstallation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)buildWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 installation:(id)arg3 ;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)assetReferences;
-(void)setPayloadBundleIdentifier:(NSString *)arg1 ;
-(NSString *)payloadBundleIdentifier;
-(BOOL)loadPayloadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
-(id)serializePayloadWithType:(short)arg1 ;
-(RMModelAppDeclaration_Installation *)payloadInstallation;
-(void)setPayloadInstallation:(RMModelAppDeclaration_Installation *)arg1 ;
@end

