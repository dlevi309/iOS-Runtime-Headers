/*
* Generated on Thursday, January 14, 2021 at 2:21:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * configKeyValues; 
@property (nonatomic,readonly) BOOL hasAssignedAbBranchId; 
@property (nonatomic,retain) NSString * assignedAbBranchId; 
@property (nonatomic,retain) NSMutableArray * debugExperimentBranchs; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)configKeyValueType;
+(Class)debugExperimentBranchType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)clearDebugExperimentBranchs;
-(void)readAll:(BOOL)arg1 ;
-(unsigned long long)configKeyValuesCount;
-(id)init;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)assignedAbBranchId;
-(void)setAssignedAbBranchId:(NSString *)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)setConfigKeyValues:(NSMutableArray *)arg1 ;
-(BOOL)hasAssignedAbBranchId;
-(id)initWithDictionary:(id)arg1 ;
-(NSMutableArray *)configKeyValues;
-(id)description;
-(void)clearConfigKeyValues;
-(id)debugExperimentBranchAtIndex:(unsigned long long)arg1 ;
-(id)configKeyValueAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)debugExperimentBranchs;
-(void)addDebugExperimentBranch:(id)arg1 ;
-(void)addConfigKeyValue:(id)arg1 ;
-(unsigned long long)debugExperimentBranchsCount;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setDebugExperimentBranchs:(NSMutableArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

