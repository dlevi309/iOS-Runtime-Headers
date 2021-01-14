/*
* Generated on Thursday, January 14, 2021 at 2:21:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray, GEOPDMapsIdentifier, NSString;

@interface GEOPDPlaceCollectionItem : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _itemDescriptions;
	GEOPDMapsIdentifier* _itemId;
	NSMutableArray* _photos;
	NSString* _url;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	BOOL _enableImageFallback;
	struct {
		unsigned has_enableImageFallback : 1;
		unsigned read_unknownFields : 1;
		unsigned read_itemDescriptions : 1;
		unsigned read_itemId : 1;
		unsigned read_photos : 1;
		unsigned read_url : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasItemId; 
@property (nonatomic,retain) GEOPDMapsIdentifier * itemId; 
@property (nonatomic,retain) NSMutableArray * photos; 
@property (nonatomic,retain) NSMutableArray * itemDescriptions; 
@property (nonatomic,readonly) BOOL hasUrl; 
@property (nonatomic,retain) NSString * url; 
@property (assign,nonatomic) BOOL hasEnableImageFallback; 
@property (assign,nonatomic) BOOL enableImageFallback; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)photoType;
+(Class)itemDescriptionType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)setPhotos:(NSMutableArray *)arg1 ;
-(id)init;
-(unsigned long long)photosCount;
-(id)jsonRepresentation;
-(GEOPDMapsIdentifier *)itemId;
-(void)clearPhotos;
-(void)addPhoto:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(NSString *)url;
-(id)initWithDictionary:(id)arg1 ;
-(void)addItemDescription:(id)arg1 ;
-(void)setEnableImageFallback:(BOOL)arg1 ;
-(unsigned long long)itemDescriptionsCount;
-(void)clearItemDescriptions;
-(id)itemDescriptionAtIndex:(unsigned long long)arg1 ;
-(void)setItemDescriptions:(NSMutableArray *)arg1 ;
-(BOOL)enableImageFallback;
-(void)setHasEnableImageFallback:(BOOL)arg1 ;
-(BOOL)hasEnableImageFallback;
-(NSMutableArray *)itemDescriptions;
-(id)description;
-(BOOL)hasUrl;
-(void)setUrl:(NSString *)arg1 ;
-(NSMutableArray *)photos;
-(id)photoAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasItemId;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)itemDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setItemId:(GEOPDMapsIdentifier *)arg1 ;
@end

