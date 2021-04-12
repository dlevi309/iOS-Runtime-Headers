/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
*/

#import <CoreLocationProtobuf/CoreLocationProtobuf-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, CLPMeta;

@interface CLPCellWifiCollectionRequest : PBRequest <NSCopying> {

	NSMutableArray* _cdmaCellTowerLocations;
	NSMutableArray* _cellOutOfServiceInfos;
	NSMutableArray* _cellTowerLocations;
	NSMutableArray* _lteCellTowerLocations;
	CLPMeta* _meta;
	NSMutableArray* _scdmaCellTowerLocations;
	NSMutableArray* _wifiAPLocations;

}

@property (nonatomic,retain) CLPMeta * meta;                                        //@synthesize meta=_meta - In the implementation block
@property (nonatomic,retain) NSMutableArray * cellTowerLocations;                   //@synthesize cellTowerLocations=_cellTowerLocations - In the implementation block
@property (nonatomic,retain) NSMutableArray * cdmaCellTowerLocations;               //@synthesize cdmaCellTowerLocations=_cdmaCellTowerLocations - In the implementation block
@property (nonatomic,retain) NSMutableArray * lteCellTowerLocations;                //@synthesize lteCellTowerLocations=_lteCellTowerLocations - In the implementation block
@property (nonatomic,retain) NSMutableArray * wifiAPLocations;                      //@synthesize wifiAPLocations=_wifiAPLocations - In the implementation block
@property (nonatomic,retain) NSMutableArray * scdmaCellTowerLocations;              //@synthesize scdmaCellTowerLocations=_scdmaCellTowerLocations - In the implementation block
@property (nonatomic,retain) NSMutableArray * cellOutOfServiceInfos;                //@synthesize cellOutOfServiceInfos=_cellOutOfServiceInfos - In the implementation block
+(Class)cellTowerLocationType;
+(Class)cdmaCellTowerLocationType;
+(Class)lteCellTowerLocationType;
+(Class)wifiAPLocationType;
+(Class)scdmaCellTowerLocationType;
+(Class)cellOutOfServiceInfoType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(CLPMeta *)meta;
-(void)setMeta:(CLPMeta *)arg1 ;
-(void)addCellTowerLocation:(id)arg1 ;
-(void)addWifiAPLocation:(id)arg1 ;
-(void)addCdmaCellTowerLocation:(id)arg1 ;
-(void)addLteCellTowerLocation:(id)arg1 ;
-(void)addScdmaCellTowerLocation:(id)arg1 ;
-(void)addCellOutOfServiceInfo:(id)arg1 ;
-(unsigned long long)cellTowerLocationsCount;
-(void)clearCellTowerLocations;
-(id)cellTowerLocationAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)wifiAPLocationsCount;
-(void)clearWifiAPLocations;
-(id)wifiAPLocationAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)cdmaCellTowerLocationsCount;
-(void)clearCdmaCellTowerLocations;
-(id)cdmaCellTowerLocationAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)lteCellTowerLocationsCount;
-(void)clearLteCellTowerLocations;
-(id)lteCellTowerLocationAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)scdmaCellTowerLocationsCount;
-(void)clearScdmaCellTowerLocations;
-(id)scdmaCellTowerLocationAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)cellOutOfServiceInfosCount;
-(void)clearCellOutOfServiceInfos;
-(id)cellOutOfServiceInfoAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)cellTowerLocations;
-(void)setCellTowerLocations:(NSMutableArray *)arg1 ;
-(NSMutableArray *)cdmaCellTowerLocations;
-(void)setCdmaCellTowerLocations:(NSMutableArray *)arg1 ;
-(NSMutableArray *)lteCellTowerLocations;
-(void)setLteCellTowerLocations:(NSMutableArray *)arg1 ;
-(NSMutableArray *)wifiAPLocations;
-(void)setWifiAPLocations:(NSMutableArray *)arg1 ;
-(NSMutableArray *)scdmaCellTowerLocations;
-(void)setScdmaCellTowerLocations:(NSMutableArray *)arg1 ;
-(NSMutableArray *)cellOutOfServiceInfos;
-(void)setCellOutOfServiceInfos:(NSMutableArray *)arg1 ;
@end

