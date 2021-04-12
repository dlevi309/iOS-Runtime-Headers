/*
* Generated on Thursday, January 14, 2021 at 2:21:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEOCacheHit, GEOCacheMiss;

@interface GEOLogMsgEventTileCacheAnalytic : PBCodable <NSCopying> {

	PBDataReader* _reader;
	GEOCacheHit* _cacheHit;
	GEOCacheMiss* _cacheMiss;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	SCD_Struct_GE37 _flags;

}

@property (nonatomic,readonly) BOOL hasCacheHit; 
@property (nonatomic,retain) GEOCacheHit * cacheHit; 
@property (nonatomic,readonly) BOOL hasCacheMiss; 
@property (nonatomic,retain) GEOCacheMiss * cacheMiss; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(GEOCacheHit *)cacheHit;
-(id)init;
-(id)jsonRepresentation;
-(BOOL)hasCacheMiss;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(GEOCacheMiss *)cacheMiss;
-(id)description;
-(void)setCacheMiss:(GEOCacheMiss *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasCacheHit;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCacheHit:(GEOCacheHit *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

