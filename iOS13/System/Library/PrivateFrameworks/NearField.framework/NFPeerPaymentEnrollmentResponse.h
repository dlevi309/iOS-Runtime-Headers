/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSDictionary;

@interface NFPeerPaymentEnrollmentResponse : NSObject <NSSecureCoding> {

	NSData* _prePeerPaymentCertificate;
	NSDictionary* _certificate;

}

@property (nonatomic,readonly) NSData * prePeerPaymentCertificate;              //@synthesize prePeerPaymentCertificate=_prePeerPaymentCertificate - In the implementation block
@property (nonatomic,readonly) NSDictionary * certificate;                      //@synthesize certificate=_certificate - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSDictionary *)certificate;
-(NSData *)prePeerPaymentCertificate;
@end

