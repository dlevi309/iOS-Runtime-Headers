/*
* Generated on Monday, March 1, 2021 at 2:34:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSData;

@interface CEMCertificateIdentityCredentialsDeclaration : CEMPayloadBase {

	NSData* _payloadCertificate;

}

@property (nonatomic,copy) NSData * payloadCertificate;              //@synthesize payloadCertificate=_payloadCertificate - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildWithCertificate:(id)arg1 ;
+(id)buildRequiredOnlyWithCertificate:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayload;
-(void)setPayloadCertificate:(NSData *)arg1 ;
-(NSData *)payloadCertificate;
@end

