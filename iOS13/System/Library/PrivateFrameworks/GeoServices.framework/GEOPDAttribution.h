/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_unknownFields : 1;
		unsigned wrote_actionUrlComponent : 1;
		unsigned wrote_attributionUrls : 1;
		unsigned wrote_externalComponentId : 1;
		unsigned wrote_externalItemId : 1;
		unsigned wrote_vendorId : 1;
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
+(BOOL)isValid:(id)arg1 ;
+(id)attributionForPlaceDataEncyclopedia:(id)arg1 ;
+(id)attributionForPlaceDataReview:(id)arg1 ;
+(id)attributionForPlaceDataPhotos:(id)arg1 ;
+(id)attributionForPlaceDataEntity:(id)arg1 ;
+(id)attributionForPlaceDataRestaurantReservationLink:(id)arg1 ;
+(id)attributionForAnnotatedItemList:(id)arg1 placeData:(id)arg2 ;
+(Class)attributionUrlType;
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
-(NSString *)vendorId;
-(NSMutableArray *)attributionUrls;
-(NSString *)externalItemId;
-(BOOL)hasExternalItemId;
-(BOOL)hasVendorId;
-(BOOL)_isYelp;
-(unsigned long long)attributionUrlsCount;
-(void)_readVendorId;
-(void)_readExternalItemId;
-(void)setVendorId:(NSString *)arg1 ;
-(void)setExternalItemId:(NSString *)arg1 ;
-(void)_readExternalComponentId;
-(void)_readAttributionUrls;
-(void)_addNoFlagsAttributionUrl:(id)arg1 ;
-(void)_readActionUrlComponent;
-(NSString *)externalComponentId;
-(NSString *)actionUrlComponent;
-(void)setExternalComponentId:(NSString *)arg1 ;
-(void)clearAttributionUrls;
-(id)attributionUrlAtIndex:(unsigned long long)arg1 ;
-(void)addAttributionUrl:(id)arg1 ;
-(void)setActionUrlComponent:(NSString *)arg1 ;
-(BOOL)hasExternalComponentId;
-(void)setAttributionUrls:(NSMutableArray *)arg1 ;
-(BOOL)hasActionUrlComponent;
@end

