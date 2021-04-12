/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEOPDLensProjection, GEOPDOrientedPosition;

@interface GEOPDCameraMetadata : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE19* _textureIds;
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
		unsigned wrote_textureIds : 1;
		unsigned wrote_lensProjection : 1;
		unsigned wrote_position : 1;
		unsigned wrote_cameraNumber : 1;
		unsigned wrote_imageHeight : 1;
		unsigned wrote_imageWidth : 1;
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
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(GEOPDOrientedPosition *)position;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)imageHeight;
-(int)imageWidth;
-(void)setPosition:(GEOPDOrientedPosition *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(int)cameraNumber;
-(void)setCameraNumber:(int)arg1 ;
-(void)setHasCameraNumber:(BOOL)arg1 ;
-(BOOL)hasCameraNumber;
-(BOOL)hasPosition;
-(BOOL)hasLensProjection;
-(GEOPDLensProjection *)lensProjection;
-(unsigned long long)textureIdsCount;
-(unsigned*)textureIds;
-(void)_readPosition;
-(void)_readLensProjection;
-(void)_readTextureIds;
-(void)_addNoFlagsTextureId:(unsigned)arg1 ;
-(void)setLensProjection:(GEOPDLensProjection *)arg1 ;
-(void)clearTextureIds;
-(unsigned)textureIdAtIndex:(unsigned long long)arg1 ;
-(void)addTextureId:(unsigned)arg1 ;
-(void)setImageWidth:(int)arg1 ;
-(void)setHasImageWidth:(BOOL)arg1 ;
-(BOOL)hasImageWidth;
-(void)setImageHeight:(int)arg1 ;
-(void)setHasImageHeight:(BOOL)arg1 ;
-(BOOL)hasImageHeight;
-(void)setTextureIds:(unsigned*)arg1 count:(unsigned long long)arg2 ;
@end

