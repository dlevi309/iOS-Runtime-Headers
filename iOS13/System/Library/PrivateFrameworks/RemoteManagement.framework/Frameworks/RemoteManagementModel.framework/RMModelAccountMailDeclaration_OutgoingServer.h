/*
* Generated on Monday, March 1, 2021 at 2:35:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementModel.framework/RemoteManagementModel
*/

#import <RemoteManagementModel/RemoteManagementModel-Structs.h>
#import <RemoteManagementModel/RMModelPayloadBase.h>

@class NSString, NSNumber;

@interface RMModelAccountMailDeclaration_OutgoingServer : RMModelPayloadBase {

	NSString* _payloadHostName;
	NSNumber* _payloadPort;
	NSString* _payloadAuthenticationMethod;
	NSString* _payloadAuthenticationCredentialsAssetReference;

}

@property (nonatomic,copy) NSString * payloadHostName;                                             //@synthesize payloadHostName=_payloadHostName - In the implementation block
@property (nonatomic,copy) NSNumber * payloadPort;                                                 //@synthesize payloadPort=_payloadPort - In the implementation block
@property (nonatomic,copy) NSString * payloadAuthenticationMethod;                                 //@synthesize payloadAuthenticationMethod=_payloadAuthenticationMethod - In the implementation block
@property (nonatomic,copy) NSString * payloadAuthenticationCredentialsAssetReference;              //@synthesize payloadAuthenticationCredentialsAssetReference=_payloadAuthenticationCredentialsAssetReference - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildWithHostName:(id)arg1 port:(id)arg2 authenticationMethod:(id)arg3 authenticationCredentialsAssetReference:(id)arg4 ;
+(id)buildRequiredOnlyWithHostName:(id)arg1 authenticationMethod:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPayloadHostName:(NSString *)arg1 ;
-(NSString *)payloadHostName;
-(void)setPayloadPort:(NSNumber *)arg1 ;
-(NSNumber *)payloadPort;
-(void)setPayloadAuthenticationMethod:(NSString *)arg1 ;
-(NSString *)payloadAuthenticationMethod;
-(NSString *)payloadAuthenticationCredentialsAssetReference;
-(void)setPayloadAuthenticationCredentialsAssetReference:(NSString *)arg1 ;
-(id)serializeWithType:(short)arg1 ;
-(BOOL)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
@end

