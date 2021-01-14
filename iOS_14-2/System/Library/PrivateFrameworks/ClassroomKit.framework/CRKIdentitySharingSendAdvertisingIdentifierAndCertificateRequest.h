/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <Catalyst/CATTaskRequest.h>

@class NSSet, NSUUID, NSData;

@interface CRKIdentitySharingSendAdvertisingIdentifierAndCertificateRequest : CATTaskRequest {

	NSSet* _recipients;
	NSUUID* _advertisingIdentifier;
	NSData* _activeCertificateData;
	NSData* _stagedCertificateData;

}

@property (nonatomic,retain) NSSet * recipients;                          //@synthesize recipients=_recipients - In the implementation block
@property (nonatomic,retain) NSUUID * advertisingIdentifier;              //@synthesize advertisingIdentifier=_advertisingIdentifier - In the implementation block
@property (nonatomic,retain) NSData * activeCertificateData;              //@synthesize activeCertificateData=_activeCertificateData - In the implementation block
@property (nonatomic,retain) NSData * stagedCertificateData;              //@synthesize stagedCertificateData=_stagedCertificateData - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSSet *)recipients;
-(void)setRecipients:(NSSet *)arg1 ;
-(NSUUID *)advertisingIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setAdvertisingIdentifier:(NSUUID *)arg1 ;
-(NSData *)activeCertificateData;
-(NSData *)stagedCertificateData;
-(void)setActiveCertificateData:(NSData *)arg1 ;
-(void)setStagedCertificateData:(NSData *)arg1 ;
@end

