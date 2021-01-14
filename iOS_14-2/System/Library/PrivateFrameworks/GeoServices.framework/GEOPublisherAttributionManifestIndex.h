/*
* Generated on Thursday, January 14, 2021 at 2:21:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSMutableArray, NSMutableDictionary;

@interface GEOPublisherAttributionManifestIndex : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSMutableArray* _publisherAttributionFiles;
	NSMutableDictionary* _publisherToFileIndex;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	SCD_Struct_GE37 _flags;

}

@property (nonatomic,retain) NSMutableArray * publisherAttributionFiles; 
@property (nonatomic,retain) NSMutableDictionary * publisherToFileIndex; 
+(BOOL)isValid:(id)arg1 ;
+(Class)publisherAttributionFilesType;
+(Class)publisherToFileIndexType;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(NSMutableDictionary *)publisherToFileIndex;
-(NSMutableArray *)publisherAttributionFiles;
-(void)addPublisherAttributionFiles:(id)arg1 ;
-(unsigned long long)publisherAttributionFilesCount;
-(void)clearPublisherToFileIndex;
-(void)clearPublisherAttributionFiles;
-(id)publisherAttributionFilesAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)publisherToFileIndexCount;
-(void)setPublisherAttributionFiles:(NSMutableArray *)arg1 ;
-(void)setPublisherToFileIndex:(NSMutableDictionary *)arg1 ;
-(void)setPublisherToFileIndexValue:(unsigned)arg1 forKey:(id)arg2 ;
-(unsigned)publisherToFileIndexForKey:(id)arg1 ;
-(void)enumeratePublisherToFileIndexUsingBlock:(/*^block*/id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

