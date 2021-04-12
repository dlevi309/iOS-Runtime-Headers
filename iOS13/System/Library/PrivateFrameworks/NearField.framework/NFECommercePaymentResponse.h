/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (nonatomic,readonly) NSString * transactionIdentifier;                //@synthesize transactionIdentifier=_transactionIdentifier - In the implementation block
@property (nonatomic,readonly) NSData * transactionData;                        //@synthesize transactionData=_transactionData - In the implementation block
@property (nonatomic,readonly) NSDictionary * certs;                            //@synthesize certs=_certs - In the implementation block
@property (setter=EPcerts,nonatomic,readonly) NSArray * SEPcerts;               //@synthesize SEPcerts=_SEPcerts - In the implementation block
@property (nonatomic,readonly) NSData * confirmationBlobHash;                   //@synthesize confirmationBlobHash=_confirmationBlobHash - In the implementation block
@property (nonatomic,readonly) NSData * confirmationBlobSignature;              //@synthesize confirmationBlobSignature=_confirmationBlobSignature - In the implementation block
@property (nonatomic,readonly) long long confirmationBlobVersion;               //@synthesize confirmationBlobVersion=_confirmationBlobVersion - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSDictionary *)certs;
-(NSString *)transactionIdentifier;
-(NSData *)transactionData;
-(NSData *)confirmationBlobSignature;
-(void)setCerts:(NSDictionary *)arg1 ;
-(void)setConfirmationBlobHash:(id)arg1 withSignature:(id)arg2 version:(unsigned long long)arg3 ;
-(void)setSEPCerts:(id)arg1 ;
-(NSArray *)SEPcerts;
-(NSData *)confirmationBlobHash;
-(long long)confirmationBlobVersion;
@end

