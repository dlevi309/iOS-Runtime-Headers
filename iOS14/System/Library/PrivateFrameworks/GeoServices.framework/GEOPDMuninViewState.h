/*
* Generated on Thursday, January 14, 2021 at 2:21:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEOPDCameraFrame, GEOPDLocationInfo;

@interface GEOPDMuninViewState : PBCodable <NSCopying> {

	PBDataReader* _reader;
	GEOPDCameraFrame* _cameraFrame;
	GEOPDLocationInfo* _locationInfo;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	SCD_Struct_GE37 _flags;

}

@property (nonatomic,readonly) BOOL hasCameraFrame; 
@property (nonatomic,retain) GEOPDCameraFrame * cameraFrame; 
@property (nonatomic,readonly) BOOL hasLocationInfo; 
@property (nonatomic,retain) GEOPDLocationInfo * locationInfo; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(GEOPDCameraFrame *)cameraFrame;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(GEOPDLocationInfo *)locationInfo;
-(void)setLocationInfo:(GEOPDLocationInfo *)arg1 ;
-(BOOL)hasCameraFrame;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasLocationInfo;
-(void)setCameraFrame:(GEOPDCameraFrame *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

