/*
* Generated on Thursday, January 14, 2021 at 2:21:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSMutableArray, NSString;

@interface GEOSearchAttributionManifest : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSMutableArray* _actionComponentMapEntries;
	NSMutableArray* _searchAttributionSources;
	NSString* _sourceURL;
	double _timestamp;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned has_timestamp : 1;
		unsigned read_actionComponentMapEntries : 1;
		unsigned read_searchAttributionSources : 1;
		unsigned read_sourceURL : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) double timestamp; 
@property (nonatomic,readonly) BOOL hasSourceURL; 
@property (nonatomic,retain) NSString * sourceURL; 
@property (nonatomic,retain) NSMutableArray * searchAttributionSources; 
@property (nonatomic,retain) NSMutableArray * actionComponentMapEntries; 
+(Class)searchAttributionSourcesType;
+(Class)actionComponentMapEntriesType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setSourceURL:(NSString *)arg1 ;
-(BOOL)hasSourceURL;
-(void)addSearchAttributionSources:(id)arg1 ;
-(void)clearActionComponentMapEntries;
-(NSString *)sourceURL;
-(id)searchAttributionSourcesAtIndex:(unsigned long long)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)setActionComponentMapEntries:(NSMutableArray *)arg1 ;
-(double)timestamp;
-(unsigned long long)searchAttributionSourcesCount;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setSearchAttributionSources:(NSMutableArray *)arg1 ;
-(id)description;
-(NSMutableArray *)actionComponentMapEntries;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(void)clearSearchAttributionSources;
-(unsigned long long)actionComponentMapEntriesCount;
-(BOOL)readFrom:(id)arg1 ;
-(NSMutableArray *)searchAttributionSources;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)actionComponentMapEntriesAtIndex:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(void)addActionComponentMapEntries:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

