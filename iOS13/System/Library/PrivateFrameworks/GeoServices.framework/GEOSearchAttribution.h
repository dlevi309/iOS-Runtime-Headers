/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_unknownFields : 1;
		unsigned wrote_attributionURLs : 1;
		unsigned wrote_sourceIdentifier : 1;
		unsigned wrote_sourceVersion : 1;
	}  _flags;

}

@property (nonatomic,retain) NSString * sourceIdentifier; 
@property (assign,nonatomic) unsigned sourceVersion; 
@property (nonatomic,retain) NSMutableArray * attributionURLs; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)attributionURLsType;
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
-(void)setSourceIdentifier:(NSString *)arg1 ;
-(NSString *)sourceIdentifier;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(unsigned)sourceVersion;
-(void)setSourceVersion:(unsigned)arg1 ;
-(void)_readSourceIdentifier;
-(void)_readAttributionURLs;
-(void)_addNoFlagsAttributionURLs:(id)arg1 ;
-(NSMutableArray *)attributionURLs;
-(unsigned long long)attributionURLsCount;
-(void)clearAttributionURLs;
-(id)attributionURLsAtIndex:(unsigned long long)arg1 ;
-(void)addAttributionURLs:(id)arg1 ;
-(void)setAttributionURLs:(NSMutableArray *)arg1 ;
@end

