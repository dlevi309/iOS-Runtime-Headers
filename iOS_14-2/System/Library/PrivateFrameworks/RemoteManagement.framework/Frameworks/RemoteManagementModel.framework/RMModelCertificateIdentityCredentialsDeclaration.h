/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementModel.framework/RemoteManagementModel
*/

#import <RemoteManagementModel/RemoteManagementModel-Structs.h>
#import <RemoteManagementModel/RMModelPayloadBase.h>

@class NSData;

@interface RMModelCertificateIdentityCredentialsDeclaration : RMModelPayloadBase {

	NSData* _payloadCertificate;

}

@property (nonatomic,copy) NSData * payloadCertificate;              //@synthesize payloadCertificate=_payloadCertificate - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildWithCertificate:(id)arg1 ;
+(id)buildRequiredOnlyWithCertificate:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPayloadCertificate:(NSData *)arg1 ;
-(NSData *)payloadCertificate;
-(id)serializeWithType:(short)arg1 ;
-(BOOL)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
@end

