/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData, NSDictionary, NSArray;

@interface NFECommercePaymentResponse : NSObject <NSSecureCoding> {

	NSString* _transactionIdentifier;
	NSData* _transactionData;
	NSDictionary* _certs;
	NSArray* _SEPcerts;
	NSData* _confirmationBlobHash;
	NSData* _confirmationBlobSignature;
	long long _confirmationBlobVersion;

}

@property (nonatomic,retain,readonly) NSString * transactionIdentifier;                //@synthesize transactionIdentifier=_transactionIdentifier - In the implementation block
@property (nonatomic,retain,readonly) NSData * transactionData;                        //@synthesize transactionData=_transactionData - In the implementation block
@property (nonatomic,retain,readonly) NSDictionary * certs;                            //@synthesize certs=_certs - In the implementation block
@property (setter=EPcerts,nonatomic,retain,readonly) NSArray * SEPcerts;               //@synthesize SEPcerts=_SEPcerts - In the implementation block
@property (nonatomic,retain,readonly) NSData * confirmationBlobHash;                   //@synthesize confirmationBlobHash=_confirmationBlobHash - In the implementation block
@property (nonatomic,retain,readonly) NSData * confirmationBlobSignature;              //@synthesize confirmationBlobSignature=_confirmationBlobSignature - In the implementation block
@property (nonatomic,readonly) long long confirmationBlobVersion;                      //@synthesize confirmationBlobVersion=_confirmationBlobVersion - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDictionary *)certs;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)confirmationBlobSignature;
-(NSString *)transactionIdentifier;
-(NSArray *)SEPcerts;
-(NSData *)transactionData;
-(void)setCerts:(NSDictionary *)arg1 ;
-(void)setConfirmationBlobHash:(id)arg1 withSignature:(id)arg2 version:(unsigned long long)arg3 ;
-(void)setSEPCerts:(id)arg1 ;
-(NSData *)confirmationBlobHash;
-(long long)confirmationBlobVersion;
@end

