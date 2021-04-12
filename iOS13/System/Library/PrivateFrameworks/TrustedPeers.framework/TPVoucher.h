/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrustedPeers.framework/TrustedPeers
*/


@class NSString, NSData;

@interface TPVoucher : NSObject {

	unsigned long long _reason;
	NSString* _beneficiaryID;
	NSString* _sponsorID;
	NSData* _data;
	NSData* _sig;

}

@property (assign,nonatomic) unsigned long long reason;              //@synthesize reason=_reason - In the implementation block
@property (nonatomic,retain) NSString * beneficiaryID;               //@synthesize beneficiaryID=_beneficiaryID - In the implementation block
@property (nonatomic,retain) NSString * sponsorID;                   //@synthesize sponsorID=_sponsorID - In the implementation block
@property (nonatomic,retain) NSData * data;                          //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSData * sig;                           //@synthesize sig=_sig - In the implementation block
+(id)voucherWithReason:(unsigned long long)arg1 beneficiaryID:(id)arg2 sponsorID:(id)arg3 signingKeyPair:(id)arg4 error:(id*)arg5 ;
+(id)voucherInfoWithData:(id)arg1 sig:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(unsigned long long)reason;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(id)dictionaryRepresentation;
-(void)setReason:(unsigned long long)arg1 ;
-(NSData *)sig;
-(void)setSig:(NSData *)arg1 ;
-(id)initWithObj:(id)arg1 data:(id)arg2 sig:(id)arg3 ;
-(BOOL)checkSignatureWithKey:(id)arg1 ;
-(id)createRecoveryECPublicKey:(id)arg1 ;
-(BOOL)isEqualToVoucher:(id)arg1 ;
-(NSString *)beneficiaryID;
-(void)setBeneficiaryID:(NSString *)arg1 ;
-(NSString *)sponsorID;
-(void)setSponsorID:(NSString *)arg1 ;
@end

