/*
* Generated on Thursday, January 14, 2021 at 2:21:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString, GEOTrafficTrafficIncidentsMetaData;

@interface GEOTrafficResponseMetaData : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSString* _codeVersion;
	NSString* _dataVersion;
	NSString* _hspVersion;
	GEOTrafficTrafficIncidentsMetaData* _incidentsMetadata;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_codeVersion : 1;
		unsigned read_dataVersion : 1;
		unsigned read_hspVersion : 1;
		unsigned read_incidentsMetadata : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasCodeVersion; 
@property (nonatomic,retain) NSString * codeVersion; 
@property (nonatomic,readonly) BOOL hasDataVersion; 
@property (nonatomic,retain) NSString * dataVersion; 
@property (nonatomic,readonly) BOOL hasHspVersion; 
@property (nonatomic,retain) NSString * hspVersion; 
@property (nonatomic,readonly) BOOL hasIncidentsMetadata; 
@property (nonatomic,retain) GEOTrafficTrafficIncidentsMetaData * incidentsMetadata; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)dataVersion;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)setDataVersion:(NSString *)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasDataVersion;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)codeVersion;
-(NSString *)hspVersion;
-(GEOTrafficTrafficIncidentsMetaData *)incidentsMetadata;
-(void)setCodeVersion:(NSString *)arg1 ;
-(void)setHspVersion:(NSString *)arg1 ;
-(void)setIncidentsMetadata:(GEOTrafficTrafficIncidentsMetaData *)arg1 ;
-(BOOL)hasCodeVersion;
-(BOOL)hasHspVersion;
-(BOOL)hasIncidentsMetadata;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

