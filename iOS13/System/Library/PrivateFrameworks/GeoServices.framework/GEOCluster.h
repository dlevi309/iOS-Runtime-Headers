/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEOPlaceResult;

@interface GEOCluster : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE1* _indexs;
	GEOPlaceResult* _container;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_indexs : 1;
		unsigned read_container : 1;
		unsigned wrote_indexs : 1;
		unsigned wrote_container : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasContainer; 
@property (nonatomic,retain) GEOPlaceResult * container; 
@property (nonatomic,readonly) unsigned long long indexsCount; 
@property (nonatomic,readonly) int* indexs; 
+(BOOL)isValid:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(GEOPlaceResult *)container;
-(void)setContainer:(GEOPlaceResult *)arg1 ;
-(void)addIndex:(int)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasContainer;
-(void)readAll:(BOOL)arg1 ;
-(void)clearSensitiveFields;
-(void)_readContainer;
-(void)_readIndexs;
-(void)_addNoFlagsIndex:(int)arg1 ;
-(unsigned long long)indexsCount;
-(void)clearIndexs;
-(int)indexAtIndex:(unsigned long long)arg1 ;
-(int*)indexs;
-(void)setIndexs:(int*)arg1 count:(unsigned long long)arg2 ;
@end

