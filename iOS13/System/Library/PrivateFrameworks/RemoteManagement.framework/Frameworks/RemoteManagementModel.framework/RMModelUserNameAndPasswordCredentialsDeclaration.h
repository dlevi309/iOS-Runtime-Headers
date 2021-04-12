/*
* Generated on Monday, March 1, 2021 at 2:35:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementModel.framework/RemoteManagementModel
*/

#import <RemoteManagementModel/RemoteManagementModel-Structs.h>
#import <RemoteManagementModel/RMModelPayloadBase.h>

@class NSString;

@interface RMModelUserNameAndPasswordCredentialsDeclaration : RMModelPayloadBase {

	NSString* _payloadUserName;
	NSString* _payloadPassword;

}

@property (nonatomic,copy) NSString * payloadUserName;              //@synthesize payloadUserName=_payloadUserName - In the implementation block
@property (nonatomic,copy) NSString * payloadPassword;              //@synthesize payloadPassword=_payloadPassword - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildWithUserName:(id)arg1 password:(id)arg2 ;
+(id)buildRequiredOnlyWithUserName:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPayloadUserName:(NSString *)arg1 ;
-(NSString *)payloadUserName;
-(void)setPayloadPassword:(NSString *)arg1 ;
-(NSString *)payloadPassword;
-(id)serializeWithType:(short)arg1 ;
-(BOOL)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
@end

