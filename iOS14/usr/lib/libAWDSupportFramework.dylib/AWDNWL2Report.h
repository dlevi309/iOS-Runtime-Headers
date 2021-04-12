/*
* Generated on Thursday, January 14, 2021 at 2:28:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDNWL2Report : PBCodable <NSCopying> {

	int _cellularBand;
	int _cellularBandInfo;
	int _cellularBandwidth;
	int _cellularBars;
	NSString* _cellularCellType;
	int _cellularLqm;
	int _cellularMcc;
	int _cellularMnc;
	int _cellularPid;
	int _cellularPowerCostDownload;
	int _cellularPowerCostUpload;
	int _cellularRadioTechnology;
	int _cellularTac;
	int _cellularUarfcn;
	int _wifiLqm;
	int _wifiRadioTechnology;
	int _wifiRssi;
	BOOL _cellularKnownGood;
	BOOL _wifiKnownGood;
	SCD_Struct_AW31 _has;

}

@property (assign,nonatomic) BOOL hasCellularLqm; 
@property (assign,nonatomic) int cellularLqm;                                //@synthesize cellularLqm=_cellularLqm - In the implementation block
@property (assign,nonatomic) BOOL hasCellularPowerCostDownload; 
@property (assign,nonatomic) int cellularPowerCostDownload;                  //@synthesize cellularPowerCostDownload=_cellularPowerCostDownload - In the implementation block
@property (assign,nonatomic) BOOL hasCellularPowerCostUpload; 
@property (assign,nonatomic) int cellularPowerCostUpload;                    //@synthesize cellularPowerCostUpload=_cellularPowerCostUpload - In the implementation block
@property (assign,nonatomic) BOOL hasCellularKnownGood; 
@property (assign,nonatomic) BOOL cellularKnownGood;                         //@synthesize cellularKnownGood=_cellularKnownGood - In the implementation block
@property (assign,nonatomic) BOOL hasCellularRadioTechnology; 
@property (assign,nonatomic) int cellularRadioTechnology;                    //@synthesize cellularRadioTechnology=_cellularRadioTechnology - In the implementation block
@property (assign,nonatomic) BOOL hasWifiLqm; 
@property (assign,nonatomic) int wifiLqm;                                    //@synthesize wifiLqm=_wifiLqm - In the implementation block
@property (assign,nonatomic) BOOL hasWifiRssi; 
@property (assign,nonatomic) int wifiRssi;                                   //@synthesize wifiRssi=_wifiRssi - In the implementation block
@property (assign,nonatomic) BOOL hasWifiKnownGood; 
@property (assign,nonatomic) BOOL wifiKnownGood;                             //@synthesize wifiKnownGood=_wifiKnownGood - In the implementation block
@property (assign,nonatomic) BOOL hasWifiRadioTechnology; 
@property (assign,nonatomic) int wifiRadioTechnology;                        //@synthesize wifiRadioTechnology=_wifiRadioTechnology - In the implementation block
@property (assign,nonatomic) BOOL hasCellularMnc; 
@property (assign,nonatomic) int cellularMnc;                                //@synthesize cellularMnc=_cellularMnc - In the implementation block
@property (assign,nonatomic) BOOL hasCellularMcc; 
@property (assign,nonatomic) int cellularMcc;                                //@synthesize cellularMcc=_cellularMcc - In the implementation block
@property (assign,nonatomic) BOOL hasCellularUarfcn; 
@property (assign,nonatomic) int cellularUarfcn;                             //@synthesize cellularUarfcn=_cellularUarfcn - In the implementation block
@property (assign,nonatomic) BOOL hasCellularPid; 
@property (assign,nonatomic) int cellularPid;                                //@synthesize cellularPid=_cellularPid - In the implementation block
@property (assign,nonatomic) BOOL hasCellularBandInfo; 
@property (assign,nonatomic) int cellularBandInfo;                           //@synthesize cellularBandInfo=_cellularBandInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasCellularCellType; 
@property (nonatomic,retain) NSString * cellularCellType;                    //@synthesize cellularCellType=_cellularCellType - In the implementation block
@property (assign,nonatomic) BOOL hasCellularBandwidth; 
@property (assign,nonatomic) int cellularBandwidth;                          //@synthesize cellularBandwidth=_cellularBandwidth - In the implementation block
@property (assign,nonatomic) BOOL hasCellularTac; 
@property (assign,nonatomic) int cellularTac;                                //@synthesize cellularTac=_cellularTac - In the implementation block
@property (assign,nonatomic) BOOL hasCellularBars; 
@property (assign,nonatomic) int cellularBars;                               //@synthesize cellularBars=_cellularBars - In the implementation block
@property (assign,nonatomic) BOOL hasCellularBand; 
@property (assign,nonatomic) int cellularBand;                               //@synthesize cellularBand=_cellularBand - In the implementation block
-(id)dictionaryRepresentation;
-(void)setCellularBandwidth:(int)arg1 ;
-(NSString *)cellularCellType;
-(void)setCellularBandInfo:(int)arg1 ;
-(void)setCellularBars:(int)arg1 ;
-(int)cellularBars;
-(BOOL)hasCellularRadioTechnology;
-(void)mergeFrom:(id)arg1 ;
-(void)setWifiRadioTechnology:(int)arg1 ;
-(int)StringAsWifiRadioTechnology:(id)arg1 ;
-(id)cellularRadioTechnologyAsString:(int)arg1 ;
-(BOOL)wifiKnownGood;
-(int)StringAsCellularBand:(id)arg1 ;
-(id)description;
-(int)wifiLqm;
-(BOOL)hasWifiRadioTechnology;
-(void)setCellularCellType:(NSString *)arg1 ;
-(int)cellularBandInfo;
-(int)wifiRadioTechnology;
-(void)setCellularBand:(int)arg1 ;
-(void)setCellularRadioTechnology:(int)arg1 ;
-(void)setCellularLqm:(int)arg1 ;
-(void)setHasCellularLqm:(BOOL)arg1 ;
-(BOOL)hasCellularLqm;
-(int)cellularPowerCostDownload;
-(void)setCellularPowerCostDownload:(int)arg1 ;
-(void)setHasCellularPowerCostDownload:(BOOL)arg1 ;
-(BOOL)hasCellularPowerCostDownload;
-(id)cellularPowerCostDownloadAsString:(int)arg1 ;
-(int)StringAsCellularPowerCostDownload:(id)arg1 ;
-(int)cellularPowerCostUpload;
-(void)setCellularPowerCostUpload:(int)arg1 ;
-(void)setHasCellularPowerCostUpload:(BOOL)arg1 ;
-(BOOL)hasCellularPowerCostUpload;
-(BOOL)hasCellularKnownGood;
-(id)cellularPowerCostUploadAsString:(int)arg1 ;
-(int)StringAsCellularPowerCostUpload:(id)arg1 ;
-(void)setHasCellularKnownGood:(BOOL)arg1 ;
-(void)setWifiLqm:(int)arg1 ;
-(void)setHasWifiLqm:(BOOL)arg1 ;
-(BOOL)hasWifiLqm;
-(void)setWifiRssi:(int)arg1 ;
-(void)setHasWifiRssi:(BOOL)arg1 ;
-(BOOL)hasWifiRssi;
-(void)setHasWifiKnownGood:(BOOL)arg1 ;
-(BOOL)hasWifiKnownGood;
-(void)setCellularMnc:(int)arg1 ;
-(int)wifiRssi;
-(void)setHasCellularMnc:(BOOL)arg1 ;
-(BOOL)hasCellularMnc;
-(void)setCellularMcc:(int)arg1 ;
-(void)setHasCellularMcc:(BOOL)arg1 ;
-(BOOL)hasCellularMcc;
-(void)setCellularUarfcn:(int)arg1 ;
-(void)setHasCellularUarfcn:(BOOL)arg1 ;
-(BOOL)hasCellularUarfcn;
-(void)setCellularPid:(int)arg1 ;
-(void)setHasCellularPid:(BOOL)arg1 ;
-(BOOL)hasCellularPid;
-(void)setHasCellularBandInfo:(BOOL)arg1 ;
-(void)setCellularTac:(int)arg1 ;
-(BOOL)hasCellularBandInfo;
-(BOOL)hasCellularCellType;
-(void)setHasCellularBandwidth:(BOOL)arg1 ;
-(BOOL)hasCellularBandwidth;
-(void)setHasCellularTac:(BOOL)arg1 ;
-(BOOL)hasCellularTac;
-(void)setHasCellularBars:(BOOL)arg1 ;
-(BOOL)hasCellularBars;
-(int)cellularLqm;
-(int)cellularMnc;
-(int)cellularMcc;
-(int)cellularUarfcn;
-(int)cellularPid;
-(int)cellularTac;
-(int)StringAsCellularRadioTechnology:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)cellularKnownGood;
-(id)cellularBandAsString:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setHasCellularRadioTechnology:(BOOL)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasCellularBand:(BOOL)arg1 ;
-(void)setHasWifiRadioTechnology:(BOOL)arg1 ;
-(void)setCellularKnownGood:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setWifiKnownGood:(BOOL)arg1 ;
-(id)wifiRadioTechnologyAsString:(int)arg1 ;
-(BOOL)hasCellularBand;
-(int)cellularRadioTechnology;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(int)cellularBand;
-(int)cellularBandwidth;
@end

