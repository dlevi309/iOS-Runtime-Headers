/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_coordinate : 1;
		unsigned wrote_image : 1;
		unsigned wrote_mapScreenshotId : 1;
		unsigned wrote_viewportInfo : 1;
		unsigned wrote_zoomLevel : 1;
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(GEOLatLng *)coordinate;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(NSData *)image;
-(void)setImage:(NSData *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setCoordinate:(GEOLatLng *)arg1 ;
-(BOOL)hasImage;
-(void)readAll:(BOOL)arg1 ;
-(void)_readViewportInfo;
-(GEOPDViewportInfo *)viewportInfo;
-(void)setViewportInfo:(GEOPDViewportInfo *)arg1 ;
-(BOOL)hasViewportInfo;
-(void)_readCoordinate;
-(BOOL)hasCoordinate;
-(float)zoomLevel;
-(void)setZoomLevel:(float)arg1 ;
-(void)setHasZoomLevel:(BOOL)arg1 ;
-(BOOL)hasZoomLevel;
-(void)_readImage;
-(void)_readMapScreenshotId;
-(NSString *)mapScreenshotId;
-(void)setMapScreenshotId:(NSString *)arg1 ;
-(BOOL)hasMapScreenshotId;
-(void)_setMapMode:(int)arg1 region:(id)arg2 ;
@end

