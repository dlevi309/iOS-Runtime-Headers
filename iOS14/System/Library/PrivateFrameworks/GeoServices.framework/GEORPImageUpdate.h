/*
* Generated on Thursday, January 14, 2021 at 2:20:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString, GEORPPhotoMetadata, NSData;

@interface GEORPImageUpdate : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSString* _imageId;
	GEORPPhotoMetadata* _photoMetadata;
	NSData* _uploadResponse;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _action;
	struct {
		unsigned has_action : 1;
		unsigned read_imageId : 1;
		unsigned read_photoMetadata : 1;
		unsigned read_uploadResponse : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasImageId; 
@property (nonatomic,retain) NSString * imageId; 
@property (nonatomic,readonly) BOOL hasUploadResponse; 
@property (nonatomic,retain) NSData * uploadResponse; 
@property (assign,nonatomic) BOOL hasAction; 
@property (assign,nonatomic) int action; 
@property (nonatomic,readonly) BOOL hasPhotoMetadata; 
@property (nonatomic,retain) GEORPPhotoMetadata * photoMetadata; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)setHasAction:(BOOL)arg1 ;
-(NSString *)imageId;
-(void)mergeFrom:(id)arg1 ;
-(int)action;
-(void)setImageId:(NSString *)arg1 ;
-(void)setAction:(int)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(BOOL)hasAction;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSData *)uploadResponse;
-(GEORPPhotoMetadata *)photoMetadata;
-(void)setUploadResponse:(NSData *)arg1 ;
-(void)setPhotoMetadata:(GEORPPhotoMetadata *)arg1 ;
-(BOOL)hasUploadResponse;
-(id)actionAsString:(int)arg1 ;
-(int)StringAsAction:(id)arg1 ;
-(BOOL)hasPhotoMetadata;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasImageId;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

