/*
* Generated on Thursday, January 14, 2021 at 2:21:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEOPlaceResult;

@interface GEOCluster : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE90* _indexs;
	GEOPlaceResult* _container;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	SCD_Struct_GE37 _flags;

}

@property (nonatomic,readonly) BOOL hasContainer; 
@property (nonatomic,retain) GEOPlaceResult * container; 
@property (nonatomic,readonly) unsigned long long indexsCount; 
@property (nonatomic,readonly) int* indexs; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)addIndex:(int)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(int*)indexs;
-(void)clearSensitiveFields;
-(BOOL)hasContainer;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setContainer:(GEOPlaceResult *)arg1 ;
-(id)description;
-(unsigned long long)indexsCount;
-(void)clearIndexs;
-(int)indexAtIndex:(unsigned long long)arg1 ;
-(void)setIndexs:(int*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(GEOPlaceResult *)container;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

