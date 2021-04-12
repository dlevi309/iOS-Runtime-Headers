/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface PKAccountPaymentFundingDetails : NSObject <NSSecureCoding> {

	NSData* _encryptedData;
	NSData* _publicKeyHash;

}
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)jsonString;
-(id)hashComponentWithCertificatesResponse:(id)arg1 ;
-(id)jsonDictionaryRepresentationWithCertificatesResponse:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)jsonDictionaryRepresentation;
-(id)_encryptedDataWithCertificatesResponse:(id)arg1 publicKeyHash:(id*)arg2 ;
-(id)fundingDetailsUnencryptedDictionary;
-(BOOL)isEqual:(id)arg1 ;
@end

