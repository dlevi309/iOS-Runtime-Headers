/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/

#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PPM2TopicItemDonation : PBCodable <NSCopying> {

	int _isNew;
	int _source;
	SCD_Struct_PP2 _has;

}

@property (assign,nonatomic) BOOL hasSource; 
@property (assign,nonatomic) int source;                  //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) BOOL hasIsNew; 
@property (assign,nonatomic) int isNew;                   //@synthesize isNew=_isNew - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSource:(int)arg1 ;
-(int)source;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasSource;
-(void)setHasSource:(BOOL)arg1 ;
-(id)sourceAsString:(int)arg1 ;
-(int)StringAsSource:(id)arg1 ;
-(int)isNew;
-(void)setIsNew:(int)arg1 ;
-(void)setHasIsNew:(BOOL)arg1 ;
-(BOOL)hasIsNew;
-(id)isNewAsString:(int)arg1 ;
-(int)StringAsIsNew:(id)arg1 ;
@end

