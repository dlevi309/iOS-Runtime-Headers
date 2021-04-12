/*
* Generated on Thursday, January 14, 2021 at 2:21:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSString;

@interface GEOPDResolvedItem : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSString* _extractedTerm;
	int _resolvedItemType;
	unsigned _resultIndex;
	SCD_Struct_GE123 _flags;

}

@property (nonatomic,readonly) BOOL hasExtractedTerm; 
@property (nonatomic,retain) NSString * extractedTerm; 
@property (assign,nonatomic) BOOL hasResolvedItemType; 
@property (assign,nonatomic) int resolvedItemType; 
@property (assign,nonatomic) BOOL hasResultIndex; 
@property (assign,nonatomic) unsigned resultIndex; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(unsigned)resultIndex;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setExtractedTerm:(NSString *)arg1 ;
-(void)setHasResultIndex:(BOOL)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setResultIndex:(unsigned)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)resolvedItemType;
-(BOOL)hasResolvedItemType;
-(void)setResolvedItemType:(int)arg1 ;
-(BOOL)hasExtractedTerm;
-(NSString *)extractedTerm;
-(BOOL)hasResultIndex;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasResolvedItemType:(BOOL)arg1 ;
-(id)resolvedItemTypeAsString:(int)arg1 ;
-(int)StringAsResolvedItemType:(id)arg1 ;
@end

