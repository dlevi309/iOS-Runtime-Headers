/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader;

@interface GEOPDGroundDataBuild : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE1* _capabilitys;
	SCD_Struct_GE19* _lodWithTextures;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _bucketId;
	unsigned _buildId;
	unsigned _dataFormatVersion;
	float _heightAboveGroundM;
	unsigned _index;
	unsigned _metricsVersion;
	int _type;
	int _urlFormat;
	struct {
		unsigned has_bucketId : 1;
		unsigned has_buildId : 1;
		unsigned has_dataFormatVersion : 1;
		unsigned has_heightAboveGroundM : 1;
		unsigned has_index : 1;
		unsigned has_metricsVersion : 1;
		unsigned has_type : 1;
		unsigned has_urlFormat : 1;
		unsigned read_capabilitys : 1;
		unsigned read_lodWithTextures : 1;
		unsigned wrote_capabilitys : 1;
		unsigned wrote_lodWithTextures : 1;
		unsigned wrote_bucketId : 1;
		unsigned wrote_buildId : 1;
		unsigned wrote_dataFormatVersion : 1;
		unsigned wrote_heightAboveGroundM : 1;
		unsigned wrote_index : 1;
		unsigned wrote_metricsVersion : 1;
		unsigned wrote_type : 1;
		unsigned wrote_urlFormat : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasIndex; 
@property (assign,nonatomic) unsigned index; 
@property (assign,nonatomic) BOOL hasBuildId; 
@property (assign,nonatomic) unsigned buildId; 
@property (assign,nonatomic) BOOL hasUrlFormat; 
@property (assign,nonatomic) int urlFormat; 
@property (assign,nonatomic) BOOL hasDataFormatVersion; 
@property (assign,nonatomic) unsigned dataFormatVersion; 
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
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(void)setType:(int)arg1 ;
-(id)initWithData:(id)arg1 ;
-(unsigned)index;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(void)setIndex:(unsigned)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(void)setHasIndex:(BOOL)arg1 ;
-(BOOL)hasIndex;
-(void)readAll:(BOOL)arg1 ;
-(void)_readCapabilitys;
-(void)_addNoFlagsCapability:(int)arg1 ;
-(void)_readLodWithTextures;
-(void)_addNoFlagsLodWithTextures:(unsigned)arg1 ;
-(unsigned long long)capabilitysCount;
-(void)clearCapabilitys;
-(int)capabilityAtIndex:(unsigned long long)arg1 ;
-(void)addCapability:(int)arg1 ;
-(unsigned long long)lodWithTexturesCount;
-(void)clearLodWithTextures;
-(unsigned)lodWithTexturesAtIndex:(unsigned long long)arg1 ;
-(void)addLodWithTextures:(unsigned)arg1 ;
-(unsigned)buildId;
-(void)setBuildId:(unsigned)arg1 ;
-(void)setHasBuildId:(BOOL)arg1 ;
-(BOOL)hasBuildId;
-(int)urlFormat;
-(void)setUrlFormat:(int)arg1 ;
-(void)setHasUrlFormat:(BOOL)arg1 ;
-(BOOL)hasUrlFormat;
-(id)urlFormatAsString:(int)arg1 ;
-(int)StringAsUrlFormat:(id)arg1 ;
-(unsigned)dataFormatVersion;
-(void)setDataFormatVersion:(unsigned)arg1 ;
-(void)setHasDataFormatVersion:(BOOL)arg1 ;
-(BOOL)hasDataFormatVersion;
-(float)heightAboveGroundM;
-(void)setHeightAboveGroundM:(float)arg1 ;
-(void)setHasHeightAboveGroundM:(BOOL)arg1 ;
-(BOOL)hasHeightAboveGroundM;
-(int*)capabilitys;
-(void)setCapabilitys:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)capabilitysAsString:(int)arg1 ;
-(int)StringAsCapabilitys:(id)arg1 ;
-(unsigned)bucketId;
-(void)setBucketId:(unsigned)arg1 ;
-(void)setHasBucketId:(BOOL)arg1 ;
-(BOOL)hasBucketId;
-(unsigned*)lodWithTextures;
-(void)setLodWithTextures:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned)metricsVersion;
-(void)setMetricsVersion:(unsigned)arg1 ;
-(void)setHasMetricsVersion:(BOOL)arg1 ;
-(BOOL)hasMetricsVersion;
@end

