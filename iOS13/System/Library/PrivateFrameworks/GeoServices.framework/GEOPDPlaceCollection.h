/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOPDMapsIdentifier, GEOPDCaptionedPhoto, GEOPDTextBlock;

@interface GEOPDPlaceCollection : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOPDMapsIdentifier* _collectionId;
	GEOPDCaptionedPhoto* _photo;
	GEOPDTextBlock* _title;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _placeCount;
	struct {
		unsigned has_placeCount : 1;
		unsigned read_unknownFields : 1;
		unsigned read_collectionId : 1;
		unsigned read_photo : 1;
		unsigned read_title : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_collectionId : 1;
		unsigned wrote_photo : 1;
		unsigned wrote_title : 1;
		unsigned wrote_placeCount : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,retain) GEOPDTextBlock * title; 
@property (nonatomic,readonly) BOOL hasPhoto; 
@property (nonatomic,retain) GEOPDCaptionedPhoto * photo; 
@property (nonatomic,readonly) BOOL hasCollectionId; 
@property (nonatomic,retain) GEOPDMapsIdentifier * collectionId; 
@property (assign,nonatomic) BOOL hasPlaceCount; 
@property (assign,nonatomic) unsigned placeCount; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(id)collectionComponentsForPlaceData:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(GEOPDTextBlock *)title;
-(void)setTitle:(GEOPDTextBlock *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasTitle;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readTitle;
-(GEOPDMapsIdentifier *)collectionId;
-(unsigned)placeCount;
-(GEOPDCaptionedPhoto *)photo;
-(BOOL)hasPhoto;
-(void)_readPhoto;
-(void)setPhoto:(GEOPDCaptionedPhoto *)arg1 ;
-(void)_readCollectionId;
-(void)setCollectionId:(GEOPDMapsIdentifier *)arg1 ;
-(BOOL)hasCollectionId;
-(void)setPlaceCount:(unsigned)arg1 ;
-(void)setHasPlaceCount:(BOOL)arg1 ;
-(BOOL)hasPlaceCount;
@end

