/*
* Generated on Thursday, January 14, 2021 at 2:21:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,retain) NSString * sourceName; 
@property (nonatomic,retain) NSString * sourceId; 
@property (nonatomic,readonly) BOOL hasSourceVersion; 
@property (nonatomic,retain) NSString * sourceVersion; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(NSString *)sourceId;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(NSString *)sourceVersion;
-(void)mergeFrom:(id)arg1 ;
-(void)setSourceVersion:(NSString *)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithAttributionID:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setSourceName:(NSString *)arg1 ;
-(id)description;
-(BOOL)hasSourceVersion;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)sourceName;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setSourceId:(NSString *)arg1 ;
@end

