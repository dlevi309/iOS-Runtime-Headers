/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKAccountWebServiceResponse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface PKApplePayTrustHashResponse : PKAccountWebServiceResponse <NSSecureCoding> {

	NSString* _referenceIdentifier;
	NSData* _nonce;

}

@property (nonatomic,copy,readonly) NSString * referenceIdentifier;              //@synthesize referenceIdentifier=_referenceIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSData * nonce;                              //@synthesize nonce=_nonce - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(NSData *)nonce;
-(NSString *)referenceIdentifier;
@end

