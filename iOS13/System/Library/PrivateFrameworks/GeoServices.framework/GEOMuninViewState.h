/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOCameraFrame, GEOLocationInfo;

@interface GEOMuninViewState : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOCameraFrame* _cameraFrame;
	GEOLocationInfo* _locationInfo;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_cameraFrame : 1;
		unsigned read_locationInfo : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_cameraFrame : 1;
		unsigned wrote_locationInfo : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasCameraFrame; 
@property (nonatomic,retain) GEOCameraFrame * cameraFrame; 
@property (nonatomic,readonly) BOOL hasLocationInfo; 
@property (nonatomic,retain) GEOLocationInfo * locationInfo; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
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
-(void)_readCameraFrame;
-(void)_readLocationInfo;
-(GEOCameraFrame *)cameraFrame;
-(GEOLocationInfo *)locationInfo;
-(void)setCameraFrame:(GEOCameraFrame *)arg1 ;
-(void)setLocationInfo:(GEOLocationInfo *)arg1 ;
-(BOOL)hasCameraFrame;
-(BOOL)hasLocationInfo;
@end

