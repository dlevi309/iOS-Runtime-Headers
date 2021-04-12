/*
* Generated on Thursday, January 14, 2021 at 2:25:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSData *)voucher;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setVoucher:(NSData *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasVoucher;
-(BOOL)hasVoucherSignature;
-(NSData *)voucherSignature;
-(void)setVoucherSignature:(NSData *)arg1 ;
@end

