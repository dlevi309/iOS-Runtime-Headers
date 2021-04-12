/*
* Generated on Monday, March 1, 2021 at 2:35:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementModel.framework/RemoteManagementModel
*/

#import <RemoteManagementModel/RemoteManagementModel-Structs.h>
#import <RemoteManagementModel/RMModelConfigurationBase.h>
#import <libobjc.A.dylib/RMModelRegisteredTypeProtocol.h>

@class NSString, NSNumber;

@interface RMModelAccountCalDAVDeclaration : RMModelConfigurationBase <RMModelRegisteredTypeProtocol> {

	NSString* _payloadDescription;
	NSString* _payloadHostName;
	NSNumber* _payloadPort;
	NSString* _payloadPrincipalURL;
	NSString* _payloadAuthenticationCredentialsAssetReference;

}

@property (nonatomic,copy) NSString * payloadDescription;                                          //@synthesize payloadDescription=_payloadDescription - In the implementation block
@property (nonatomic,copy) NSString * payloadHostName;                                             //@synthesize payloadHostName=_payloadHostName - In the implementation block
@property (nonatomic,copy) NSNumber * payloadPort;                                                 //@synthesize payloadPort=_payloadPort - In the implementation block
@property (nonatomic,copy) NSString * payloadPrincipalURL;                                         //@synthesize payloadPrincipalURL=_payloadPrincipalURL - In the implementation block
@property (nonatomic,copy) NSString * payloadAuthenticationCredentialsAssetReference;              //@synthesize payloadAuthenticationCredentialsAssetReference=_payloadAuthenticationCredentialsAssetReference - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)buildWithIdentifier:(id)arg1 description:(id)arg2 hostName:(id)arg3 port:(id)arg4 principalURL:(id)arg5 authenticationCredentialsAssetReference:(id)arg6 ;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 hostName:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)payloadDescription;
-(id)assetReferences;
-(void)setPayloadHostName:(NSString *)arg1 ;
-(NSString *)payloadHostName;
-(void)setPayloadPort:(NSNumber *)arg1 ;
-(NSNumber *)payloadPort;
-(void)setPayloadDescription:(NSString *)arg1 ;
-(NSString *)payloadAuthenticationCredentialsAssetReference;
-(void)setPayloadPrincipalURL:(NSString *)arg1 ;
-(void)setPayloadAuthenticationCredentialsAssetReference:(NSString *)arg1 ;
-(NSString *)payloadPrincipalURL;
-(BOOL)loadPayloadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
-(id)serializePayloadWithType:(short)arg1 ;
@end

