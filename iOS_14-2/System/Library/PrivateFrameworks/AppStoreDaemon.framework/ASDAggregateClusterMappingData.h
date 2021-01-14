/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface ASDAggregateClusterMappingData : PBCodable <NSCopying> {

	SCD_Struct_AS2* _clusterAppCounts;
	SCD_Struct_AS2* _clusterIDs;
	SCD_Struct_AS2* _clusterVersions;
	SCD_Struct_AS2* _weightedAppForgroundUsages;
	SCD_Struct_AS2* _weightedAppLaunches;
	int _encodingVersion;

}

@property (assign,nonatomic) int encodingVersion;                                               //@synthesize encodingVersion=_encodingVersion - In the implementation block
@property (nonatomic,readonly) unsigned long long clusterIDsCount; 
@property (nonatomic,readonly) int* clusterIDs; 
@property (nonatomic,readonly) unsigned long long clusterVersionsCount; 
@property (nonatomic,readonly) int* clusterVersions; 
@property (nonatomic,readonly) unsigned long long clusterAppCountsCount; 
@property (nonatomic,readonly) int* clusterAppCounts; 
@property (nonatomic,readonly) unsigned long long weightedAppLaunchesCount; 
@property (nonatomic,readonly) int* weightedAppLaunches; 
@property (nonatomic,readonly) unsigned long long weightedAppForgroundUsagesCount; 
@property (nonatomic,readonly) int* weightedAppForgroundUsages; 
-(id)dictionaryRepresentation;
-(int*)clusterIDs;
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)clusterIDsCount;
-(void)clearClusterIDs;
-(int)clusterIDAtIndex:(unsigned long long)arg1 ;
-(void)addClusterID:(int)arg1 ;
-(unsigned long long)clusterVersionsCount;
-(void)clearClusterVersions;
-(int)clusterVersionAtIndex:(unsigned long long)arg1 ;
-(void)addClusterVersion:(int)arg1 ;
-(unsigned long long)clusterAppCountsCount;
-(void)clearClusterAppCounts;
-(int)clusterAppCountAtIndex:(unsigned long long)arg1 ;
-(void)addClusterAppCount:(int)arg1 ;
-(unsigned long long)weightedAppLaunchesCount;
-(void)clearWeightedAppLaunches;
-(int)weightedAppLaunchesAtIndex:(unsigned long long)arg1 ;
-(void)addWeightedAppLaunches:(int)arg1 ;
-(unsigned long long)weightedAppForgroundUsagesCount;
-(void)clearWeightedAppForgroundUsages;
-(int)weightedAppForgroundUsageAtIndex:(unsigned long long)arg1 ;
-(void)setClusterIDs:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)description;
-(void)addWeightedAppForgroundUsage:(int)arg1 ;
-(int*)clusterVersions;
-(void)setClusterVersions:(int*)arg1 count:(unsigned long long)arg2 ;
-(int*)clusterAppCounts;
-(void)setClusterAppCounts:(int*)arg1 count:(unsigned long long)arg2 ;
-(int*)weightedAppLaunches;
-(void)setWeightedAppLaunches:(int*)arg1 count:(unsigned long long)arg2 ;
-(int*)weightedAppForgroundUsages;
-(void)setWeightedAppForgroundUsages:(int*)arg1 count:(unsigned long long)arg2 ;
-(int)encodingVersion;
-(void)setEncodingVersion:(int)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

