/*
* Generated on Thursday, January 14, 2021 at 2:21:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString, GEORPPhotoWithMetadata, NSData;

@interface GEORPInstructionCorrection : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSString* _comments;
	NSString* _photoId;
	GEORPPhotoWithMetadata* _photo;
	NSData* _routeStepScreenshotImageData;
	NSString* _routeStepScreenshotImageId;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _routeStepIndex;
	unsigned _routeStepSubstepIndex;
	struct {
		unsigned has_routeStepIndex : 1;
		unsigned has_routeStepSubstepIndex : 1;
		unsigned read_comments : 1;
		unsigned read_photoId : 1;
		unsigned read_photo : 1;
		unsigned read_routeStepScreenshotImageData : 1;
		unsigned read_routeStepScreenshotImageId : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasRouteStepIndex; 
@property (assign,nonatomic) unsigned routeStepIndex; 
@property (nonatomic,readonly) BOOL hasComments; 
@property (nonatomic,retain) NSString * comments; 
@property (nonatomic,readonly) BOOL hasPhoto; 
@property (nonatomic,retain) GEORPPhotoWithMetadata * photo; 
@property (assign,nonatomic) BOOL hasRouteStepSubstepIndex; 
@property (assign,nonatomic) unsigned routeStepSubstepIndex; 
@property (nonatomic,readonly) BOOL hasRouteStepScreenshotImageData; 
@property (nonatomic,retain) NSData * routeStepScreenshotImageData; 
@property (nonatomic,readonly) BOOL hasPhotoId; 
@property (nonatomic,retain) NSString * photoId; 
@property (nonatomic,readonly) BOOL hasRouteStepScreenshotImageId; 
@property (nonatomic,retain) NSString * routeStepScreenshotImageId; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setPhoto:(GEORPPhotoWithMetadata *)arg1 ;
-(BOOL)hasPhoto;
-(GEORPPhotoWithMetadata *)photo;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(NSString *)comments;
-(NSData *)routeStepScreenshotImageData;
-(NSString *)routeStepScreenshotImageId;
-(void)setRouteStepIndex:(unsigned)arg1 ;
-(void)setRouteStepSubstepIndex:(unsigned)arg1 ;
-(void)setRouteStepScreenshotImageData:(NSData *)arg1 ;
-(void)setRouteStepScreenshotImageId:(NSString *)arg1 ;
-(unsigned)routeStepIndex;
-(void)setHasRouteStepIndex:(BOOL)arg1 ;
-(BOOL)hasRouteStepIndex;
-(unsigned)routeStepSubstepIndex;
-(void)setHasRouteStepSubstepIndex:(BOOL)arg1 ;
-(BOOL)hasRouteStepSubstepIndex;
-(BOOL)hasRouteStepScreenshotImageData;
-(BOOL)hasRouteStepScreenshotImageId;
-(void)setComments:(NSString *)arg1 ;
-(BOOL)hasComments;
-(NSString *)photoId;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)setPhotoId:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(BOOL)hasPhotoId;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

