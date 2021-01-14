/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementModel.framework/RemoteManagementModel
*/

#import <RemoteManagementModel/RemoteManagementModel-Structs.h>
#import <RemoteManagementModel/RMModelConfigurationBase.h>
#import <libobjc.A.dylib/RMModelRegisteredTypeProtocol.h>

@class NSString, NSNumber, NSArray;

@interface RMModelAccountLDAPDeclaration : RMModelConfigurationBase <RMModelRegisteredTypeProtocol> {

	NSString* _payloadVisibleName;
	NSString* _payloadHostName;
	NSNumber* _payloadPort;
	NSString* _payloadAuthenticationCredentialsAssetReference;
	NSArray* _payloadSearchSettings;

}

@property (nonatomic,copy) NSString * payloadVisibleName;                                          //@synthesize payloadVisibleName=_payloadVisibleName - In the implementation block
@property (nonatomic,copy) NSString * payloadHostName;                                             //@synthesize payloadHostName=_payloadHostName - In the implementation block
@property (nonatomic,copy) NSNumber * payloadPort;                                                 //@synthesize payloadPort=_payloadPort - In the implementation block
@property (nonatomic,copy) NSString * payloadAuthenticationCredentialsAssetReference;              //@synthesize payloadAuthenticationCredentialsAssetReference=_payloadAuthenticationCredentialsAssetReference - In the implementation block
@property (nonatomic,copy) NSArray * payloadSearchSettings;                                        //@synthesize payloadSearchSettings=_payloadSearchSettings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 hostName:(id)arg2 ;
+(id)buildWithIdentifier:(id)arg1 visibleName:(id)arg2 hostName:(id)arg3 port:(id)arg4 authenticationCredentialsAssetReference:(id)arg5 searchSettings:(id)arg6 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)assetReferences;
-(void)setPayloadHostName:(NSString *)arg1 ;
-(NSString *)payloadHostName;
-(void)setPayloadPort:(NSNumber *)arg1 ;
-(NSNumber *)payloadPort;
-(NSString *)payloadAuthenticationCredentialsAssetReference;
-(void)setPayloadVisibleName:(NSString *)arg1 ;
-(void)setPayloadAuthenticationCredentialsAssetReference:(NSString *)arg1 ;
-(NSString *)payloadVisibleName;
-(BOOL)loadPayloadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
-(id)serializePayloadWithType:(short)arg1 ;
-(void)setPayloadSearchSettings:(NSArray *)arg1 ;
-(NSArray *)payloadSearchSettings;
@end

