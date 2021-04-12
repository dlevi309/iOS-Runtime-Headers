/*
* Generated on Monday, March 1, 2021 at 2:30:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Network.framework/Network
*/


@class NSString;

@interface NWL2Report : NSObject {

	unsigned char _cellularPowerCostDownload;
	unsigned char _cellularPowerCostUpload;
	BOOL _cellularKnownGood;
	unsigned char _cellularRadioTechnology;
	BOOL _wifiKnownGood;
	unsigned char _wifiRadioTechnology;
	int _cellularLQM;
	int _cellularMNC;
	int _cellularMCC;
	int _cellularUARFCN;
	int _cellularPID;
	int _cellularBandInfo;
	int _cellularBandwidth;
	int _cellularTAC;
	int _cellularBars;
	int _wifiLQM;
	int _wifiRSSI;
	NSString* _cellularCellType;

}

@property (assign,nonatomic) int cellularLQM;                                      //@synthesize cellularLQM=_cellularLQM - In the implementation block
@property (assign,nonatomic) unsigned char cellularPowerCostDownload;              //@synthesize cellularPowerCostDownload=_cellularPowerCostDownload - In the implementation block
@property (assign,nonatomic) unsigned char cellularPowerCostUpload;                //@synthesize cellularPowerCostUpload=_cellularPowerCostUpload - In the implementation block
@property (assign,nonatomic) BOOL cellularKnownGood;                               //@synthesize cellularKnownGood=_cellularKnownGood - In the implementation block
@property (assign,nonatomic) unsigned char cellularRadioTechnology;                //@synthesize cellularRadioTechnology=_cellularRadioTechnology - In the implementation block
@property (assign,nonatomic) int cellularMNC;                                      //@synthesize cellularMNC=_cellularMNC - In the implementation block
@property (assign,nonatomic) int cellularMCC;                                      //@synthesize cellularMCC=_cellularMCC - In the implementation block
@property (assign,nonatomic) int cellularUARFCN;                                   //@synthesize cellularUARFCN=_cellularUARFCN - In the implementation block
@property (assign,nonatomic) int cellularPID;                                      //@synthesize cellularPID=_cellularPID - In the implementation block
@property (assign,nonatomic) int cellularBandInfo;                                 //@synthesize cellularBandInfo=_cellularBandInfo - In the implementation block
@property (nonatomic,retain) NSString * cellularCellType;                          //@synthesize cellularCellType=_cellularCellType - In the implementation block
@property (assign,nonatomic) int cellularBandwidth;                                //@synthesize cellularBandwidth=_cellularBandwidth - In the implementation block
@property (assign,nonatomic) int cellularTAC;                                      //@synthesize cellularTAC=_cellularTAC - In the implementation block
@property (assign,nonatomic) int cellularBars;                                     //@synthesize cellularBars=_cellularBars - In the implementation block
@property (assign,nonatomic) int wifiLQM;                                          //@synthesize wifiLQM=_wifiLQM - In the implementation block
@property (assign,nonatomic) int wifiRSSI;                                         //@synthesize wifiRSSI=_wifiRSSI - In the implementation block
@property (assign,nonatomic) BOOL wifiKnownGood;                                   //@synthesize wifiKnownGood=_wifiKnownGood - In the implementation block
@property (assign,nonatomic) unsigned char wifiRadioTechnology;                    //@synthesize wifiRadioTechnology=_wifiRadioTechnology - In the implementation block
-(id)description;
-(unsigned char)cellularPowerCostDownload;
-(void)setCellularPowerCostDownload:(unsigned char)arg1 ;
-(unsigned char)cellularPowerCostUpload;
-(void)setCellularPowerCostUpload:(unsigned char)arg1 ;
-(void)setCellularKnownGood:(BOOL)arg1 ;
-(unsigned char)cellularRadioTechnology;
-(void)setCellularRadioTechnology:(unsigned char)arg1 ;
-(void)setWifiKnownGood:(BOOL)arg1 ;
-(unsigned char)wifiRadioTechnology;
-(void)setWifiRadioTechnology:(unsigned char)arg1 ;
-(void)setCellularBandInfo:(int)arg1 ;
-(void)setCellularBandwidth:(int)arg1 ;
-(void)setCellularBars:(int)arg1 ;
-(BOOL)cellularKnownGood;
-(BOOL)wifiKnownGood;
-(int)cellularBandInfo;
-(NSString *)cellularCellType;
-(void)setCellularCellType:(NSString *)arg1 ;
-(int)cellularBandwidth;
-(int)cellularBars;
-(int)cellularLQM;
-(void)setCellularLQM:(int)arg1 ;
-(int)cellularMNC;
-(void)setCellularMNC:(int)arg1 ;
-(int)cellularMCC;
-(void)setCellularMCC:(int)arg1 ;
-(int)cellularUARFCN;
-(void)setCellularUARFCN:(int)arg1 ;
-(int)cellularPID;
-(void)setCellularPID:(int)arg1 ;
-(int)cellularTAC;
-(void)setCellularTAC:(int)arg1 ;
-(int)wifiLQM;
-(void)setWifiLQM:(int)arg1 ;
-(int)wifiRSSI;
-(void)setWifiRSSI:(int)arg1 ;
@end

