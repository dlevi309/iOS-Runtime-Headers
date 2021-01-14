/*
* Generated on Thursday, January 14, 2021 at 2:20:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString, NSMutableArray;

@interface GEOPDAutocompleteEntryHighlightLine : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _line;
	NSMutableArray* _spans;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_line : 1;
		unsigned read_spans : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasLine; 
@property (nonatomic,retain) NSString * line; 
@property (nonatomic,retain) NSMutableArray * spans; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)spanType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(NSMutableArray *)spans;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)setLine:(NSString *)arg1 ;
-(BOOL)hasLine;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(void)addSpan:(id)arg1 ;
-(unsigned long long)hash;
-(void)setSpans:(NSMutableArray *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)spansCount;
-(void)clearSpans;
-(id)initWithJSON:(id)arg1 ;
-(NSString *)line;
-(BOOL)isEqual:(id)arg1 ;
-(id)spanAtIndex:(unsigned long long)arg1 ;
@end

