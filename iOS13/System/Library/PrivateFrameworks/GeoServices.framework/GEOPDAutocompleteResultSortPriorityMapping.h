/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_GE85 _flags;

}

@property (assign,nonatomic) BOOL hasSortPriority; 
@property (assign,nonatomic) int sortPriority; 
@property (assign,nonatomic) BOOL hasResultType; 
@property (assign,nonatomic) int resultType; 
@property (assign,nonatomic) BOOL hasResultSubtype; 
@property (assign,nonatomic) int resultSubtype; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)resultType;
-(void)writeTo:(id)arg1 ;
-(void)setResultType:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setHasResultType:(BOOL)arg1 ;
-(BOOL)hasResultType;
-(id)resultTypeAsString:(int)arg1 ;
-(int)StringAsResultType:(id)arg1 ;
-(BOOL)hasSortPriority;
-(int)sortPriority;
-(void)setSortPriority:(int)arg1 ;
-(void)setHasSortPriority:(BOOL)arg1 ;
-(int)resultSubtype;
-(void)setResultSubtype:(int)arg1 ;
-(void)setHasResultSubtype:(BOOL)arg1 ;
-(BOOL)hasResultSubtype;
-(id)resultSubtypeAsString:(int)arg1 ;
-(int)StringAsResultSubtype:(id)arg1 ;
@end

