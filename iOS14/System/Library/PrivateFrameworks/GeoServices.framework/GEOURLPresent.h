/*
* Generated on Thursday, January 14, 2021 at 2:20:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSMutableArray, GEOURLOptions;

@interface GEOURLPresent : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSMutableArray* _items;
	GEOURLOptions* _options;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	SCD_Struct_GE37 _flags;

}

@property (nonatomic,retain) NSMutableArray * items; 
@property (nonatomic,readonly) BOOL hasOptions; 
@property (nonatomic,retain) GEOURLOptions * options; 
+(Class)itemType;
+(BOOL)isValid:(id)arg1 ;
-(void)addItem:(id)arg1 ;
-(id)dictionaryRepresentation;
-(id)initWithOptions:(id)arg1 ;
-(id)itemAtIndex:(unsigned long long)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)setItems:(NSMutableArray *)arg1 ;
-(id)initWithDirectionsOptions:(id)arg1 ;
-(id)init;
-(void)clearItems;
-(id)jsonRepresentation;
-(GEOURLOptions *)options;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)setOptions:(GEOURLOptions *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSMutableArray *)items;
-(id)description;
-(unsigned long long)hash;
-(unsigned long long)itemsCount;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasOptions;
@end

