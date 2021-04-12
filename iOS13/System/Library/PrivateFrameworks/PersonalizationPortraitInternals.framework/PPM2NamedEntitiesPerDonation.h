/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/

#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PPM2NamedEntitiesPerDonation : PBCodable <NSCopying> {

	int _algorithm;
	int _source;
	SCD_Struct_PP2 _has;

}

@property (assign,nonatomic) BOOL hasSource; 
@property (assign,nonatomic) int source;                     //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) BOOL hasAlgorithm; 
@property (assign,nonatomic) int algorithm;                  //@synthesize algorithm=_algorithm - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSource:(int)arg1 ;
-(int)source;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(int)algorithm;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasSource;
-(void)setAlgorithm:(int)arg1 ;
-(void)setHasSource:(BOOL)arg1 ;
-(id)sourceAsString:(int)arg1 ;
-(int)StringAsSource:(id)arg1 ;
-(BOOL)hasAlgorithm;
-(void)setHasAlgorithm:(BOOL)arg1 ;
-(id)algorithmAsString:(int)arg1 ;
-(int)StringAsAlgorithm:(id)arg1 ;
@end

