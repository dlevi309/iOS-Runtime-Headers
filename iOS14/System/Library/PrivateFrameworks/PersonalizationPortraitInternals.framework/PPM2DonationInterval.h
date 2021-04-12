/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/

#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PPM2DonationInterval : PBCodable <NSCopying> {

	int _domain;
	unsigned _interval;
	int _source;
	BOOL _isFirstDonation;
	SCD_Struct_PP3 _has;

}

@property (assign,nonatomic) BOOL hasDomain; 
@property (assign,nonatomic) int domain;                           //@synthesize domain=_domain - In the implementation block
@property (assign,nonatomic) BOOL hasSource; 
@property (assign,nonatomic) int source;                           //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) BOOL hasIsFirstDonation; 
@property (assign,nonatomic) BOOL isFirstDonation;                 //@synthesize isFirstDonation=_isFirstDonation - In the implementation block
@property (assign,nonatomic) BOOL hasInterval; 
@property (assign,nonatomic) unsigned interval;                    //@synthesize interval=_interval - In the implementation block
-(id)dictionaryRepresentation;
-(int)StringAsSource:(id)arg1 ;
-(id)domainAsString:(int)arg1 ;
-(void)setHasSource:(BOOL)arg1 ;
-(id)sourceAsString:(int)arg1 ;
-(BOOL)hasSource;
-(void)setInterval:(unsigned)arg1 ;
-(unsigned)interval;
-(void)mergeFrom:(id)arg1 ;
-(void)setDomain:(int)arg1 ;
-(int)domain;
-(void)setSource:(int)arg1 ;
-(id)description;
-(BOOL)hasDomain;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasInterval;
-(void)setHasDomain:(BOOL)arg1 ;
-(void)setHasInterval:(BOOL)arg1 ;
-(int)StringAsDomain:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(int)source;
-(void)setIsFirstDonation:(BOOL)arg1 ;
-(void)setHasIsFirstDonation:(BOOL)arg1 ;
-(BOOL)hasIsFirstDonation;
-(BOOL)isFirstDonation;
@end

