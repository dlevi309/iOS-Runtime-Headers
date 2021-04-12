/*
* Generated on Thursday, January 14, 2021 at 2:21:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEOMapLayerDataServiceLayerIndex, GEOMapLayerDataServiceLayer, GEOMapLayerDataServiceVersion;

@interface GEOMapLayerDataServicePatch : PBCodable <NSCopying> {

	PBDataReader* _reader;
	GEOMapLayerDataServiceLayerIndex* _index;
	GEOMapLayerDataServiceLayer* _layer;
	GEOMapLayerDataServiceVersion* _sourceVersion;
	GEOMapLayerDataServiceVersion* _targetVersion;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_index : 1;
		unsigned read_layer : 1;
		unsigned read_sourceVersion : 1;
		unsigned read_targetVersion : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasLayer; 
@property (nonatomic,retain) GEOMapLayerDataServiceLayer * layer; 
@property (nonatomic,readonly) BOOL hasSourceVersion; 
@property (nonatomic,retain) GEOMapLayerDataServiceVersion * sourceVersion; 
@property (nonatomic,readonly) BOOL hasTargetVersion; 
@property (nonatomic,retain) GEOMapLayerDataServiceVersion * targetVersion; 
@property (nonatomic,readonly) BOOL hasIndex; 
@property (nonatomic,retain) GEOMapLayerDataServiceLayerIndex * index; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(GEOMapLayerDataServiceLayerIndex *)index;
-(BOOL)hasTargetVersion;
-(GEOMapLayerDataServiceLayer *)layer;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)setIndex:(GEOMapLayerDataServiceLayerIndex *)arg1 ;
-(GEOMapLayerDataServiceVersion *)sourceVersion;
-(void)mergeFrom:(id)arg1 ;
-(void)setSourceVersion:(GEOMapLayerDataServiceVersion *)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)hasIndex;
-(void)setLayer:(GEOMapLayerDataServiceLayer *)arg1 ;
-(id)description;
-(BOOL)hasSourceVersion;
-(BOOL)hasLayer;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(GEOMapLayerDataServiceVersion *)targetVersion;
-(void)setTargetVersion:(GEOMapLayerDataServiceVersion *)arg1 ;
@end

