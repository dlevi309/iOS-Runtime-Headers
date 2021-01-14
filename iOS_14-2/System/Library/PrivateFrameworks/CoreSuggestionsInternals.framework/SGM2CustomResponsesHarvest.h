/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface SGM2CustomResponsesHarvest : PBCodable <NSCopying> {

	unsigned _customResponsesAfterPruning;
	SCD_Struct_SG2 _has;

}

@property (assign,nonatomic) BOOL hasCustomResponsesAfterPruning; 
@property (assign,nonatomic) unsigned customResponsesAfterPruning;              //@synthesize customResponsesAfterPruning=_customResponsesAfterPruning - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setCustomResponsesAfterPruning:(unsigned)arg1 ;
-(void)setHasCustomResponsesAfterPruning:(BOOL)arg1 ;
-(BOOL)hasCustomResponsesAfterPruning;
-(unsigned)customResponsesAfterPruning;
@end

