/*
* Generated on Thursday, January 14, 2021 at 2:21:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray, NSString;

@interface GEOSearchAttribution : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _attributionURLs;
	NSString* _sourceIdentifier;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _sourceVersion;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_attributionURLs : 1;
		unsigned read_sourceIdentifier : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,retain) NSString * sourceIdentifier; 
@property (assign,nonatomic) unsigned sourceVersion; 
@property (nonatomic,retain) NSMutableArray * attributionURLs; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)attributionURLsType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setSourceIdentifier:(NSString *)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(unsigned)sourceVersion;
-(void)mergeFrom:(id)arg1 ;
-(void)setSourceVersion:(unsigned)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(void)addAttributionURLs:(id)arg1 ;
-(unsigned long long)attributionURLsCount;
-(void)clearAttributionURLs;
-(id)attributionURLsAtIndex:(unsigned long long)arg1 ;
-(void)setAttributionURLs:(NSMutableArray *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSMutableArray *)attributionURLs;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)sourceIdentifier;
@end

