/*
* Generated on Thursday, January 14, 2021 at 2:28:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NetworkStatistics.framework/NetworkStatistics
*/

#import <NetworkStatistics/NetworkStatistics-Structs.h>
#import <NetworkStatistics/NWSSnapshot.h>

@class NSString;

@interface NWSInterfaceSnapshot : NWSSnapshot {

	NSString* _interfaceName;
	NSString* _interfaceDescription;
	nstat_ifnet_descriptor _descriptor;
	unsigned long long _linkQualityMetric;
	unsigned long long _ulMaxBandwidth;
	unsigned long long _ulEffectiveBandwidth;
	unsigned long long _ulBytesLost;
	unsigned long long _ulMinLatency;
	unsigned long long _ulEffectiveLatency;
	unsigned long long _ulMaxLatency;
	unsigned long long _ulReTxtLevel;
	unsigned long long _dlMaxBandwidth;
	unsigned long long _dlEffectiveBandwidth;
	unsigned long long _cellUlMinQueueSize;
	unsigned long long _cellUlAvgQueueSize;
	unsigned long long _cellUlMaxQueueSize;
	unsigned long long _cellConfigInactivityTime;
	unsigned long long _cellConfigBackoffTime;
	unsigned long long _wifiUlErrorRate;
	unsigned long long _wifiDlMinLatency;
	unsigned long long _wifiDlEffectiveLatency;
	unsigned long long _wifiDlMaxLatency;
	unsigned long long _wifiDlErrorRate;
	unsigned long long _wifiConfigFrequency;
	unsigned long long _wifiConfigMulticastRate;
	unsigned long long _wifiScanCount;
	unsigned long long _wifiScanDuration;

}

@property (assign) unsigned long long linkQualityMetric;                     //@synthesize linkQualityMetric=_linkQualityMetric - In the implementation block
@property (assign) unsigned long long ulMaxBandwidth;                        //@synthesize ulMaxBandwidth=_ulMaxBandwidth - In the implementation block
@property (assign) unsigned long long ulEffectiveBandwidth;                  //@synthesize ulEffectiveBandwidth=_ulEffectiveBandwidth - In the implementation block
@property (assign) unsigned long long ulBytesLost;                           //@synthesize ulBytesLost=_ulBytesLost - In the implementation block
@property (assign) unsigned long long ulMinLatency;                          //@synthesize ulMinLatency=_ulMinLatency - In the implementation block
@property (assign) unsigned long long ulEffectiveLatency;                    //@synthesize ulEffectiveLatency=_ulEffectiveLatency - In the implementation block
@property (assign) unsigned long long ulMaxLatency;                          //@synthesize ulMaxLatency=_ulMaxLatency - In the implementation block
@property (assign) unsigned long long ulReTxtLevel;                          //@synthesize ulReTxtLevel=_ulReTxtLevel - In the implementation block
@property (assign) unsigned long long dlMaxBandwidth;                        //@synthesize dlMaxBandwidth=_dlMaxBandwidth - In the implementation block
@property (assign) unsigned long long dlEffectiveBandwidth;                  //@synthesize dlEffectiveBandwidth=_dlEffectiveBandwidth - In the implementation block
@property (assign) unsigned long long cellUlMinQueueSize;                    //@synthesize cellUlMinQueueSize=_cellUlMinQueueSize - In the implementation block
@property (assign) unsigned long long cellUlAvgQueueSize;                    //@synthesize cellUlAvgQueueSize=_cellUlAvgQueueSize - In the implementation block
@property (assign) unsigned long long cellUlMaxQueueSize;                    //@synthesize cellUlMaxQueueSize=_cellUlMaxQueueSize - In the implementation block
@property (assign) unsigned long long cellConfigInactivityTime;              //@synthesize cellConfigInactivityTime=_cellConfigInactivityTime - In the implementation block
@property (assign) unsigned long long cellConfigBackoffTime;                 //@synthesize cellConfigBackoffTime=_cellConfigBackoffTime - In the implementation block
@property (assign) unsigned long long wifiUlErrorRate;                       //@synthesize wifiUlErrorRate=_wifiUlErrorRate - In the implementation block
@property (assign) unsigned long long wifiDlMinLatency;                      //@synthesize wifiDlMinLatency=_wifiDlMinLatency - In the implementation block
@property (assign) unsigned long long wifiDlEffectiveLatency;                //@synthesize wifiDlEffectiveLatency=_wifiDlEffectiveLatency - In the implementation block
@property (assign) unsigned long long wifiDlMaxLatency;                      //@synthesize wifiDlMaxLatency=_wifiDlMaxLatency - In the implementation block
@property (assign) unsigned long long wifiDlErrorRate;                       //@synthesize wifiDlErrorRate=_wifiDlErrorRate - In the implementation block
@property (assign) unsigned long long wifiConfigFrequency;                   //@synthesize wifiConfigFrequency=_wifiConfigFrequency - In the implementation block
@property (assign) unsigned long long wifiConfigMulticastRate;               //@synthesize wifiConfigMulticastRate=_wifiConfigMulticastRate - In the implementation block
@property (assign) unsigned long long wifiScanCount;                         //@synthesize wifiScanCount=_wifiScanCount - In the implementation block
@property (assign) unsigned long long wifiScanDuration;                      //@synthesize wifiScanDuration=_wifiScanDuration - In the implementation block
@property (readonly) NSString * interfaceName; 
@property (readonly) NSString * interfaceDescription; 
@property (readonly) unsigned interfaceType; 
@property (readonly) unsigned interfaceIndex; 
@property (readonly) unsigned long long threshold; 
-(unsigned long long)threshold;
-(void)_invalidateCommonCounts;
-(unsigned long long)cellConfigInactivityTime;
-(unsigned)interfaceIndex;
-(void)_handleDescriptor:(nstat_ifnet_descriptor*)arg1 ;
-(void)setUlReTxtLevel:(unsigned long long)arg1 ;
-(unsigned)interfaceType;
-(unsigned long long)ulReTxtLevel;
-(unsigned long long)wifiDlErrorRate;
-(void)setUlMinLatency:(unsigned long long)arg1 ;
-(void)setLinkQualityMetric:(unsigned long long)arg1 ;
-(unsigned long long)wifiDlEffectiveLatency;
-(unsigned long long)ulMinLatency;
-(unsigned long long)wifiConfigFrequency;
-(unsigned long long)ulEffectiveLatency;
-(void)setWifiDlErrorRate:(unsigned long long)arg1 ;
-(void)setDlMaxBandwidth:(unsigned long long)arg1 ;
-(void)setWifiConfigMulticastRate:(unsigned long long)arg1 ;
-(void)setWifiDlMinLatency:(unsigned long long)arg1 ;
-(unsigned long long)wifiScanDuration;
-(id)provider;
-(unsigned long long)dlMaxBandwidth;
-(void)setUlEffectiveLatency:(unsigned long long)arg1 ;
-(void)setWifiScanCount:(unsigned long long)arg1 ;
-(id)traditionalDictionary;
-(void)setUlMaxBandwidth:(unsigned long long)arg1 ;
-(unsigned long long)wifiDlMaxLatency;
-(unsigned long long)wifiDlMinLatency;
-(void)_handleCellExtra:(nstat_ifnet_desc_cellular_status*)arg1 ;
-(unsigned long long)wifiUlErrorRate;
-(void)setCellConfigBackoffTime:(unsigned long long)arg1 ;
-(unsigned long long)ulMaxBandwidth;
-(unsigned long long)cellUlMinQueueSize;
-(void)setCellUlMaxQueueSize:(unsigned long long)arg1 ;
-(void)setDlEffectiveBandwidth:(unsigned long long)arg1 ;
-(NSString *)interfaceName;
-(void)setUlMaxLatency:(unsigned long long)arg1 ;
-(void)_handleWifiExtra:(nstat_ifnet_desc_wifi_status*)arg1 ;
-(void)setCellConfigInactivityTime:(unsigned long long)arg1 ;
-(void)setCellUlAvgQueueSize:(unsigned long long)arg1 ;
-(unsigned long long)linkQualityMetric;
-(id)description;
-(void)setWifiDlMaxLatency:(unsigned long long)arg1 ;
-(void)_invalidateAllExtraCounts;
-(void)setWifiDlEffectiveLatency:(unsigned long long)arg1 ;
-(unsigned long long)wifiConfigMulticastRate;
-(void)setWifiUlErrorRate:(unsigned long long)arg1 ;
-(unsigned long long)ulBytesLost;
-(unsigned long long)wifiScanCount;
-(unsigned long long)cellUlAvgQueueSize;
-(unsigned long long)ulEffectiveBandwidth;
-(void)_invalidateCellCounts;
-(unsigned long long)ulMaxLatency;
-(id)initWithCounts:(const nstat_counts*)arg1 interfaceDescriptor:(nstat_ifnet_descriptor*)arg2 sourceIdent:(unsigned long long)arg3 seqno:(unsigned long long)arg4 ;
-(void)_invalidateWifiCounts;
-(unsigned long long)dlEffectiveBandwidth;
-(void)setCellUlMinQueueSize:(unsigned long long)arg1 ;
-(NSString *)interfaceDescription;
-(unsigned long long)cellConfigBackoffTime;
-(unsigned long long)cellUlMaxQueueSize;
-(void)setWifiConfigFrequency:(unsigned long long)arg1 ;
-(void)setWifiScanDuration:(unsigned long long)arg1 ;
-(void)setUlEffectiveBandwidth:(unsigned long long)arg1 ;
-(void)setUlBytesLost:(unsigned long long)arg1 ;
@end

