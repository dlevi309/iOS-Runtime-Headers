/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/

#import <ManagedConfiguration/ManagedConfiguration-Structs.h>
#import <ManagedConfiguration/MCConfigurationProfile.h>

@interface MCCertificateWrapperProfile : MCConfigurationProfile
+(id)_identifierHashFromData:(id)arg1 ;
+(id)_basicWrapperProfileDictForCertificateName:(id)arg1 fileName:(id)arg2 identifier:(id)arg3 ;
+(id)_wrapperPayloadDictWithCertData:(id)arg1 fileName:(id)arg2 name:(id)arg3 identifier:(id)arg4 type:(id)arg5 ;
+(id)_wrapperWAPIPayloadDictWithPEMData:(id)arg1 fileName:(id)arg2 name:(id)arg3 identifier:(id)arg4 ;
+(id)_wrapperProfileForWAPICertificate:(SecCertificateRef)arg1 fileName:(id)arg2 PEMData:(id)arg3 ;
+(id)_wrapperProfileDictForCertificate:(SecCertificateRef)arg1 fileName:(id)arg2 certData:(id)arg3 type:(id)arg4 ;
+(id)wrapperProfileDictionaryWithCertificateData:(id)arg1 fileName:(id)arg2 outSignerCerts:(id*)arg3 ;
-(id)stubDictionary;
-(id)initWithDictionary:(id)arg1 signerCerts:(id)arg2 allowEmptyPayload:(BOOL)arg3 outError:(id*)arg4 ;
-(id)earliestCertificateExpiryDate;
-(BOOL)isSigned;
-(id)_certificatePayload;
-(int)trustLevel;
@end

