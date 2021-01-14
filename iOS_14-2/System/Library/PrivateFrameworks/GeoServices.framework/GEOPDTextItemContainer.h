/*
* Generated on Thursday, January 14, 2021 at 2:21:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOPDTextItemDisplayConfig, NSMutableArray;

@interface GEOPDTextItemContainer : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOPDTextItemDisplayConfig* _displayConf;
	NSMutableArray* _textItems;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_displayConf : 1;
		unsigned read_textItems : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * textItems; 
@property (nonatomic,readonly) BOOL hasDisplayConf; 
@property (nonatomic,retain) GEOPDTextItemDisplayConfig * displayConf; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)textItemType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(GEOPDTextItemDisplayConfig *)displayConf;
-(void)setDisplayConf:(GEOPDTextItemDisplayConfig *)arg1 ;
-(id)description;
-(unsigned long long)textItemsCount;
-(NSMutableArray *)textItems;
-(void)clearTextItems;
-(void)addTextItem:(id)arg1 ;
-(id)textItemAtIndex:(unsigned long long)arg1 ;
-(void)setTextItems:(NSMutableArray *)arg1 ;
-(BOOL)hasDisplayConf;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

