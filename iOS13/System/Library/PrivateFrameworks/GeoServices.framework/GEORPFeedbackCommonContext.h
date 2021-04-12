/*
* Generated on Monday, March 1, 2021 at 2:30:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray, GEOABAssignmentResponse, GEORPCurrentEnvironmentManifestURLs, GEORPMapLocation, GEORPNavigationSettings, GEORPSearchCommonContext, GEORPSourceInfo;

@interface GEORPFeedbackCommonContext : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE1* _userPaths;
	NSMutableArray* _auxiliaryControls;
	double _clientCreatedAt;
	GEOABAssignmentResponse* _currentAbAssignmentResponse;
	GEORPCurrentEnvironmentManifestURLs* _currentEnvironmentManifestUrls;
	GEORPMapLocation* _mapLocation;
	GEORPNavigationSettings* _navigationSettings;
	unsigned long long _originatingAuxiliaryControlIndex;
	GEORPSearchCommonContext* _searchCommon;
	GEORPSourceInfo* _sourceInfo;
	NSMutableArray* _visibleTileSets;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _deviceGmtOffset;
	int _pinType;
	struct {
		unsigned has_clientCreatedAt : 1;
		unsigned has_originatingAuxiliaryControlIndex : 1;
		unsigned has_deviceGmtOffset : 1;
		unsigned has_pinType : 1;
		unsigned read_unknownFields : 1;
		unsigned read_userPaths : 1;
		unsigned read_auxiliaryControls : 1;
		unsigned read_currentAbAssignmentResponse : 1;
		unsigned read_currentEnvironmentManifestUrls : 1;
		unsigned read_mapLocation : 1;
		unsigned read_navigationSettings : 1;
		unsigned read_searchCommon : 1;
		unsigned read_sourceInfo : 1;
		unsigned read_visibleTileSets : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_userPaths : 1;
		unsigned wrote_auxiliaryControls : 1;
		unsigned wrote_clientCreatedAt : 1;
		unsigned wrote_currentAbAssignmentResponse : 1;
		unsigned wrote_currentEnvironmentManifestUrls : 1;
		unsigned wrote_mapLocation : 1;
		unsigned wrote_navigationSettings : 1;
		unsigned wrote_originatingAuxiliaryControlIndex : 1;
		unsigned wrote_searchCommon : 1;
		unsigned wrote_sourceInfo : 1;
		unsigned wrote_visibleTileSets : 1;
		unsigned wrote_deviceGmtOffset : 1;
		unsigned wrote_pinType : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasPinType; 
@property (assign,nonatomic) int pinType; 
@property (nonatomic,readonly) BOOL hasMapLocation; 
@property (nonatomic,retain) GEORPMapLocation * mapLocation; 
@property (nonatomic,retain) NSMutableArray * visibleTileSets; 
@property (nonatomic,readonly) unsigned long long userPathsCount; 
@property (nonatomic,readonly) int* userPaths; 
@property (assign,nonatomic) BOOL hasClientCreatedAt; 
@property (assign,nonatomic) double clientCreatedAt; 
@property (nonatomic,retain) NSMutableArray * auxiliaryControls; 
@property (assign,nonatomic) BOOL hasOriginatingAuxiliaryControlIndex; 
@property (assign,nonatomic) unsigned long long originatingAuxiliaryControlIndex; 
@property (assign,nonatomic) BOOL hasDeviceGmtOffset; 
@property (assign,nonatomic) int deviceGmtOffset; 
@property (nonatomic,readonly) BOOL hasCurrentEnvironmentManifestUrls; 
@property (nonatomic,retain) GEORPCurrentEnvironmentManifestURLs * currentEnvironmentManifestUrls; 
@property (nonatomic,readonly) BOOL hasNavigationSettings; 
@property (nonatomic,retain) GEORPNavigationSettings * navigationSettings; 
@property (nonatomic,readonly) BOOL hasSourceInfo; 
@property (nonatomic,retain) GEORPSourceInfo * sourceInfo; 
@property (nonatomic,readonly) BOOL hasSearchCommon; 
@property (nonatomic,retain) GEORPSearchCommonContext * searchCommon; 
@property (nonatomic,readonly) BOOL hasCurrentAbAssignmentResponse; 
@property (nonatomic,retain) GEOABAssignmentResponse * currentAbAssignmentResponse; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)visibleTileSetType;
+(Class)auxiliaryControlType;
-(id)init;
-(void)dealloc;
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
-(void)_readUserPaths;
-(void)_addNoFlagsUserPath:(int)arg1 ;
-(unsigned long long)userPathsCount;
-(void)clearUserPaths;
-(int)userPathAtIndex:(unsigned long long)arg1 ;
-(void)addUserPath:(int)arg1 ;
-(int*)userPaths;
-(void)setUserPaths:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)userPathsAsString:(int)arg1 ;
-(int)StringAsUserPaths:(id)arg1 ;
-(void)_readMapLocation;
-(void)_readVisibleTileSets;
-(void)_addNoFlagsVisibleTileSet:(id)arg1 ;
-(void)_readAuxiliaryControls;
-(void)_addNoFlagsAuxiliaryControl:(id)arg1 ;
-(void)_readCurrentAbAssignmentResponse;
-(void)_readCurrentEnvironmentManifestUrls;
-(void)_readNavigationSettings;
-(GEORPMapLocation *)mapLocation;
-(GEOABAssignmentResponse *)currentAbAssignmentResponse;
-(GEORPCurrentEnvironmentManifestURLs *)currentEnvironmentManifestUrls;
-(GEORPNavigationSettings *)navigationSettings;
-(void)setMapLocation:(GEORPMapLocation *)arg1 ;
-(unsigned long long)visibleTileSetsCount;
-(void)clearVisibleTileSets;
-(id)visibleTileSetAtIndex:(unsigned long long)arg1 ;
-(void)addVisibleTileSet:(id)arg1 ;
-(unsigned long long)auxiliaryControlsCount;
-(void)clearAuxiliaryControls;
-(id)auxiliaryControlAtIndex:(unsigned long long)arg1 ;
-(void)addAuxiliaryControl:(id)arg1 ;
-(void)setCurrentAbAssignmentResponse:(GEOABAssignmentResponse *)arg1 ;
-(void)setCurrentEnvironmentManifestUrls:(GEORPCurrentEnvironmentManifestURLs *)arg1 ;
-(void)setNavigationSettings:(GEORPNavigationSettings *)arg1 ;
-(int)pinType;
-(void)setPinType:(int)arg1 ;
-(void)setHasPinType:(BOOL)arg1 ;
-(BOOL)hasPinType;
-(id)pinTypeAsString:(int)arg1 ;
-(int)StringAsPinType:(id)arg1 ;
-(BOOL)hasMapLocation;
-(NSMutableArray *)visibleTileSets;
-(void)setVisibleTileSets:(NSMutableArray *)arg1 ;
-(NSMutableArray *)auxiliaryControls;
-(void)setAuxiliaryControls:(NSMutableArray *)arg1 ;
-(unsigned long long)originatingAuxiliaryControlIndex;
-(void)setOriginatingAuxiliaryControlIndex:(unsigned long long)arg1 ;
-(void)setHasOriginatingAuxiliaryControlIndex:(BOOL)arg1 ;
-(BOOL)hasOriginatingAuxiliaryControlIndex;
-(int)deviceGmtOffset;
-(void)setDeviceGmtOffset:(int)arg1 ;
-(void)setHasDeviceGmtOffset:(BOOL)arg1 ;
-(BOOL)hasDeviceGmtOffset;
-(BOOL)hasCurrentAbAssignmentResponse;
-(BOOL)hasCurrentEnvironmentManifestUrls;
-(BOOL)hasNavigationSettings;
-(void)_readSourceInfo;
-(void)_readSearchCommon;
-(GEORPSourceInfo *)sourceInfo;
-(GEORPSearchCommonContext *)searchCommon;
-(void)setSourceInfo:(GEORPSourceInfo *)arg1 ;
-(void)setSearchCommon:(GEORPSearchCommonContext *)arg1 ;
-(double)clientCreatedAt;
-(void)setClientCreatedAt:(double)arg1 ;
-(void)setHasClientCreatedAt:(BOOL)arg1 ;
-(BOOL)hasClientCreatedAt;
-(BOOL)hasSourceInfo;
-(BOOL)hasSearchCommon;
@end

