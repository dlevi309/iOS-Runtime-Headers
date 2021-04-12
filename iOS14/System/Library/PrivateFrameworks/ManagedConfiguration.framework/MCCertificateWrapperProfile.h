/*
* Generated on Thursday, January 14, 2021 at 2:21:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/

#import <ManagedConfiguration/ManagedConfiguration-Structs.h>
#import <ManagedConfiguration/MCConfigurationProfile.h>

@interface MCCertificateWrapperProfile : MCConfigurationProfile
+(id)_basicWrapperProfileDictForCertificateName:(id)arg1 fileName:(id)arg2 identifier:(id)arg3 ;
+(id)wrapperProfileDictionaryWithCertificateData:(id)arg1 fileName:(id)arg2 outSignerCerts:(id*)arg3 ;
+(id)_wrapperProfileForWAPICertificate:(SecCertificateRef)arg1 fileName:(id)arg2 PEMData:(id)arg3 ;
+(id)_wrapperWAPIPayloadDictWithPEMData:(id)arg1 fileName:(id)arg2 name:(id)arg3 identifier:(id)arg4 ;
+(id)_wrapperProfileDictForCertificate:(SecCertificateRef)arg1 fileName:(id)arg2 certData:(id)arg3 type:(id)arg4 ;
+(id)_wrapperPayloadDictWithCertData:(id)arg1 fileName:(id)arg2 name:(id)arg3 identifier:(id)arg4 type:(id)arg5 ;
+(id)_identifierHashFromData:(id)arg1 ;
-(BOOL)isSigned;
-(id)initWithDictionary:(id)arg1 signerCerts:(id)arg2 allowEmptyPayload:(BOOL)arg3 outError:(id*)arg4 ;
-(id)earliestCertificateExpiryDate;
-(int)trustLevel;
-(id)_certificatePayload;
-(id)stubDictionary;
@end

