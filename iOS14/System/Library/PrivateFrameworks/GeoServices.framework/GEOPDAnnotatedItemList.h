/*
* Generated on Thursday, January 14, 2021 at 2:20:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOPDPictureItemContainer, GEOPDTextItemContainer, NSString;

@interface GEOPDAnnotatedItemList : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOPDPictureItemContainer* _picItemContainer;
	GEOPDTextItemContainer* _textItemContainer;
	NSString* _title;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _annotatedItemStyle;
	struct {
		unsigned has_annotatedItemStyle : 1;
		unsigned read_unknownFields : 1;
		unsigned read_picItemContainer : 1;
		unsigned read_textItemContainer : 1;
		unsigned read_title : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,readonly) BOOL hasPicItemContainer; 
@property (nonatomic,retain) GEOPDPictureItemContainer * picItemContainer; 
@property (nonatomic,readonly) BOOL hasTextItemContainer; 
@property (nonatomic,retain) GEOPDTextItemContainer * textItemContainer; 
@property (assign,nonatomic) BOOL hasAnnotatedItemStyle; 
@property (assign,nonatomic) int annotatedItemStyle; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(id)annotatedItemListForPlaceData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(BOOL)hasTitle;
-(GEOPDTextItemContainer *)textItemContainer;
-(int)annotatedItemStyle;
-(GEOPDPictureItemContainer *)picItemContainer;
-(void)setPicItemContainer:(GEOPDPictureItemContainer *)arg1 ;
-(void)setTextItemContainer:(GEOPDTextItemContainer *)arg1 ;
-(void)setAnnotatedItemStyle:(int)arg1 ;
-(BOOL)hasPicItemContainer;
-(BOOL)hasTextItemContainer;
-(void)setHasAnnotatedItemStyle:(BOOL)arg1 ;
-(BOOL)hasAnnotatedItemStyle;
-(id)annotatedItemStyleAsString:(int)arg1 ;
-(int)StringAsAnnotatedItemStyle:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
@end

