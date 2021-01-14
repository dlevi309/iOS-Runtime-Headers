/*
* Generated on Thursday, January 14, 2021 at 2:21:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString, NSMutableArray;

@interface GEOTrafficSnapshotMetaData : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSString* _basemapId;
	NSString* _branchId;
	NSString* _environment;
	NSString* _feedId;
	NSString* _isoCountryCode;
	unsigned long long _publishTime;
	NSMutableArray* _regions;
	NSString* _snapshotId;
	NSString* _vendorSnapshotId;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _maxAgeSeconds;
	int _vendor;
	struct {
		unsigned has_publishTime : 1;
		unsigned has_maxAgeSeconds : 1;
		unsigned has_vendor : 1;
		unsigned read_basemapId : 1;
		unsigned read_branchId : 1;
		unsigned read_environment : 1;
		unsigned read_feedId : 1;
		unsigned read_isoCountryCode : 1;
		unsigned read_regions : 1;
		unsigned read_snapshotId : 1;
		unsigned read_vendorSnapshotId : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasPublishTime; 
@property (assign,nonatomic) unsigned long long publishTime; 
@property (nonatomic,readonly) BOOL hasFeedId; 
@property (nonatomic,retain) NSString * feedId; 
@property (nonatomic,readonly) BOOL hasIsoCountryCode; 
@property (nonatomic,retain) NSString * isoCountryCode; 
@property (nonatomic,readonly) BOOL hasBranchId; 
@property (nonatomic,retain) NSString * branchId; 
@property (nonatomic,readonly) BOOL hasEnvironment; 
@property (nonatomic,retain) NSString * environment; 
@property (nonatomic,readonly) BOOL hasSnapshotId; 
@property (nonatomic,retain) NSString * snapshotId; 
@property (assign,nonatomic) BOOL hasVendor; 
@property (assign,nonatomic) int vendor; 
@property (nonatomic,retain) NSMutableArray * regions; 
@property (nonatomic,readonly) BOOL hasBasemapId; 
@property (nonatomic,retain) NSString * basemapId; 
@property (nonatomic,readonly) BOOL hasVendorSnapshotId; 
@property (nonatomic,retain) NSString * vendorSnapshotId; 
@property (assign,nonatomic) BOOL hasMaxAgeSeconds; 
@property (assign,nonatomic) unsigned maxAgeSeconds; 
+(BOOL)isValid:(id)arg1 ;
+(Class)regionsType;
-(BOOL)hasIsoCountryCode;
-(id)dictionaryRepresentation;
-(void)setFeedId:(NSString *)arg1 ;
-(void)clearRegions;
-(unsigned long long)regionsCount;
-(void)setIsoCountryCode:(NSString *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(BOOL)hasEnvironment;
-(NSString *)basemapId;
-(void)setBasemapId:(NSString *)arg1 ;
-(NSMutableArray *)regions;
-(NSString *)isoCountryCode;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(int)vendor;
-(id)description;
-(BOOL)hasFeedId;
-(NSString *)branchId;
-(void)setSnapshotId:(NSString *)arg1 ;
-(BOOL)hasSnapshotId;
-(void)setEnvironment:(NSString *)arg1 ;
-(unsigned long long)hash;
-(NSString *)environment;
-(id)regionsAtIndex:(unsigned long long)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)feedId;
-(BOOL)hasVendor;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setVendor:(int)arg1 ;
-(void)setHasVendor:(BOOL)arg1 ;
-(id)vendorAsString:(int)arg1 ;
-(int)StringAsVendor:(id)arg1 ;
-(void)setRegions:(NSMutableArray *)arg1 ;
-(NSString *)vendorSnapshotId;
-(void)setPublishTime:(unsigned long long)arg1 ;
-(void)setBranchId:(NSString *)arg1 ;
-(void)setVendorSnapshotId:(NSString *)arg1 ;
-(void)setMaxAgeSeconds:(unsigned)arg1 ;
-(unsigned long long)publishTime;
-(void)setHasPublishTime:(BOOL)arg1 ;
-(BOOL)hasPublishTime;
-(BOOL)hasBranchId;
-(BOOL)hasVendorSnapshotId;
-(unsigned)maxAgeSeconds;
-(void)setHasMaxAgeSeconds:(BOOL)arg1 ;
-(BOOL)hasMaxAgeSeconds;
-(BOOL)hasBasemapId;
-(NSString *)snapshotId;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)addRegions:(id)arg1 ;
@end

