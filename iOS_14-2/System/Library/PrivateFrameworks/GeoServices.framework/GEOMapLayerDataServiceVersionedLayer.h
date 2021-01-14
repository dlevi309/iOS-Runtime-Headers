/*
* Generated on Thursday, January 14, 2021 at 2:21:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEOMapLayerDataServiceLayer, GEOMapLayerDataServiceVersion;

@interface GEOMapLayerDataServiceVersionedLayer : PBCodable <NSCopying> {

	PBDataReader* _reader;
	GEOMapLayerDataServiceLayer* _layer;
	GEOMapLayerDataServiceVersion* _version;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	SCD_Struct_GE37 _flags;

}

@property (nonatomic,readonly) BOOL hasLayer; 
@property (nonatomic,retain) GEOMapLayerDataServiceLayer * layer; 
@property (nonatomic,readonly) BOOL hasVersion; 
@property (nonatomic,retain) GEOMapLayerDataServiceVersion * version; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasVersion;
-(GEOMapLayerDataServiceLayer *)layer;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setLayer:(GEOMapLayerDataServiceLayer *)arg1 ;
-(id)description;
-(BOOL)hasLayer;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setVersion:(GEOMapLayerDataServiceVersion *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(GEOMapLayerDataServiceVersion *)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

