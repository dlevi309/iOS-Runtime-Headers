/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/

#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PPM2ObjectsDeleted : PBCodable <NSCopying> {

	int _domain;
	int _donationSource;
	BOOL _error;
	SCD_Struct_PP4 _has;

}

@property (assign,nonatomic) BOOL hasDomain; 
@property (assign,nonatomic) int domain;                          //@synthesize domain=_domain - In the implementation block
@property (assign,nonatomic) BOOL hasError; 
@property (assign,nonatomic) BOOL error;                          //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) BOOL hasDonationSource; 
@property (assign,nonatomic) int donationSource;                  //@synthesize donationSource=_donationSource - In the implementation block
+(id)options;
-(id)dictionaryRepresentation;
-(id)domainAsString:(int)arg1 ;
-(int)StringAsDonationSource:(id)arg1 ;
-(int)donationSource;
-(id)donationSourceAsString:(int)arg1 ;
-(void)setDonationSource:(int)arg1 ;
-(void)setHasError:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setDomain:(int)arg1 ;
-(void)setError:(BOOL)arg1 ;
-(int)domain;
-(BOOL)error;
-(void)setHasDonationSource:(BOOL)arg1 ;
-(id)description;
-(BOOL)hasDomain;
-(unsigned long long)hash;
-(BOOL)hasDonationSource;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasError;
-(void)writeTo:(id)arg1 ;
-(void)setHasDomain:(BOOL)arg1 ;
-(int)StringAsDomain:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

