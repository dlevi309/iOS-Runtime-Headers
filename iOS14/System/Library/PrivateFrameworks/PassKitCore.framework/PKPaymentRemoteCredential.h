/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentCredential.h>

@class NSString, NSURL, NSArray, PKPaymentPass;

@interface PKPaymentRemoteCredential : PKPaymentCredential {

	NSString* _identifier;
	long long _status;
	NSURL* _passURL;
	NSArray* _summaryMetadata;
	NSArray* _metadata;
	NSString* _summaryMetadataDescription;
	NSString* _statusDescription;
	NSString* _ownershipTokenIdentifier;
	PKPaymentPass* _paymentPass;
	unsigned long long _rank;
	NSString* _productIdentifier;
	NSString* _serialNumber;

}

@property (nonatomic,copy) NSString * identifier;                                       //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) long long status;                                          //@synthesize status=_status - In the implementation block
@property (nonatomic,copy) NSURL * passURL;                                             //@synthesize passURL=_passURL - In the implementation block
@property (nonatomic,copy,readonly) NSArray * summaryMetadata;                          //@synthesize summaryMetadata=_summaryMetadata - In the implementation block
@property (nonatomic,copy,readonly) NSArray * metadata;                                 //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,copy,readonly) NSString * summaryMetadataDescription;              //@synthesize summaryMetadataDescription=_summaryMetadataDescription - In the implementation block
@property (nonatomic,copy,readonly) NSString * statusDescription;                       //@synthesize statusDescription=_statusDescription - In the implementation block
@property (nonatomic,copy,readonly) NSString * ownershipTokenIdentifier;                //@synthesize ownershipTokenIdentifier=_ownershipTokenIdentifier - In the implementation block
@property (nonatomic,retain) PKPaymentPass * paymentPass;                               //@synthesize paymentPass=_paymentPass - In the implementation block
@property (assign,nonatomic) unsigned long long rank;                                   //@synthesize rank=_rank - In the implementation block
@property (nonatomic,readonly) NSString * productIdentifier;                            //@synthesize productIdentifier=_productIdentifier - In the implementation block
@property (nonatomic,copy) NSString * serialNumber;                                     //@synthesize serialNumber=_serialNumber - In the implementation block
-(void)setRank:(unsigned long long)arg1 ;
-(void)updateWithDictionary:(id)arg1 ;
-(NSString *)serialNumber;
-(id)init;
-(BOOL)_isEqualToCredential:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 status:(long long)arg2 credentialType:(long long)arg3 passURL:(id)arg4 ;
-(NSArray *)summaryMetadata;
-(NSString *)summaryMetadataDescription;
-(NSString *)ownershipTokenIdentifier;
-(NSURL *)passURL;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)productIdentifier;
-(id)description;
-(unsigned long long)hash;
-(unsigned long long)rank;
-(void)setPassURL:(NSURL *)arg1 ;
-(PKPaymentPass *)paymentPass;
-(void)setStatus:(long long)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setPaymentPass:(PKPaymentPass *)arg1 ;
-(NSString *)identifier;
-(NSString *)statusDescription;
-(void)setSerialNumber:(NSString *)arg1 ;
-(NSArray *)metadata;
-(BOOL)isEqual:(id)arg1 ;
-(long long)status;
@end

