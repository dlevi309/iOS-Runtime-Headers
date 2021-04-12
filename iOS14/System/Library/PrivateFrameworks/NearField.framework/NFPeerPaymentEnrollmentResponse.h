/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSDictionary;

@interface NFPeerPaymentEnrollmentResponse : NSObject <NSSecureCoding> {

	NSData* _prePeerPaymentCertificate;
	NSDictionary* _certificate;

}

@property (nonatomic,retain,readonly) NSData * prePeerPaymentCertificate;              //@synthesize prePeerPaymentCertificate=_prePeerPaymentCertificate - In the implementation block
@property (nonatomic,retain,readonly) NSDictionary * certificate;                      //@synthesize certificate=_certificate - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSDictionary *)certificate;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)prePeerPaymentCertificate;
@end

