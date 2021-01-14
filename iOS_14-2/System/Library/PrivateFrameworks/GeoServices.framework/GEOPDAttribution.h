/*
* Generated on Thursday, January 14, 2021 at 2:20:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString, NSMutableArray;

@interface GEOPDAttribution : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _actionUrlComponent;
	NSMutableArray* _attributionUrls;
	NSString* _externalComponentId;
	NSString* _externalItemId;
	NSString* _vendorId;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_actionUrlComponent : 1;
		unsigned read_attributionUrls : 1;
		unsigned read_externalComponentId : 1;
		unsigned read_externalItemId : 1;
		unsigned read_vendorId : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasVendorId; 
@property (nonatomic,retain) NSString * vendorId; 
@property (nonatomic,readonly) BOOL hasExternalItemId; 
@property (nonatomic,retain) NSString * externalItemId; 
@property (nonatomic,readonly) BOOL hasExternalComponentId; 
@property (nonatomic,retain) NSString * externalComponentId; 
@property (nonatomic,retain) NSMutableArray * attributionUrls; 
@property (nonatomic,readonly) BOOL hasActionUrlComponent; 
@property (nonatomic,retain) NSString * actionUrlComponent; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(id)attributionForPlaceDataEncyclopedia:(id)arg1 ;
+(id)attributionForPlaceDataEntity:(id)arg1 ;
+(id)attributionForPlaceDataPhotos:(id)arg1 ;
+(id)attributionForPlaceDataReview:(id)arg1 ;
+(id)attributionForAnnotatedItemList:(id)arg1 placeData:(id)arg2 ;
+(BOOL)isValid:(id)arg1 ;
+(id)attributionForPlaceDataRestaurantReservationLink:(id)arg1 ;
+(Class)attributionUrlType;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(NSString *)actionUrlComponent;
-(void)setVendorId:(NSString *)arg1 ;
-(NSString *)externalComponentId;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasActionUrlComponent;
-(id)initWithData:(id)arg1 ;
-(BOOL)_isYelp;
-(id)initWithDictionary:(id)arg1 ;
-(id)attributionUrlAtIndex:(unsigned long long)arg1 ;
-(NSString *)externalItemId;
-(NSString *)vendorId;
-(void)setAttributionUrls:(NSMutableArray *)arg1 ;
-(void)clearAttributionUrls;
-(void)setActionUrlComponent:(NSString *)arg1 ;
-(id)description;
-(void)setExternalItemId:(NSString *)arg1 ;
-(void)setExternalComponentId:(NSString *)arg1 ;
-(unsigned long long)hash;
-(void)addAttributionUrl:(id)arg1 ;
-(NSMutableArray *)attributionUrls;
-(unsigned long long)attributionUrlsCount;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasExternalItemId;
-(BOOL)hasVendorId;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasExternalComponentId;
@end

