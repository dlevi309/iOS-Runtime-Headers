/*
* Generated on Monday, March 1, 2021 at 2:30:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	struct {
		unsigned read_items : 1;
		unsigned read_options : 1;
		unsigned wrote_items : 1;
		unsigned wrote_options : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * items; 
@property (nonatomic,readonly) BOOL hasOptions; 
@property (nonatomic,retain) GEOURLOptions * options; 
+(BOOL)isValid:(id)arg1 ;
+(Class)itemType;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(GEOURLOptions *)options;
-(id)initWithOptions:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setOptions:(GEOURLOptions *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSMutableArray *)items;
-(void)setItems:(NSMutableArray *)arg1 ;
-(void)addItem:(id)arg1 ;
-(unsigned long long)itemsCount;
-(id)itemAtIndex:(unsigned long long)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)initWithDirectionsOptions:(id)arg1 ;
-(void)_readItems;
-(void)_addNoFlagsItem:(id)arg1 ;
-(void)_readOptions;
-(void)clearItems;
-(BOOL)hasOptions;
@end

