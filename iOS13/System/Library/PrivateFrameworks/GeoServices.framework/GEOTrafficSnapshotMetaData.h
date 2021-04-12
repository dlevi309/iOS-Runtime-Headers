/*
* Generated on Monday, March 1, 2021 at 2:30:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _vendor;
	struct {
		unsigned has_publishTime : 1;
		unsigned has_vendor : 1;
		unsigned read_basemapId : 1;
		unsigned read_branchId : 1;
		unsigned read_environment : 1;
		unsigned read_feedId : 1;
		unsigned read_isoCountryCode : 1;
		unsigned read_regions : 1;
		unsigned read_snapshotId : 1;
		unsigned wrote_basemapId : 1;
		unsigned wrote_branchId : 1;
		unsigned wrote_environment : 1;
		unsigned wrote_feedId : 1;
		unsigned wrote_isoCountryCode : 1;
		unsigned wrote_publishTime : 1;
		unsigned wrote_regions : 1;
		unsigned wrote_snapshotId : 1;
		unsigned wrote_vendor : 1;
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
+(BOOL)isValid:(id)arg1 ;
+(Class)regionsType;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)environment;
-(void)setEnvironment:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)isoCountryCode;
-(NSMutableArray *)regions;
-(void)addRegions:(id)arg1 ;
-(void)setIsoCountryCode:(NSString *)arg1 ;
-(void)clearRegions;
-(void)readAll:(BOOL)arg1 ;
-(unsigned long long)regionsCount;
-(BOOL)hasBasemapId;
-(NSString *)basemapId;
-(void)_readFeedId;
-(void)_readIsoCountryCode;
-(void)_readBranchId;
-(void)_readEnvironment;
-(void)_readSnapshotId;
-(void)_readRegions;
-(void)_addNoFlagsRegions:(id)arg1 ;
-(void)_readBasemapId;
-(NSString *)feedId;
-(NSString *)branchId;
-(NSString *)snapshotId;
-(void)setFeedId:(NSString *)arg1 ;
-(void)setBranchId:(NSString *)arg1 ;
-(void)setSnapshotId:(NSString *)arg1 ;
-(id)regionsAtIndex:(unsigned long long)arg1 ;
-(void)setBasemapId:(NSString *)arg1 ;
-(unsigned long long)publishTime;
-(void)setPublishTime:(unsigned long long)arg1 ;
-(void)setHasPublishTime:(BOOL)arg1 ;
-(BOOL)hasPublishTime;
-(BOOL)hasFeedId;
-(BOOL)hasIsoCountryCode;
-(BOOL)hasBranchId;
-(BOOL)hasEnvironment;
-(BOOL)hasSnapshotId;
-(int)vendor;
-(void)setVendor:(int)arg1 ;
-(void)setHasVendor:(BOOL)arg1 ;
-(BOOL)hasVendor;
-(id)vendorAsString:(int)arg1 ;
-(int)StringAsVendor:(id)arg1 ;
-(void)setRegions:(NSMutableArray *)arg1 ;
@end

