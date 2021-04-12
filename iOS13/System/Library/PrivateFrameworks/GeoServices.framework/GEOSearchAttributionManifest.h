/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_actionComponentMapEntries : 1;
		unsigned wrote_searchAttributionSources : 1;
		unsigned wrote_sourceURL : 1;
		unsigned wrote_timestamp : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) double timestamp; 
@property (nonatomic,readonly) BOOL hasSourceURL; 
@property (nonatomic,retain) NSString * sourceURL; 
@property (nonatomic,retain) NSMutableArray * searchAttributionSources; 
@property (nonatomic,retain) NSMutableArray * actionComponentMapEntries; 
+(BOOL)isValid:(id)arg1 ;
+(Class)searchAttributionSourcesType;
+(Class)actionComponentMapEntriesType;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(double)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(double)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)sourceURL;
-(void)setSourceURL:(NSString *)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)_readSearchAttributionSources;
-(void)_addNoFlagsSearchAttributionSources:(id)arg1 ;
-(void)_readActionComponentMapEntries;
-(void)_addNoFlagsActionComponentMapEntries:(id)arg1 ;
-(unsigned long long)searchAttributionSourcesCount;
-(void)clearSearchAttributionSources;
-(id)searchAttributionSourcesAtIndex:(unsigned long long)arg1 ;
-(void)addSearchAttributionSources:(id)arg1 ;
-(unsigned long long)actionComponentMapEntriesCount;
-(void)clearActionComponentMapEntries;
-(id)actionComponentMapEntriesAtIndex:(unsigned long long)arg1 ;
-(void)addActionComponentMapEntries:(id)arg1 ;
-(void)_readSourceURL;
-(NSMutableArray *)searchAttributionSources;
-(void)setSearchAttributionSources:(NSMutableArray *)arg1 ;
-(NSMutableArray *)actionComponentMapEntries;
-(void)setActionComponentMapEntries:(NSMutableArray *)arg1 ;
-(BOOL)hasSourceURL;
@end

