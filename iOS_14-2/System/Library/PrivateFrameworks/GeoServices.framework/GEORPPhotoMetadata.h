/*
* Generated on Thursday, January 14, 2021 at 2:21:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString, GEOLocation;

@interface GEORPPhotoMetadata : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSString* _clientImageUuid;
	GEOLocation* _geotag;
	NSString* _imageDescription;
	NSString* _mediaType;
	unsigned long long _size;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _source;
	struct {
		unsigned has_size : 1;
		unsigned has_source : 1;
		unsigned read_clientImageUuid : 1;
		unsigned read_geotag : 1;
		unsigned read_imageDescription : 1;
		unsigned read_mediaType : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasClientImageUuid; 
@property (nonatomic,retain) NSString * clientImageUuid; 
@property (nonatomic,readonly) BOOL hasImageDescription; 
@property (nonatomic,retain) NSString * imageDescription; 
@property (nonatomic,readonly) BOOL hasGeotag; 
@property (nonatomic,retain) GEOLocation * geotag; 
@property (assign,nonatomic) BOOL hasSize; 
@property (assign,nonatomic) unsigned long long size; 
@property (nonatomic,readonly) BOOL hasMediaType; 
@property (nonatomic,retain) NSString * mediaType; 
@property (assign,nonatomic) BOOL hasSource; 
@property (assign,nonatomic) int source; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(int)StringAsSource:(id)arg1 ;
-(void)setHasSource:(BOOL)arg1 ;
-(id)sourceAsString:(int)arg1 ;
-(BOOL)hasSource;
-(void)setMediaType:(NSString *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(NSString *)mediaType;
-(id)init;
-(id)jsonRepresentation;
-(GEOLocation *)geotag;
-(unsigned long long)size;
-(BOOL)hasMediaType;
-(void)mergeFrom:(id)arg1 ;
-(void)setSize:(unsigned long long)arg1 ;
-(NSString *)imageDescription;
-(void)setImageDescription:(NSString *)arg1 ;
-(void)setGeotag:(GEOLocation *)arg1 ;
-(BOOL)hasImageDescription;
-(BOOL)hasSize;
-(NSString *)clientImageUuid;
-(void)setClientImageUuid:(NSString *)arg1 ;
-(BOOL)hasClientImageUuid;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setSource:(int)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasGeotag;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasSize:(BOOL)arg1 ;
-(int)source;
@end

