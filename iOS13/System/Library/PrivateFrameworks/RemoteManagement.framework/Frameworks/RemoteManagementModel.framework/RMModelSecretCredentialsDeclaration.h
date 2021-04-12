/*
* Generated on Monday, March 1, 2021 at 2:35:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementModel.framework/RemoteManagementModel
*/

#import <RemoteManagementModel/RemoteManagementModel-Structs.h>
#import <RemoteManagementModel/RMModelPayloadBase.h>

@class NSString;

@interface RMModelSecretCredentialsDeclaration : RMModelPayloadBase {

	NSString* _payloadSecret;

}

@property (nonatomic,copy) NSString * payloadSecret;              //@synthesize payloadSecret=_payloadSecret - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildWithSecret:(id)arg1 ;
+(id)buildRequiredOnlyWithSecret:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPayloadSecret:(NSString *)arg1 ;
-(NSString *)payloadSecret;
-(id)serializeWithType:(short)arg1 ;
-(BOOL)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
@end

