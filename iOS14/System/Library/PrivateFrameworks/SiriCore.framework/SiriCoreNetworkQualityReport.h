/*
* Generated on Thursday, January 14, 2021 at 2:28:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
*/


@interface SiriCoreNetworkQualityReport : NSObject {

	long long _cellularInstant;
	long long _cellularHistorical;
	long long _wifiInstant;
	long long _wifiHistorical;

}

@property (assign,nonatomic) long long cellularInstant;                 //@synthesize cellularInstant=_cellularInstant - In the implementation block
@property (assign,nonatomic) long long cellularHistorical;              //@synthesize cellularHistorical=_cellularHistorical - In the implementation block
@property (assign,nonatomic) long long wifiInstant;                     //@synthesize wifiInstant=_wifiInstant - In the implementation block
@property (assign,nonatomic) long long wifiHistorical;                  //@synthesize wifiHistorical=_wifiHistorical - In the implementation block
-(void)setCellularInstant:(long long)arg1 ;
-(void)setCellularHistorical:(long long)arg1 ;
-(void)setWifiInstant:(long long)arg1 ;
-(void)setWifiHistorical:(long long)arg1 ;
-(long long)cellularInstant;
-(long long)cellularHistorical;
-(long long)wifiInstant;
-(long long)wifiHistorical;
@end

