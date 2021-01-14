/*
* Generated on Thursday, January 14, 2021 at 2:20:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEORPFeedbackClientImageInfo, NSString, GEOPDPlace;

@interface GEORPPoiImageFeedbackContext : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEORPFeedbackClientImageInfo* _imageInfo;
	NSString* _imageUrl;
	GEOPDPlace* _place;
	NSString* _providerImageId;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_imageInfo : 1;
		unsigned read_imageUrl : 1;
		unsigned read_place : 1;
		unsigned read_providerImageId : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasPlace; 
@property (nonatomic,retain) GEOPDPlace * place; 
@property (nonatomic,readonly) BOOL hasProviderImageId; 
@property (nonatomic,retain) NSString * providerImageId; 
@property (nonatomic,readonly) BOOL hasImageUrl; 
@property (nonatomic,retain) NSString * imageUrl; 
@property (nonatomic,readonly) BOOL hasImageInfo; 
@property (nonatomic,retain) GEORPFeedbackClientImageInfo * imageInfo; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(GEOPDPlace *)place;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(NSString *)imageUrl;
-(NSString *)providerImageId;
-(void)setProviderImageId:(NSString *)arg1 ;
-(void)setImageUrl:(NSString *)arg1 ;
-(BOOL)hasProviderImageId;
-(BOOL)hasImageUrl;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(GEORPFeedbackClientImageInfo *)imageInfo;
-(void)setImageInfo:(GEORPFeedbackClientImageInfo *)arg1 ;
-(BOOL)hasImageInfo;
-(id)description;
-(BOOL)hasPlace;
-(unsigned long long)hash;
-(void)setPlace:(GEOPDPlace *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

