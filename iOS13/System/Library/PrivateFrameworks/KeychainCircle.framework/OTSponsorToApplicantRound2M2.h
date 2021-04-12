/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/KeychainCircle.framework/KeychainCircle
*/

#import <KeychainCircle/KeychainCircle-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface OTSponsorToApplicantRound2M2 : PBCodable <NSCopying> {

	NSData* _voucher;
	NSData* _voucherSignature;

}

@property (nonatomic,readonly) BOOL hasVoucher; 
@property (nonatomic,retain) NSData * voucher;                        //@synthesize voucher=_voucher - In the implementation block
@property (nonatomic,readonly) BOOL hasVoucherSignature; 
@property (nonatomic,retain) NSData * voucherSignature;               //@synthesize voucherSignature=_voucherSignature - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSData *)voucher;
-(void)setVoucher:(NSData *)arg1 ;
-(BOOL)hasVoucher;
-(BOOL)hasVoucherSignature;
-(NSData *)voucherSignature;
-(void)setVoucherSignature:(NSData *)arg1 ;
@end

