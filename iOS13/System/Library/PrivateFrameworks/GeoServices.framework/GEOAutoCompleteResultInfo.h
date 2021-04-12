/*
* Generated on Monday, March 1, 2021 at 2:30:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOAutoCompleteResultInfo : PBCodable <NSCopying> {

	int _suggestionsAcType;
	SCD_Struct_GE99 _flags;

}

@property (assign,nonatomic) BOOL hasSuggestionsAcType; 
@property (assign,nonatomic) int suggestionsAcType; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(int)suggestionsAcType;
-(void)setSuggestionsAcType:(int)arg1 ;
-(void)setHasSuggestionsAcType:(BOOL)arg1 ;
-(BOOL)hasSuggestionsAcType;
-(id)suggestionsAcTypeAsString:(int)arg1 ;
-(int)StringAsSuggestionsAcType:(id)arg1 ;
@end

