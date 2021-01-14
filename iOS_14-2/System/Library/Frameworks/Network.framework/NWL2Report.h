/*
* Generated on Thursday, January 14, 2021 at 2:22:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Network.framework/Network
*/


@class NSString;

@interface NWL2Report : NSObject {

	BOOL _cellularKnownGood;
	unsigned char _cellularRadioTechnology;
	unsigned char _cellularBand;
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
	unsigned _cellularMode;
	int _wifiLQM;
	int _wifiRSSI;
	NSString* _cellularCellType;

}

@property (assign,nonatomic) int cellularLQM;                                    //@synthesize cellularLQM=_cellularLQM - In the implementation block
@property (assign,nonatomic) BOOL cellularKnownGood;                             //@synthesize cellularKnownGood=_cellularKnownGood - In the implementation block
@property (assign,nonatomic) unsigned char cellularRadioTechnology;              //@synthesize cellularRadioTechnology=_cellularRadioTechnology - In the implementation block
@property (assign,nonatomic) int cellularMNC;                                    //@synthesize cellularMNC=_cellularMNC - In the implementation block
@property (assign,nonatomic) int cellularMCC;                                    //@synthesize cellularMCC=_cellularMCC - In the implementation block
@property (assign,nonatomic) int cellularUARFCN;                                 //@synthesize cellularUARFCN=_cellularUARFCN - In the implementation block
@property (assign,nonatomic) int cellularPID;                                    //@synthesize cellularPID=_cellularPID - In the implementation block
@property (assign,nonatomic) int cellularBandInfo;                               //@synthesize cellularBandInfo=_cellularBandInfo - In the implementation block
@property (nonatomic,retain) NSString * cellularCellType;                        //@synthesize cellularCellType=_cellularCellType - In the implementation block
@property (assign,nonatomic) int cellularBandwidth;                              //@synthesize cellularBandwidth=_cellularBandwidth - In the implementation block
@property (assign,nonatomic) int cellularTAC;                                    //@synthesize cellularTAC=_cellularTAC - In the implementation block
@property (assign,nonatomic) int cellularBars;                                   //@synthesize cellularBars=_cellularBars - In the implementation block
@property (assign,nonatomic) unsigned char cellularBand;                         //@synthesize cellularBand=_cellularBand - In the implementation block
@property (assign,nonatomic) unsigned cellularMode;                              //@synthesize cellularMode=_cellularMode - In the implementation block
@property (assign,nonatomic) int wifiLQM;                                        //@synthesize wifiLQM=_wifiLQM - In the implementation block
@property (assign,nonatomic) int wifiRSSI;                                       //@synthesize wifiRSSI=_wifiRSSI - In the implementation block
@property (assign,nonatomic) BOOL wifiKnownGood;                                 //@synthesize wifiKnownGood=_wifiKnownGood - In the implementation block
@property (assign,nonatomic) unsigned char wifiRadioTechnology;                  //@synthesize wifiRadioTechnology=_wifiRadioTechnology - In the implementation block
-(void)setCellularBandwidth:(int)arg1 ;
-(NSString *)cellularCellType;
-(void)setWifiRSSI:(int)arg1 ;
-(void)setWifiLQM:(int)arg1 ;
-(void)setCellularBandInfo:(int)arg1 ;
-(void)setCellularBars:(int)arg1 ;
-(int)cellularBars;
-(unsigned)cellularMode;
-(void)setCellularLQM:(int)arg1 ;
-(void)setWifiRadioTechnology:(unsigned char)arg1 ;
-(void)setCellularMode:(unsigned)arg1 ;
-(int)cellularTAC;
-(int)cellularLQM;
-(BOOL)wifiKnownGood;
-(int)wifiRSSI;
-(int)wifiLQM;
-(id)description;
-(void)setCellularMCC:(int)arg1 ;
-(void)setCellularCellType:(NSString *)arg1 ;
-(int)cellularBandInfo;
-(unsigned char)wifiRadioTechnology;
-(void)setCellularBand:(unsigned char)arg1 ;
-(void)setCellularRadioTechnology:(unsigned char)arg1 ;
-(void)setCellularTAC:(int)arg1 ;
-(void)setCellularMNC:(int)arg1 ;
-(void)setCellularPID:(int)arg1 ;
-(int)cellularMNC;
-(int)cellularMCC;
-(BOOL)cellularKnownGood;
-(void)setCellularUARFCN:(int)arg1 ;
-(int)cellularPID;
-(void)setCellularKnownGood:(BOOL)arg1 ;
-(void)setWifiKnownGood:(BOOL)arg1 ;
-(unsigned char)cellularRadioTechnology;
-(id)createAWDReport;
-(unsigned char)cellularBand;
-(int)cellularBandwidth;
-(int)cellularUARFCN;
@end

