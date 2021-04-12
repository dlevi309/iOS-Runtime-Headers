/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuetContext.framework/CoreDuetContext
*/


@interface _CDNetworkContext : NSObject
+(id)connectionQualityKey;
+(id)keyPathForWiredConnectionStatus;
+(id)keyPathForWiFiConnectionStatus;
+(id)keyPathForCellConnectionStatus;
+(long long)wifiQuality:(id)arg1 ;
+(long long)wiredQuality:(id)arg1 ;
+(BOOL)inexpensiveNetworkingAvailable:(id)arg1 ;
+(long long)cellQuality:(id)arg1 ;
+(id)interfaceUpKey;
+(id)downloadPowerCostKey;
+(id)uploadPowerCostKey;
+(id)loiKey;
+(id)predictionKey;
+(long long)qualityForPath:(id)arg1 inContext:(id)arg2 ;
+(BOOL)networkingAvailable:(id)arg1 ;
+(BOOL)cellInterfaceUp:(id)arg1 ;
+(long long)cellDownloadCost:(id)arg1 ;
+(long long)cellUploadCost:(id)arg1 ;
@end

