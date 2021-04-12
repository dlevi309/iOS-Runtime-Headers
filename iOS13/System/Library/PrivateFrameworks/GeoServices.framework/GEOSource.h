/*
* Generated on Monday, March 1, 2021 at 2:30:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString;

@interface GEOSource : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _sourceId;
	NSString* _sourceName;
	NSString* _sourceVersion;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_sourceId : 1;
		unsigned read_sourceName : 1;
		unsigned read_sourceVersion : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_sourceId : 1;
		unsigned wrote_sourceName : 1;
		unsigned wrote_sourceVersion : 1;
	}  _flags;

}

@property (nonatomic,retain) NSString * sourceName; 
@property (nonatomic,retain) NSString * sourceId; 
@property (nonatomic,readonly) BOOL hasSourceVersion; 
@property (nonatomic,retain) NSString * sourceVersion; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readSourceId;
-(NSString *)sourceId;
-(void)setSourceId:(NSString *)arg1 ;
-(void)_readSourceVersion;
-(NSString *)sourceVersion;
-(void)setSourceVersion:(NSString *)arg1 ;
-(BOOL)hasSourceVersion;
-(void)_readSourceName;
-(NSString *)sourceName;
-(void)setSourceName:(NSString *)arg1 ;
-(id)initWithAttributionID:(id)arg1 ;
@end

