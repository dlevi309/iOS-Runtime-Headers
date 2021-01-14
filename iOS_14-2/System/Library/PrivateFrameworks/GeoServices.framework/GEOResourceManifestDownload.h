/*
* Generated on Thursday, January 14, 2021 at 2:20:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEODownloadMetadata, GEOResources;

@interface GEOResourceManifestDownload : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEODownloadMetadata* _metadata;
	GEOResources* _resources;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_metadata : 1;
		unsigned read_resources : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasResources; 
@property (nonatomic,retain) GEOResources * resources; 
@property (nonatomic,retain) GEODownloadMetadata * metadata; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(GEOResources *)resources;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)setMetadata:(GEODownloadMetadata *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setResources:(GEOResources *)arg1 ;
-(id)description;
-(BOOL)hasResources;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(GEODownloadMetadata *)metadata;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithResourceManifestData:(id)arg1 ;
@end

