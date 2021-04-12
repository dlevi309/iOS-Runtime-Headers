/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetricKitSource.framework/MetricKitSource
*/

#import <MetricKitSource/MXSourceData.h>

@class MXCPUMetric, MXGPUMetric, MXCellularConditionMetric, MXAppRunTimeMetric, MXLocationActivityMetric, MXNetworkTransferMetric, MXAppLaunchMetric, MXAppResponsivenessMetric, MXResourceExceptionMetric, MXDiskIOMetric, MXMemoryMetric, MXDisplayMetric, NSArray;

@interface MXPowerlogData : MXSourceData {

	BOOL _includesMultipleApplicationVersions;
	MXCPUMetric* _cpuMetrics;
	MXGPUMetric* _gpuMetrics;
	MXCellularConditionMetric* _cellularConditionMetrics;
	MXAppRunTimeMetric* _applicationTimeMetrics;
	MXLocationActivityMetric* _locationActivityMetrics;
	MXNetworkTransferMetric* _networkTransferMetrics;
	MXAppLaunchMetric* _applicationLaunchMetrics;
	MXAppResponsivenessMetric* _applicationResponsivenessMetrics;
	MXResourceExceptionMetric* _applicationResourceExceptionMetrics;
	MXDiskIOMetric* _diskIOMetrics;
	MXMemoryMetric* _memoryMetrics;
	MXDisplayMetric* _displayMetrics;
	NSArray* _signpostMetrics;

}

@property (assign) BOOL includesMultipleApplicationVersions;                                     //@synthesize includesMultipleApplicationVersions=_includesMultipleApplicationVersions - In the implementation block
@property (retain) MXCPUMetric * cpuMetrics;                                                     //@synthesize cpuMetrics=_cpuMetrics - In the implementation block
@property (retain) MXGPUMetric * gpuMetrics;                                                     //@synthesize gpuMetrics=_gpuMetrics - In the implementation block
@property (retain) MXCellularConditionMetric * cellularConditionMetrics;                         //@synthesize cellularConditionMetrics=_cellularConditionMetrics - In the implementation block
@property (retain) MXAppRunTimeMetric * applicationTimeMetrics;                                  //@synthesize applicationTimeMetrics=_applicationTimeMetrics - In the implementation block
@property (retain) MXLocationActivityMetric * locationActivityMetrics;                           //@synthesize locationActivityMetrics=_locationActivityMetrics - In the implementation block
@property (retain) MXNetworkTransferMetric * networkTransferMetrics;                             //@synthesize networkTransferMetrics=_networkTransferMetrics - In the implementation block
@property (retain) MXAppLaunchMetric * applicationLaunchMetrics;                                 //@synthesize applicationLaunchMetrics=_applicationLaunchMetrics - In the implementation block
@property (retain) MXAppResponsivenessMetric * applicationResponsivenessMetrics;                 //@synthesize applicationResponsivenessMetrics=_applicationResponsivenessMetrics - In the implementation block
@property (retain) MXResourceExceptionMetric * applicationResourceExceptionMetrics;              //@synthesize applicationResourceExceptionMetrics=_applicationResourceExceptionMetrics - In the implementation block
@property (retain) MXDiskIOMetric * diskIOMetrics;                                               //@synthesize diskIOMetrics=_diskIOMetrics - In the implementation block
@property (retain) MXMemoryMetric * memoryMetrics;                                               //@synthesize memoryMetrics=_memoryMetrics - In the implementation block
@property (retain) MXDisplayMetric * displayMetrics;                                             //@synthesize displayMetrics=_displayMetrics - In the implementation block
@property (retain) NSArray * signpostMetrics;                                                    //@synthesize signpostMetrics=_signpostMetrics - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(MXDisplayMetric *)displayMetrics;
-(void)setDisplayMetrics:(MXDisplayMetric *)arg1 ;
-(BOOL)includesMultipleApplicationVersions;
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
-(id)initPayloadDataWithMutipleAppVersions:(BOOL)arg1 withTimeStampBegin:(id)arg2 withTimeStampEnd:(id)arg3 withMetrics:(id)arg4 ;
-(void)setIncludesMultipleApplicationVersions:(BOOL)arg1 ;
-(MXResourceExceptionMetric *)applicationResourceExceptionMetrics;
-(void)setApplicationResourceExceptionMetrics:(MXResourceExceptionMetric *)arg1 ;
@end

