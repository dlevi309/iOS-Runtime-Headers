/*
* Generated on Thursday, January 14, 2021 at 2:20:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray, NSString;

@interface GEOPDVenueItemList : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _items;
	NSString* _title;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_items : 1;
		unsigned read_title : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSMutableArray * items; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)itemType;
+(BOOL)isValid:(id)arg1 ;
-(void)addItem:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(id)itemAtIndex:(unsigned long long)arg1 ;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)setItems:(NSMutableArray *)arg1 ;
-(id)init;
-(void)clearItems;
-(id)jsonRepresentation;
-(BOOL)hasTitle;
-(void)setTitle:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
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
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
@end

