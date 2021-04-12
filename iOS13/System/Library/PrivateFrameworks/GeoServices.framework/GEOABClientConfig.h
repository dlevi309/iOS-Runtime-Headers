/*
* Generated on Monday, March 1, 2021 at 2:30:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString, NSMutableArray;

@interface GEOABClientConfig : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _assignedAbBranchId;
	NSMutableArray* _configKeyValues;
	NSMutableArray* _debugExperimentBranchs;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_assignedAbBranchId : 1;
		unsigned read_configKeyValues : 1;
		unsigned read_debugExperimentBranchs : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_assignedAbBranchId : 1;
		unsigned wrote_configKeyValues : 1;
		unsigned wrote_debugExperimentBranchs : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * configKeyValues; 
@property (nonatomic,readonly) BOOL hasAssignedAbBranchId; 
@property (nonatomic,retain) NSString * assignedAbBranchId; 
@property (nonatomic,retain) NSMutableArray * debugExperimentBranchs; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)configKeyValueType;
+(Class)debugExperimentBranchType;
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
-(void)_readConfigKeyValues;
-(void)_addNoFlagsConfigKeyValue:(id)arg1 ;
-(unsigned long long)configKeyValuesCount;
-(void)clearConfigKeyValues;
-(id)configKeyValueAtIndex:(unsigned long long)arg1 ;
-(void)addConfigKeyValue:(id)arg1 ;
-(NSMutableArray *)configKeyValues;
-(void)setConfigKeyValues:(NSMutableArray *)arg1 ;
-(void)_readAssignedAbBranchId;
-(void)_readDebugExperimentBranchs;
-(void)_addNoFlagsDebugExperimentBranch:(id)arg1 ;
-(NSString *)assignedAbBranchId;
-(void)setAssignedAbBranchId:(NSString *)arg1 ;
-(unsigned long long)debugExperimentBranchsCount;
-(void)clearDebugExperimentBranchs;
-(id)debugExperimentBranchAtIndex:(unsigned long long)arg1 ;
-(void)addDebugExperimentBranch:(id)arg1 ;
-(NSMutableArray *)debugExperimentBranchs;
-(BOOL)hasAssignedAbBranchId;
-(void)setDebugExperimentBranchs:(NSMutableArray *)arg1 ;
@end

