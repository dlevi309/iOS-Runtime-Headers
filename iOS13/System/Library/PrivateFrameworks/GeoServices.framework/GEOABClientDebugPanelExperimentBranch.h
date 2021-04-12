/*
* Generated on Monday, March 1, 2021 at 2:30:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray, GEOABDebugPanelExperimentBranch;

@interface GEOABClientDebugPanelExperimentBranch : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _configKeyValues;
	GEOABDebugPanelExperimentBranch* _debugExperimentBranch;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_configKeyValues : 1;
		unsigned read_debugExperimentBranch : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_configKeyValues : 1;
		unsigned wrote_debugExperimentBranch : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasDebugExperimentBranch; 
@property (nonatomic,retain) GEOABDebugPanelExperimentBranch * debugExperimentBranch; 
@property (nonatomic,retain) NSMutableArray * configKeyValues; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)configKeyValueType;
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
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readDebugExperimentBranch;
-(void)_readConfigKeyValues;
-(void)_addNoFlagsConfigKeyValue:(id)arg1 ;
-(GEOABDebugPanelExperimentBranch *)debugExperimentBranch;
-(void)setDebugExperimentBranch:(GEOABDebugPanelExperimentBranch *)arg1 ;
-(unsigned long long)configKeyValuesCount;
-(void)clearConfigKeyValues;
-(id)configKeyValueAtIndex:(unsigned long long)arg1 ;
-(void)addConfigKeyValue:(id)arg1 ;
-(NSMutableArray *)configKeyValues;
-(BOOL)hasDebugExperimentBranch;
-(void)setConfigKeyValues:(NSMutableArray *)arg1 ;
@end

