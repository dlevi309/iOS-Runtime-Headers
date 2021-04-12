/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface PKAccountPaymentFundingDetails : NSObject <NSSecureCoding> {

	NSData* _encryptedData;
	NSData* _publicKeyHash;

}
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)jsonDictionaryRepresentation;
-(id)jsonString;
-(id)hashComponentWithCertificatesResponse:(id)arg1 ;
-(id)jsonDictionaryRepresentationWithCertificatesResponse:(id)arg1 ;
-(id)_encryptedDataWithCertificatesResponse:(id)arg1 publicKeyHash:(id*)arg2 ;
-(id)fundingDetailsUnencryptedDictionary;
@end

