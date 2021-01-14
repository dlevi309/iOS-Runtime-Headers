/*
* Generated on Thursday, January 14, 2021 at 2:26:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
*/

#import <CoreLocationProtobuf/CoreLocationProtobuf-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, CLPLocation, CLPCellNeighborsGroup, NSMutableArray;

@interface CLPCellTowerLocation : PBCodable <NSCopying> {

	NSString* _appBundleId;
	int _arfcn;
	int _ci;
	int _ecn0;
	int _lac;
	CLPLocation* _location;
	int _mcc;
	int _mnc;
	CLPCellNeighborsGroup* _neighborGroup;
	NSMutableArray* _neighbors;
	NSString* _operatorName;
	int _psc;
	int _rat;
	int _rscp;
	int _rssi;
	int _serverHash;
	NSString* _serviceProviderName;
	int _transmit;
	BOOL _isLimitedService;
	SCD_Struct_CL7 _has;

}

@property (assign,nonatomic) int mcc;                                            //@synthesize mcc=_mcc - In the implementation block
@property (assign,nonatomic) int mnc;                                            //@synthesize mnc=_mnc - In the implementation block
@property (assign,nonatomic) int lac;                                            //@synthesize lac=_lac - In the implementation block
@property (assign,nonatomic) int ci;                                             //@synthesize ci=_ci - In the implementation block
@property (assign,nonatomic) int rssi;                                           //@synthesize rssi=_rssi - In the implementation block
@property (assign,nonatomic) BOOL hasArfcn; 
@property (assign,nonatomic) int arfcn;                                          //@synthesize arfcn=_arfcn - In the implementation block
@property (assign,nonatomic) BOOL hasPsc; 
@property (assign,nonatomic) int psc;                                            //@synthesize psc=_psc - In the implementation block
@property (nonatomic,retain) CLPLocation * location;                             //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) BOOL hasAppBundleId; 
@property (nonatomic,retain) NSString * appBundleId;                             //@synthesize appBundleId=_appBundleId - In the implementation block
@property (assign,nonatomic) BOOL hasServerHash; 
@property (assign,nonatomic) int serverHash;                                     //@synthesize serverHash=_serverHash - In the implementation block
@property (assign,nonatomic) BOOL hasTransmit; 
@property (assign,nonatomic) int transmit;                                       //@synthesize transmit=_transmit - In the implementation block
@property (nonatomic,readonly) BOOL hasOperatorName; 
@property (nonatomic,retain) NSString * operatorName;                            //@synthesize operatorName=_operatorName - In the implementation block
@property (assign,nonatomic) BOOL hasEcn0; 
@property (assign,nonatomic) int ecn0;                                           //@synthesize ecn0=_ecn0 - In the implementation block
@property (assign,nonatomic) BOOL hasRscp; 
@property (assign,nonatomic) int rscp;                                           //@synthesize rscp=_rscp - In the implementation block
@property (assign,nonatomic) BOOL hasRat; 
@property (assign,nonatomic) int rat;                                            //@synthesize rat=_rat - In the implementation block
@property (nonatomic,retain) NSMutableArray * neighbors;                         //@synthesize neighbors=_neighbors - In the implementation block
@property (nonatomic,readonly) BOOL hasNeighborGroup; 
@property (nonatomic,retain) CLPCellNeighborsGroup * neighborGroup;              //@synthesize neighborGroup=_neighborGroup - In the implementation block
@property (assign,nonatomic) BOOL hasIsLimitedService; 
@property (assign,nonatomic) BOOL isLimitedService;                              //@synthesize isLimitedService=_isLimitedService - In the implementation block
@property (nonatomic,readonly) BOOL hasServiceProviderName; 
@property (nonatomic,retain) NSString * serviceProviderName;                     //@synthesize serviceProviderName=_serviceProviderName - In the implementation block
+(Class)neighborType;
-(int)rat;
-(void)setRat:(int)arg1 ;
-(NSMutableArray *)neighbors;
-(void)setCi:(int)arg1 ;
-(void)setNeighborGroup:(CLPCellNeighborsGroup *)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)operatorName;
-(void)setOperatorName:(NSString *)arg1 ;
-(BOOL)hasNeighborGroup;
-(int)rscp;
-(BOOL)hasServerHash;
-(BOOL)hasServiceProviderName;
-(void)setHasPsc:(BOOL)arg1 ;
-(void)setServerHash:(int)arg1 ;
-(BOOL)hasRscp;
-(BOOL)hasAppBundleId;
-(void)setAppBundleId:(NSString *)arg1 ;
-(void)setServiceProviderName:(NSString *)arg1 ;
-(void)setRscp:(int)arg1 ;
-(void)setLac:(int)arg1 ;
-(void)setRssi:(int)arg1 ;
-(BOOL)hasOperatorName;
-(int)ecn0;
-(void)setHasEcn0:(BOOL)arg1 ;
-(int)serverHash;
-(id)neighborAtIndex:(unsigned long long)arg1 ;
-(NSString *)serviceProviderName;
-(NSString *)appBundleId;
-(void)setHasServerHash:(BOOL)arg1 ;
-(BOOL)hasEcn0;
-(void)setNeighbors:(NSMutableArray *)arg1 ;
-(void)setEcn0:(int)arg1 ;
-(CLPLocation *)location;
-(BOOL)hasPsc;
-(void)setPsc:(int)arg1 ;
-(int)mnc;
-(int)rssi;
-(void)setHasTransmit:(BOOL)arg1 ;
-(void)setHasRscp:(BOOL)arg1 ;
-(int)psc;
-(unsigned long long)neighborsCount;
-(BOOL)hasRat;
-(void)mergeFrom:(id)arg1 ;
-(void)setMnc:(int)arg1 ;
-(void)setLocation:(CLPLocation *)arg1 ;
-(void)setHasArfcn:(BOOL)arg1 ;
-(BOOL)hasTransmit;
-(BOOL)isLimitedService;
-(id)description;
-(void)addNeighbor:(id)arg1 ;
-(void)setTransmit:(int)arg1 ;
-(int)arfcn;
-(int)mcc;
-(void)setHasIsLimitedService:(BOOL)arg1 ;
-(void)setMcc:(int)arg1 ;
-(void)setIsLimitedService:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasArfcn;
-(CLPCellNeighborsGroup *)neighborGroup;
-(BOOL)readFrom:(id)arg1 ;
-(void)clearNeighbors;
-(BOOL)hasIsLimitedService;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)lac;
-(void)setArfcn:(int)arg1 ;
-(int)ci;
-(int)transmit;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHasRat:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

