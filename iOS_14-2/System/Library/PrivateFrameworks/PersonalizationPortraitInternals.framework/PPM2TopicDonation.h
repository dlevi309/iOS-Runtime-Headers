/*
* Generated on Thursday, January 14, 2021 at 2:25:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/

#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PPM2TopicDonation : PBCodable <NSCopying> {

	NSString* _activeTreatments;
	int _donationSource;
	SCD_Struct_PP1 _has;

}

@property (assign,nonatomic) BOOL hasDonationSource; 
@property (assign,nonatomic) int donationSource;                       //@synthesize donationSource=_donationSource - In the implementation block
@property (nonatomic,readonly) BOOL hasActiveTreatments; 
@property (nonatomic,retain) NSString * activeTreatments;              //@synthesize activeTreatments=_activeTreatments - In the implementation block
-(id)dictionaryRepresentation;
-(NSString *)activeTreatments;
-(void)setActiveTreatments:(NSString *)arg1 ;
-(int)StringAsDonationSource:(id)arg1 ;
-(int)donationSource;
-(id)donationSourceAsString:(int)arg1 ;
-(void)setDonationSource:(int)arg1 ;
-(BOOL)hasActiveTreatments;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasDonationSource:(BOOL)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)hasDonationSource;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

