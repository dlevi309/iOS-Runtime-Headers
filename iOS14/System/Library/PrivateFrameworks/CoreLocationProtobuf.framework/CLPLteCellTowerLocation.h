/*
* Generated on Thursday, January 14, 2021 at 2:26:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
*/

#import <CoreLocationProtobuf/CoreLocationProtobuf-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, CLPLocation, CLPCellNeighborsGroup, NSMutableArray;

@interface CLPLteCellTowerLocation : PBCodable <NSCopying> {

	double _cellLatitude;
	double _cellLongitude;
	NSString* _appBundleId;
	int _bandInfo;
	int _bandwidth;
	int _ci;
	unsigned _deploymentType;
	int _ecn0;
	CLPLocation* _location;
	int _mcc;
	int _mnc;
	CLPCellNeighborsGroup* _neighborGroup;
	NSMutableArray* _neighbors;
	NSString* _operatorName;
	int _pid;
	int _rscp;
	int _rssi;
	int _serverHash;
	NSString* _serviceProviderName;
	int _tac;
	int _uarfcn;
	BOOL _isLimitedService;
	SCD_Struct_CL12 _has;

}

@property (assign,nonatomic) int mcc;                                            //@synthesize mcc=_mcc - In the implementation block
@property (assign,nonatomic) int mnc;                                            //@synthesize mnc=_mnc - In the implementation block
@property (assign,nonatomic) int tac;                                            //@synthesize tac=_tac - In the implementation block
@property (assign,nonatomic) int ci;                                             //@synthesize ci=_ci - In the implementation block
@property (assign,nonatomic) BOOL hasUarfcn; 
@property (assign,nonatomic) int uarfcn;                                         //@synthesize uarfcn=_uarfcn - In the implementation block
@property (assign,nonatomic) BOOL hasPid; 
@property (assign,nonatomic) int pid;                                            //@synthesize pid=_pid - In the implementation block
@property (assign,nonatomic) BOOL hasBandInfo; 
@property (assign,nonatomic) int bandInfo;                                       //@synthesize bandInfo=_bandInfo - In the implementation block
@property (nonatomic,retain) CLPLocation * location;                             //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) BOOL hasAppBundleId; 
@property (nonatomic,retain) NSString * appBundleId;                             //@synthesize appBundleId=_appBundleId - In the implementation block
@property (nonatomic,readonly) BOOL hasOperatorName; 
@property (nonatomic,retain) NSString * operatorName;                            //@synthesize operatorName=_operatorName - In the implementation block
@property (assign,nonatomic) BOOL hasCellLatitude; 
@property (assign,nonatomic) double cellLatitude;                                //@synthesize cellLatitude=_cellLatitude - In the implementation block
@property (assign,nonatomic) BOOL hasCellLongitude; 
@property (assign,nonatomic) double cellLongitude;                               //@synthesize cellLongitude=_cellLongitude - In the implementation block
@property (assign,nonatomic) BOOL hasServerHash; 
@property (assign,nonatomic) int serverHash;                                     //@synthesize serverHash=_serverHash - In the implementation block
@property (assign,nonatomic) BOOL hasEcn0; 
@property (assign,nonatomic) int ecn0;                                           //@synthesize ecn0=_ecn0 - In the implementation block
@property (assign,nonatomic) BOOL hasRscp; 
@property (assign,nonatomic) int rscp;                                           //@synthesize rscp=_rscp - In the implementation block
@property (assign,nonatomic) BOOL hasRssi; 
@property (assign,nonatomic) int rssi;                                           //@synthesize rssi=_rssi - In the implementation block
@property (nonatomic,retain) NSMutableArray * neighbors;                         //@synthesize neighbors=_neighbors - In the implementation block
@property (nonatomic,readonly) BOOL hasNeighborGroup; 
@property (nonatomic,retain) CLPCellNeighborsGroup * neighborGroup;              //@synthesize neighborGroup=_neighborGroup - In the implementation block
@property (assign,nonatomic) BOOL hasBandwidth; 
@property (assign,nonatomic) int bandwidth;                                      //@synthesize bandwidth=_bandwidth - In the implementation block
@property (assign,nonatomic) BOOL hasIsLimitedService; 
@property (assign,nonatomic) BOOL isLimitedService;                              //@synthesize isLimitedService=_isLimitedService - In the implementation block
@property (nonatomic,readonly) BOOL hasServiceProviderName; 
@property (nonatomic,retain) NSString * serviceProviderName;                     //@synthesize serviceProviderName=_serviceProviderName - In the implementation block
@property (assign,nonatomic) BOOL hasDeploymentType; 
@property (assign,nonatomic) unsigned deploymentType;                            //@synthesize deploymentType=_deploymentType - In the implementation block
+(Class)neighborType;
-(NSMutableArray *)neighbors;
-(int)tac;
-(void)setCi:(int)arg1 ;
-(void)setNeighborGroup:(CLPCellNeighborsGroup *)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)operatorName;
-(void)setOperatorName:(NSString *)arg1 ;
-(BOOL)hasNeighborGroup;
-(int)rscp;
-(int)uarfcn;
-(double)cellLongitude;
-(BOOL)hasBandInfo;
-(BOOL)hasServerHash;
-(BOOL)hasServiceProviderName;
-(BOOL)hasPid;
-(void)setServerHash:(int)arg1 ;
-(BOOL)hasRscp;
-(BOOL)hasAppBundleId;
-(int)pid;
-(void)setAppBundleId:(NSString *)arg1 ;
-(void)setServiceProviderName:(NSString *)arg1 ;
-(void)setRscp:(int)arg1 ;
-(void)setRssi:(int)arg1 ;
-(BOOL)hasOperatorName;
-(int)ecn0;
-(void)setHasEcn0:(BOOL)arg1 ;
-(int)serverHash;
-(id)neighborAtIndex:(unsigned long long)arg1 ;
-(NSString *)serviceProviderName;
-(void)setTac:(int)arg1 ;
-(void)setHasUarfcn:(BOOL)arg1 ;
-(NSString *)appBundleId;
-(void)setHasRssi:(BOOL)arg1 ;
-(void)setHasServerHash:(BOOL)arg1 ;
-(BOOL)hasEcn0;
-(BOOL)hasRssi;
-(void)setNeighbors:(NSMutableArray *)arg1 ;
-(void)setUarfcn:(int)arg1 ;
-(void)setHasDeploymentType:(BOOL)arg1 ;
-(void)setEcn0:(int)arg1 ;
-(void)setHasCellLatitude:(BOOL)arg1 ;
-(CLPLocation *)location;
-(int)bandwidth;
-(BOOL)hasUarfcn;
-(int)mnc;
-(void)setBandInfo:(int)arg1 ;
-(void)setHasPid:(BOOL)arg1 ;
-(int)rssi;
-(void)setHasRscp:(BOOL)arg1 ;
-(unsigned long long)neighborsCount;
-(void)mergeFrom:(id)arg1 ;
-(void)setMnc:(int)arg1 ;
-(void)setLocation:(CLPLocation *)arg1 ;
-(BOOL)hasBandwidth;
-(BOOL)isLimitedService;
-(void)setDeploymentType:(unsigned)arg1 ;
-(id)description;
-(void)addNeighbor:(id)arg1 ;
-(void)setBandwidth:(int)arg1 ;
-(BOOL)hasCellLongitude;
-(int)mcc;
-(BOOL)hasDeploymentType;
-(void)setHasBandInfo:(BOOL)arg1 ;
-(void)setHasIsLimitedService:(BOOL)arg1 ;
-(void)setMcc:(int)arg1 ;
-(int)bandInfo;
-(unsigned)deploymentType;
-(void)setCellLongitude:(double)arg1 ;
-(void)setIsLimitedService:(BOOL)arg1 ;
-(void)setHasCellLongitude:(BOOL)arg1 ;
-(unsigned long long)hash;
-(CLPCellNeighborsGroup *)neighborGroup;
-(BOOL)readFrom:(id)arg1 ;
-(void)clearNeighbors;
-(BOOL)hasIsLimitedService;
-(BOOL)hasCellLatitude;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)ci;
-(void)setPid:(int)arg1 ;
-(double)cellLatitude;
-(void)setCellLatitude:(double)arg1 ;
-(void)setHasBandwidth:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

