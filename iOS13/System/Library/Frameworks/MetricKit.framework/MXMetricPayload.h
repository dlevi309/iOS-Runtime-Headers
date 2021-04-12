/*
* Generated on Monday, March 1, 2021 at 2:34:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MetricKit.framework/MetricKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, MXCPUMetric, MXGPUMetric, MXCellularConditionMetric, MXAppRunTimeMetric, MXLocationActivityMetric, MXNetworkTransferMetric, MXAppLaunchMetric, MXAppResponsivenessMetric, MXDiskIOMetric, MXMemoryMetric, MXDisplayMetric, NSArray, MXMetaData;

@interface MXMetricPayload : NSObject <NSSecureCoding> {

	BOOL _includesMultipleApplicationVersions;
	NSString* _latestApplicationVersion;
	NSDate* _timeStampBegin;
	NSDate* _timeStampEnd;
	MXCPUMetric* _cpuMetrics;
	MXGPUMetric* _gpuMetrics;
	MXCellularConditionMetric* _cellularConditionMetrics;
	MXAppRunTimeMetric* _applicationTimeMetrics;
	MXLocationActivityMetric* _locationActivityMetrics;
	MXNetworkTransferMetric* _networkTransferMetrics;
	MXAppLaunchMetric* _applicationLaunchMetrics;
	MXAppResponsivenessMetric* _applicationResponsivenessMetrics;
	MXDiskIOMetric* _diskIOMetrics;
	MXMemoryMetric* _memoryMetrics;
	MXDisplayMetric* _displayMetrics;
	NSArray* _signpostMetrics;
	MXMetaData* _metaData;

}

@property (retain) MXCPUMetric * cpuMetrics;                                                  //@synthesize cpuMetrics=_cpuMetrics - In the implementation block
@property (retain) MXGPUMetric * gpuMetrics;                                                  //@synthesize gpuMetrics=_gpuMetrics - In the implementation block
@property (retain) MXCellularConditionMetric * cellularConditionMetrics;                      //@synthesize cellularConditionMetrics=_cellularConditionMetrics - In the implementation block
@property (retain) MXAppRunTimeMetric * applicationTimeMetrics;                               //@synthesize applicationTimeMetrics=_applicationTimeMetrics - In the implementation block
@property (retain) MXLocationActivityMetric * locationActivityMetrics;                        //@synthesize locationActivityMetrics=_locationActivityMetrics - In the implementation block
@property (retain) MXNetworkTransferMetric * networkTransferMetrics;                          //@synthesize networkTransferMetrics=_networkTransferMetrics - In the implementation block
@property (retain) MXAppLaunchMetric * applicationLaunchMetrics;                              //@synthesize applicationLaunchMetrics=_applicationLaunchMetrics - In the implementation block
@property (retain) MXAppResponsivenessMetric * applicationResponsivenessMetrics;              //@synthesize applicationResponsivenessMetrics=_applicationResponsivenessMetrics - In the implementation block
@property (retain) MXDiskIOMetric * diskIOMetrics;                                            //@synthesize diskIOMetrics=_diskIOMetrics - In the implementation block
@property (retain) MXMemoryMetric * memoryMetrics;                                            //@synthesize memoryMetrics=_memoryMetrics - In the implementation block
@property (retain) MXDisplayMetric * displayMetrics;                                          //@synthesize displayMetrics=_displayMetrics - In the implementation block
@property (retain) NSArray * signpostMetrics;                                                 //@synthesize signpostMetrics=_signpostMetrics - In the implementation block
@property (retain) MXMetaData * metaData;                                                     //@synthesize metaData=_metaData - In the implementation block
@property (readonly) NSString * latestApplicationVersion;                                     //@synthesize latestApplicationVersion=_latestApplicationVersion - In the implementation block
@property (readonly) BOOL includesMultipleApplicationVersions;                                //@synthesize includesMultipleApplicationVersions=_includesMultipleApplicationVersions - In the implementation block
@property (readonly) NSDate * timeStampBegin;                                                 //@synthesize timeStampBegin=_timeStampBegin - In the implementation block
@property (readonly) NSDate * timeStampEnd;                                                   //@synthesize timeStampEnd=_timeStampEnd - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(MXMetaData *)metaData;
-(void)setMetaData:(MXMetaData *)arg1 ;
-(id)toDictionary;
-(MXDisplayMetric *)displayMetrics;
-(void)setDisplayMetrics:(MXDisplayMetric *)arg1 ;
-(id)JSONRepresentation;
-(id)DictionaryRepresentation;
-(id)initWithPayloadData:(id)arg1 withMutipleAppVersions:(BOOL)arg2 withTimeStampBegin:(id)arg3 withTimeStampEnd:(id)arg4 withMetaData:(id)arg5 withMetrics:(id)arg6 ;
-(id)initWithAppVersion:(id)arg1 withMutipleAppVersions:(BOOL)arg2 withTimeStampBegin:(id)arg3 withTimeStampEnd:(id)arg4 ;
-(NSString *)latestApplicationVersion;
-(BOOL)includesMultipleApplicationVersions;
-(NSDate *)timeStampBegin;
-(NSDate *)timeStampEnd;
-(MXCPUMetric *)cpuMetrics;
-(void)setCpuMetrics:(MXCPUMetric *)arg1 ;
-(MXGPUMetric *)gpuMetrics;
-(void)setGpuMetrics:(MXGPUMetric *)arg1 ;
-(MXCellularConditionMetric *)cellularConditionMetrics;
-(void)setCellularConditionMetrics:(MXCellularConditionMetric *)arg1 ;
-(MXAppRunTimeMetric *)applicationTimeMetrics;
-(void)setApplicationTimeMetrics:(MXAppRunTimeMetric *)arg1 ;
-(MXLocationActivityMetric *)locationActivityMetrics;
-(void)setLocationActivityMetrics:(MXLocationActivityMetric *)arg1 ;
-(MXNetworkTransferMetric *)networkTransferMetrics;
-(void)setNetworkTransferMetrics:(MXNetworkTransferMetric *)arg1 ;
-(MXAppLaunchMetric *)applicationLaunchMetrics;
-(void)setApplicationLaunchMetrics:(MXAppLaunchMetric *)arg1 ;
-(MXAppResponsivenessMetric *)applicationResponsivenessMetrics;
-(void)setApplicationResponsivenessMetrics:(MXAppResponsivenessMetric *)arg1 ;
-(MXDiskIOMetric *)diskIOMetrics;
-(void)setDiskIOMetrics:(MXDiskIOMetric *)arg1 ;
-(MXMemoryMetric *)memoryMetrics;
-(void)setMemoryMetrics:(MXMemoryMetric *)arg1 ;
-(NSArray *)signpostMetrics;
-(void)setSignpostMetrics:(NSArray *)arg1 ;
@end

