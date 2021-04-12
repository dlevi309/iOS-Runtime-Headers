/*
* Generated on Monday, March 1, 2021 at 2:35:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementModel.framework/RemoteManagementModel
*/

#import <RemoteManagementModel/RemoteManagementModel-Structs.h>
#import <RemoteManagementModel/RMModelConfigurationBase.h>
#import <libobjc.A.dylib/RMModelRegisteredTypeProtocol.h>

@class NSString;

@interface RMModelManagementTestDeclaration : RMModelConfigurationBase <RMModelRegisteredTypeProtocol> {

	NSString* _payloadEcho;
	NSString* _payloadReturnStatus;

}

@property (nonatomic,copy) NSString * payloadEcho;                      //@synthesize payloadEcho=_payloadEcho - In the implementation block
@property (nonatomic,copy) NSString * payloadReturnStatus;              //@synthesize payloadReturnStatus=_payloadReturnStatus - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)buildWithIdentifier:(id)arg1 echo:(id)arg2 returnStatus:(id)arg3 ;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 echo:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)assetReferences;
-(void)setPayloadEcho:(NSString *)arg1 ;
-(void)setPayloadReturnStatus:(NSString *)arg1 ;
-(NSString *)payloadEcho;
-(NSString *)payloadReturnStatus;
-(BOOL)loadPayloadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
-(id)serializePayloadWithType:(short)arg1 ;
@end

