/*
* Generated on Thursday, January 14, 2021 at 2:20:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOPDAutocompleteResultSortPriorityMapping : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	int _resultSubtype;
	int _resultType;
	int _sortPriority;
	SCD_Struct_GE37 _flags;

}

@property (assign,nonatomic) BOOL hasSortPriority; 
@property (assign,nonatomic) int sortPriority; 
@property (assign,nonatomic) BOOL hasResultType; 
@property (assign,nonatomic) int resultType; 
@property (assign,nonatomic) BOOL hasResultSubtype; 
@property (assign,nonatomic) int resultSubtype; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setResultType:(int)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(int)resultType;
-(void)setHasResultType:(BOOL)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(int)sortPriority;
-(void)setSortPriority:(int)arg1 ;
-(void)setResultSubtype:(int)arg1 ;
-(void)setHasSortPriority:(BOOL)arg1 ;
-(BOOL)hasSortPriority;
-(int)resultSubtype;
-(void)setHasResultSubtype:(BOOL)arg1 ;
-(BOOL)hasResultSubtype;
-(id)resultSubtypeAsString:(int)arg1 ;
-(int)StringAsResultSubtype:(id)arg1 ;
-(int)StringAsResultType:(id)arg1 ;
-(id)resultTypeAsString:(int)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasResultType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

