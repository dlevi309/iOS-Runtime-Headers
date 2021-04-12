/*
* Generated on Thursday, January 14, 2021 at 2:21:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEOPDLensProjection, GEOPDOrientedPosition;

@interface GEOPDCameraMetadata : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE17* _textureIds;
	GEOPDLensProjection* _lensProjection;
	GEOPDOrientedPosition* _position;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _cameraNumber;
	int _imageHeight;
	int _imageWidth;
	struct {
		unsigned has_cameraNumber : 1;
		unsigned has_imageHeight : 1;
		unsigned has_imageWidth : 1;
		unsigned read_textureIds : 1;
		unsigned read_lensProjection : 1;
		unsigned read_position : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasCameraNumber; 
@property (assign,nonatomic) int cameraNumber; 
@property (assign,nonatomic) BOOL hasImageWidth; 
@property (assign,nonatomic) int imageWidth; 
@property (assign,nonatomic) BOOL hasImageHeight; 
@property (assign,nonatomic) int imageHeight; 
@property (nonatomic,readonly) BOOL hasLensProjection; 
@property (nonatomic,retain) GEOPDLensProjection * lensProjection; 
@property (nonatomic,readonly) BOOL hasPosition; 
@property (nonatomic,retain) GEOPDOrientedPosition * position; 
@property (nonatomic,readonly) unsigned long long textureIdsCount; 
@property (nonatomic,readonly) unsigned* textureIds; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)hasPosition;
-(id)dictionaryRepresentation;
-(GEOPDOrientedPosition *)position;
-(void)setCameraNumber:(int)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(int)cameraNumber;
-(id)jsonRepresentation;
-(unsigned)textureIdAtIndex:(unsigned long long)arg1 ;
-(void)setHasCameraNumber:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)addTextureId:(unsigned)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setImageHeight:(int)arg1 ;
-(BOOL)hasLensProjection;
-(void)setHasImageHeight:(BOOL)arg1 ;
-(id)description;
-(void)setHasImageWidth:(BOOL)arg1 ;
-(GEOPDLensProjection *)lensProjection;
-(void)setTextureIds:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)hasImageWidth;
-(int)imageWidth;
-(BOOL)hasCameraNumber;
-(void)clearTextureIds;
-(void)setPosition:(GEOPDOrientedPosition *)arg1 ;
-(unsigned long long)hash;
-(void)setLensProjection:(GEOPDLensProjection *)arg1 ;
-(BOOL)hasImageHeight;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)imageHeight;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setImageWidth:(int)arg1 ;
-(unsigned*)textureIds;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)textureIdsCount;
@end

