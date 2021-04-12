/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_unknownFields : 1;
		unsigned wrote_displayConf : 1;
		unsigned wrote_textItems : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * textItems; 
@property (nonatomic,readonly) BOOL hasDisplayConf; 
@property (nonatomic,retain) GEOPDTextItemDisplayConfig * displayConf; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)textItemType;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readTextItems;
-(void)_addNoFlagsTextItem:(id)arg1 ;
-(void)_readDisplayConf;
-(GEOPDTextItemDisplayConfig *)displayConf;
-(unsigned long long)textItemsCount;
-(void)clearTextItems;
-(id)textItemAtIndex:(unsigned long long)arg1 ;
-(void)addTextItem:(id)arg1 ;
-(void)setDisplayConf:(GEOPDTextItemDisplayConfig *)arg1 ;
-(NSMutableArray *)textItems;
-(void)setTextItems:(NSMutableArray *)arg1 ;
-(BOOL)hasDisplayConf;
@end

