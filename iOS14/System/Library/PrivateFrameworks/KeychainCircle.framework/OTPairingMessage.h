/*
* Generated on Thursday, January 14, 2021 at 2:25:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KeychainCircle.framework/KeychainCircle
*/

#import <KeychainCircle/KeychainCircle-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class OTSponsorToApplicantRound1M2, OTApplicantToSponsorRound2M1, OTSupportOctagonMessage, OTSupportSOSMessage, OTSponsorToApplicantRound2M2;

@interface OTPairingMessage : PBCodable <NSCopying> {

	OTSponsorToApplicantRound1M2* _epoch;
	OTApplicantToSponsorRound2M1* _prepare;
	OTSupportOctagonMessage* _supportsOctagon;
	OTSupportSOSMessage* _supportsSOS;
	OTSponsorToApplicantRound2M2* _voucher;

}

@property (nonatomic,readonly) BOOL hasEpoch; 
@property (nonatomic,retain) OTSponsorToApplicantRound1M2 * epoch;                   //@synthesize epoch=_epoch - In the implementation block
@property (nonatomic,readonly) BOOL hasPrepare; 
@property (nonatomic,retain) OTApplicantToSponsorRound2M1 * prepare;                 //@synthesize prepare=_prepare - In the implementation block
@property (nonatomic,readonly) BOOL hasVoucher; 
@property (nonatomic,retain) OTSponsorToApplicantRound2M2 * voucher;                 //@synthesize voucher=_voucher - In the implementation block
@property (nonatomic,readonly) BOOL hasSupportsOctagon; 
@property (nonatomic,retain) OTSupportOctagonMessage * supportsOctagon;              //@synthesize supportsOctagon=_supportsOctagon - In the implementation block
@property (nonatomic,readonly) BOOL hasSupportsSOS; 
@property (nonatomic,retain) OTSupportSOSMessage * supportsSOS;                      //@synthesize supportsSOS=_supportsSOS - In the implementation block
-(OTSponsorToApplicantRound2M2 *)voucher;
-(id)dictionaryRepresentation;
-(OTSponsorToApplicantRound1M2 *)epoch;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasEpoch;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setVoucher:(OTSponsorToApplicantRound2M2 *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setEpoch:(OTSponsorToApplicantRound1M2 *)arg1 ;
-(OTApplicantToSponsorRound2M1 *)prepare;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasPrepare;
-(BOOL)hasVoucher;
-(BOOL)hasSupportsOctagon;
-(BOOL)hasSupportsSOS;
-(void)setPrepare:(OTApplicantToSponsorRound2M1 *)arg1 ;
-(OTSupportOctagonMessage *)supportsOctagon;
-(void)setSupportsOctagon:(OTSupportOctagonMessage *)arg1 ;
-(OTSupportSOSMessage *)supportsSOS;
-(void)setSupportsSOS:(OTSupportSOSMessage *)arg1 ;
@end

