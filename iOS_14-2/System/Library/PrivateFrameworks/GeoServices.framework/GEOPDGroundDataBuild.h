/*
* Generated on Thursday, January 14, 2021 at 2:21:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader;

@interface GEOPDGroundDataBuild : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE90* _capabilitys;
	SCD_Struct_GE17* _lodWithTextures;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _bucketId;
	unsigned _buildId;
	unsigned _dataFormatVersion;
	unsigned _dataOutputVersion;
	float _heightAboveGroundM;
	unsigned _index;
	unsigned _metricsVersion;
	int _type;
	struct {
		unsigned has_bucketId : 1;
		unsigned has_buildId : 1;
		unsigned has_dataFormatVersion : 1;
		unsigned has_dataOutputVersion : 1;
		unsigned has_heightAboveGroundM : 1;
		unsigned has_index : 1;
		unsigned has_metricsVersion : 1;
		unsigned has_type : 1;
		unsigned read_capabilitys : 1;
		unsigned read_lodWithTextures : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasIndex; 
@property (assign,nonatomic) unsigned index; 
@property (assign,nonatomic) BOOL hasBuildId; 
@property (assign,nonatomic) unsigned buildId; 
@property (assign,nonatomic) BOOL hasDataFormatVersion; 
@property (assign,nonatomic) unsigned dataFormatVersion; 
@property (assign,nonatomic) BOOL hasDataOutputVersion; 
@property (assign,nonatomic) unsigned dataOutputVersion; 
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type; 
@property (assign,nonatomic) BOOL hasHeightAboveGroundM; 
@property (assign,nonatomic) float heightAboveGroundM; 
@property (nonatomic,readonly) unsigned long long capabilitysCount; 
@property (nonatomic,readonly) int* capabilitys; 
@property (assign,nonatomic) BOOL hasBucketId; 
@property (assign,nonatomic) unsigned bucketId; 
@property (nonatomic,readonly) unsigned long long lodWithTexturesCount; 
@property (nonatomic,readonly) unsigned* lodWithTextures; 
@property (assign,nonatomic) BOOL hasMetricsVersion; 
@property (assign,nonatomic) unsigned metricsVersion; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(id)capabilitysAsString:(int)arg1 ;
-(unsigned)index;
-(int)StringAsCapabilitys:(id)arg1 ;
-(id)typeAsString:(int)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasHeightAboveGroundM;
-(void)setBucketId:(unsigned)arg1 ;
-(id)init;
-(int)StringAsType:(id)arg1 ;
-(unsigned)metricsVersion;
-(id)jsonRepresentation;
-(void)setHasBuildId:(BOOL)arg1 ;
-(void)setMetricsVersion:(unsigned)arg1 ;
-(void)setBuildId:(unsigned)arg1 ;
-(unsigned)dataFormatVersion;
-(void)setIndex:(unsigned)arg1 ;
-(BOOL)hasType;
-(int*)capabilitys;
-(BOOL)hasMetricsVersion;
-(void)mergeFrom:(id)arg1 ;
-(void)setType:(int)arg1 ;
-(id)initWithData:(id)arg1 ;
-(BOOL)hasBucketId;
-(void)clearCapabilitys;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned)dataOutputVersion;
-(void)addLodWithTextures:(unsigned)arg1 ;
-(BOOL)hasIndex;
-(void)setHasMetricsVersion:(BOOL)arg1 ;
-(void)setHasBucketId:(BOOL)arg1 ;
-(id)description;
-(void)setCapabilitys:(int*)arg1 count:(unsigned long long)arg2 ;
-(unsigned)bucketId;
-(void)setHasDataFormatVersion:(BOOL)arg1 ;
-(unsigned)buildId;
-(void)clearLodWithTextures;
-(BOOL)hasDataFormatVersion;
-(int)type;
-(unsigned long long)hash;
-(void)setDataOutputVersion:(unsigned)arg1 ;
-(int)capabilityAtIndex:(unsigned long long)arg1 ;
-(unsigned*)lodWithTextures;
-(BOOL)readFrom:(id)arg1 ;
-(void)setHasDataOutputVersion:(BOOL)arg1 ;
-(unsigned long long)capabilitysCount;
-(void)copyTo:(id)arg1 ;
-(void)setHeightAboveGroundM:(float)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasDataOutputVersion;
-(void)setHasHeightAboveGroundM:(BOOL)arg1 ;
-(unsigned long long)lodWithTexturesCount;
-(void)setHasIndex:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLodWithTextures:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)addCapability:(int)arg1 ;
-(BOOL)hasBuildId;
-(float)heightAboveGroundM;
-(unsigned)lodWithTexturesAtIndex:(unsigned long long)arg1 ;
-(void)setDataFormatVersion:(unsigned)arg1 ;
@end

