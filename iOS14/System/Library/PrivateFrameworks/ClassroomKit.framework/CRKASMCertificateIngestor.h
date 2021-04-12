/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/


@class CRKASMRosterProviderConfiguration;

@interface CRKASMCertificateIngestor : NSObject {

	CRKASMRosterProviderConfiguration* _configuration;

}

@property (nonatomic,readonly) CRKASMRosterProviderConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
-(id)initWithConfiguration:(id)arg1 ;
-(CRKASMRosterProviderConfiguration *)configuration;
-(BOOL)areCertificatesValid:(id)arg1 forUserIdentifier:(id)arg2 error:(id*)arg3 ;
-(BOOL)storeCertificates:(id)arg1 userIdentifier:(id)arg2 error:(id*)arg3 ;
-(BOOL)isCertificateValid:(id)arg1 forUserIdentifier:(id)arg2 error:(id*)arg3 ;
-(BOOL)ingestCertificates:(id)arg1 forTrustedUserIdentifier:(id)arg2 error:(id*)arg3 ;
@end

