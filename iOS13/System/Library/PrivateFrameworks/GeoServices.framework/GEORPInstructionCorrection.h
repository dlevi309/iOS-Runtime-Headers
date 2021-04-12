/*
* Generated on Monday, March 1, 2021 at 2:30:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_comments : 1;
		unsigned wrote_photoId : 1;
		unsigned wrote_photo : 1;
		unsigned wrote_routeStepScreenshotImageData : 1;
		unsigned wrote_routeStepScreenshotImageId : 1;
		unsigned wrote_routeStepIndex : 1;
		unsigned wrote_routeStepSubstepIndex : 1;
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
-(void)_readPhotoId;
-(NSString *)photoId;
-(void)setPhotoId:(NSString *)arg1 ;
-(BOOL)hasPhotoId;
-(void)_readComments;
-(NSString *)comments;
-(void)setComments:(NSString *)arg1 ;
-(BOOL)hasComments;
-(GEORPPhotoWithMetadata *)photo;
-(BOOL)hasPhoto;
-(void)_readPhoto;
-(void)_readRouteStepScreenshotImageData;
-(void)_readRouteStepScreenshotImageId;
-(NSData *)routeStepScreenshotImageData;
-(NSString *)routeStepScreenshotImageId;
-(void)setPhoto:(GEORPPhotoWithMetadata *)arg1 ;
-(void)setRouteStepScreenshotImageData:(NSData *)arg1 ;
-(void)setRouteStepScreenshotImageId:(NSString *)arg1 ;
-(unsigned)routeStepIndex;
-(void)setRouteStepIndex:(unsigned)arg1 ;
-(void)setHasRouteStepIndex:(BOOL)arg1 ;
-(BOOL)hasRouteStepIndex;
-(unsigned)routeStepSubstepIndex;
-(void)setRouteStepSubstepIndex:(unsigned)arg1 ;
-(void)setHasRouteStepSubstepIndex:(BOOL)arg1 ;
-(BOOL)hasRouteStepSubstepIndex;
-(BOOL)hasRouteStepScreenshotImageData;
-(BOOL)hasRouteStepScreenshotImageId;
@end

