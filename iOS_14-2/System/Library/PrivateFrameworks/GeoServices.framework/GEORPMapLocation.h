/*
* Generated on Thursday, January 14, 2021 at 2:21:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEOLatLng, NSData, NSString, GEOPDViewportInfo;

@interface GEORPMapLocation : PBCodable <NSCopying> {

	PBDataReader* _reader;
	GEOLatLng* _coordinate;
	NSData* _image;
	NSString* _mapScreenshotId;
	GEOPDViewportInfo* _viewportInfo;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	float _zoomLevel;
	struct {
		unsigned has_zoomLevel : 1;
		unsigned read_coordinate : 1;
		unsigned read_image : 1;
		unsigned read_mapScreenshotId : 1;
		unsigned read_viewportInfo : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasImage; 
@property (nonatomic,retain) NSData * image; 
@property (nonatomic,readonly) BOOL hasCoordinate; 
@property (nonatomic,retain) GEOLatLng * coordinate; 
@property (assign,nonatomic) BOOL hasZoomLevel; 
@property (assign,nonatomic) float zoomLevel; 
@property (nonatomic,readonly) BOOL hasViewportInfo; 
@property (nonatomic,retain) GEOPDViewportInfo * viewportInfo; 
@property (nonatomic,readonly) BOOL hasMapScreenshotId; 
@property (nonatomic,retain) NSString * mapScreenshotId; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(GEOPDViewportInfo *)viewportInfo;
-(BOOL)hasCoordinate;
-(float)zoomLevel;
-(void)setImage:(NSData *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)setZoomLevel:(float)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(GEOLatLng *)coordinate;
-(BOOL)hasImage;
-(NSString *)mapScreenshotId;
-(void)setMapScreenshotId:(NSString *)arg1 ;
-(BOOL)hasMapScreenshotId;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(NSData *)image;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)hasViewportInfo;
-(void)setHasZoomLevel:(BOOL)arg1 ;
-(id)description;
-(void)setCoordinate:(GEOLatLng *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasZoomLevel;
-(void)_setMapMode:(int)arg1 region:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setViewportInfo:(GEOPDViewportInfo *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

