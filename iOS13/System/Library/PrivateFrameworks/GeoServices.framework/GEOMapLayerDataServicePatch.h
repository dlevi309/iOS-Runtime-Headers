/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_index : 1;
		unsigned wrote_layer : 1;
		unsigned wrote_sourceVersion : 1;
		unsigned wrote_targetVersion : 1;
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(GEOMapLayerDataServiceLayerIndex *)index;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setIndex:(GEOMapLayerDataServiceLayerIndex *)arg1 ;
-(GEOMapLayerDataServiceLayer *)layer;
-(void)setLayer:(GEOMapLayerDataServiceLayer *)arg1 ;
-(BOOL)hasIndex;
-(void)readAll:(BOOL)arg1 ;
-(void)_readLayer;
-(void)_readIndex;
-(BOOL)hasLayer;
-(void)_readSourceVersion;
-(void)_readTargetVersion;
-(GEOMapLayerDataServiceVersion *)sourceVersion;
-(GEOMapLayerDataServiceVersion *)targetVersion;
-(void)setSourceVersion:(GEOMapLayerDataServiceVersion *)arg1 ;
-(void)setTargetVersion:(GEOMapLayerDataServiceVersion *)arg1 ;
-(BOOL)hasSourceVersion;
-(BOOL)hasTargetVersion;
@end

