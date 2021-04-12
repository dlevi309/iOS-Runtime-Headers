/*
* Generated on Monday, March 1, 2021 at 2:30:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString, GEOLocation;

@interface GEORPPhotoMetadata : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _clientImageUuid;
	GEOLocation* _geotag;
	NSString* _imageDescription;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_clientImageUuid : 1;
		unsigned read_geotag : 1;
		unsigned read_imageDescription : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_clientImageUuid : 1;
		unsigned wrote_geotag : 1;
		unsigned wrote_imageDescription : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasClientImageUuid; 
@property (nonatomic,retain) NSString * clientImageUuid; 
@property (nonatomic,readonly) BOOL hasImageDescription; 
@property (nonatomic,retain) NSString * imageDescription; 
@property (nonatomic,readonly) BOOL hasGeotag; 
@property (nonatomic,retain) GEOLocation * geotag; 
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
-(void)_readClientImageUuid;
-(NSString *)clientImageUuid;
-(void)setClientImageUuid:(NSString *)arg1 ;
-(BOOL)hasClientImageUuid;
-(void)_readImageDescription;
-(void)_readGeotag;
-(NSString *)imageDescription;
-(GEOLocation *)geotag;
-(void)setImageDescription:(NSString *)arg1 ;
-(void)setGeotag:(GEOLocation *)arg1 ;
-(BOOL)hasImageDescription;
-(BOOL)hasGeotag;
@end

