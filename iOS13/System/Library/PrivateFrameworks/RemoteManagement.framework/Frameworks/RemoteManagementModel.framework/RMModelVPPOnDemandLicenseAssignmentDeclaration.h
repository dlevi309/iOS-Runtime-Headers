/*
* Generated on Monday, March 1, 2021 at 2:35:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementModel.framework/RemoteManagementModel
*/

#import <RemoteManagementModel/RemoteManagementModel-Structs.h>
#import <RemoteManagementModel/RMModelAssetBase.h>
#import <libobjc.A.dylib/RMModelRegisteredTypeProtocol.h>

@class RMModelAssetBaseDescriptor, RMModelAssetBaseReference, NSString;

@interface RMModelVPPOnDemandLicenseAssignmentDeclaration : RMModelAssetBase <RMModelRegisteredTypeProtocol> {

	RMModelAssetBaseDescriptor* _payloadDescriptor;
	RMModelAssetBaseReference* _payloadReference;

}

@property (nonatomic,copy) RMModelAssetBaseDescriptor * payloadDescriptor;              //@synthesize payloadDescriptor=_payloadDescriptor - In the implementation block
@property (nonatomic,copy) RMModelAssetBaseReference * payloadReference;                //@synthesize payloadReference=_payloadReference - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)buildWithIdentifier:(id)arg1 descriptor:(id)arg2 reference:(id)arg3 ;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 reference:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPayloadDescriptor:(RMModelAssetBaseDescriptor *)arg1 ;
-(RMModelAssetBaseDescriptor *)payloadDescriptor;
-(void)setPayloadReference:(RMModelAssetBaseReference *)arg1 ;
-(RMModelAssetBaseReference *)payloadReference;
-(BOOL)loadPayloadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
-(id)serializePayloadWithType:(short)arg1 ;
@end

