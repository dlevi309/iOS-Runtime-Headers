/*
* Generated on Monday, March 1, 2021 at 2:30:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_codeVersion : 1;
		unsigned wrote_dataVersion : 1;
		unsigned wrote_hspVersion : 1;
		unsigned wrote_incidentsMetadata : 1;
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
-(void)_readDataVersion;
-(NSString *)dataVersion;
-(void)setDataVersion:(NSString *)arg1 ;
-(BOOL)hasDataVersion;
-(void)_readCodeVersion;
-(void)_readHspVersion;
-(void)_readIncidentsMetadata;
-(NSString *)codeVersion;
-(NSString *)hspVersion;
-(GEOTrafficTrafficIncidentsMetaData *)incidentsMetadata;
-(void)setCodeVersion:(NSString *)arg1 ;
-(void)setHspVersion:(NSString *)arg1 ;
-(void)setIncidentsMetadata:(GEOTrafficTrafficIncidentsMetaData *)arg1 ;
-(BOOL)hasCodeVersion;
-(BOOL)hasHspVersion;
-(BOOL)hasIncidentsMetadata;
@end

