/*
* Generated on Thursday, January 14, 2021 at 2:20:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString;

@interface GEORPEnrichmentImage : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSString* _imageId;
	NSString* _url;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	SCD_Struct_GE37 _flags;

}

@property (nonatomic,readonly) BOOL hasImageId; 
@property (nonatomic,retain) NSString * imageId; 
@property (nonatomic,readonly) BOOL hasUrl; 
@property (nonatomic,retain) NSString * url; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(NSString *)imageId;
-(void)mergeFrom:(id)arg1 ;
-(void)setImageId:(NSString *)arg1 ;
-(id)initWithData:(id)arg1 ;
-(NSString *)url;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(BOOL)hasUrl;
-(void)setUrl:(NSString *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasImageId;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

