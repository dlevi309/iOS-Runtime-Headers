/*
* Generated on Monday, March 1, 2021 at 2:35:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementModel.framework/RemoteManagementModel
*/

#import <RemoteManagementModel/RemoteManagementModel-Structs.h>
#import <RemoteManagementModel/RMModelAssetBase.h>
#import <libobjc.A.dylib/RMModelRegisteredTypeProtocol.h>

@class RMModelAssetBaseDescriptor, NSString;

@interface RMModelUserIdentityDeclaration : RMModelAssetBase <RMModelRegisteredTypeProtocol> {

	RMModelAssetBaseDescriptor* _payloadDescriptor;
	NSString* _payloadFullName;
	NSString* _payloadEmailAddress;

}

@property (nonatomic,copy) RMModelAssetBaseDescriptor * payloadDescriptor;              //@synthesize payloadDescriptor=_payloadDescriptor - In the implementation block
@property (nonatomic,copy) NSString * payloadFullName;                                  //@synthesize payloadFullName=_payloadFullName - In the implementation block
@property (nonatomic,copy) NSString * payloadEmailAddress;                              //@synthesize payloadEmailAddress=_payloadEmailAddress - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 ;
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)buildWithIdentifier:(id)arg1 descriptor:(id)arg2 fullName:(id)arg3 emailAddress:(id)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPayloadEmailAddress:(NSString *)arg1 ;
-(NSString *)payloadEmailAddress;
-(void)setPayloadDescriptor:(RMModelAssetBaseDescriptor *)arg1 ;
-(RMModelAssetBaseDescriptor *)payloadDescriptor;
-(BOOL)loadPayloadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
-(id)serializePayloadWithType:(short)arg1 ;
-(void)setPayloadFullName:(NSString *)arg1 ;
-(NSString *)payloadFullName;
@end

