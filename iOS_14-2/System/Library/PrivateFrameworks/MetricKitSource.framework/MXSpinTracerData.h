/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetricKitSource.framework/MetricKitSource
*/

#import <MetricKitSource/MXSourceData.h>

@class MXCPUExceptionDiagnostic, MXDiskWriteExceptionDiagnostic;

@interface MXSpinTracerData : MXSourceData {

	MXCPUExceptionDiagnostic* _cpuExceptionDiagnostic;
	MXDiskWriteExceptionDiagnostic* _diskWriteExceptionDiagnostic;

}

@property (retain) MXCPUExceptionDiagnostic * cpuExceptionDiagnostic;                          //@synthesize cpuExceptionDiagnostic=_cpuExceptionDiagnostic - In the implementation block
@property (retain) MXDiskWriteExceptionDiagnostic * diskWriteExceptionDiagnostic;              //@synthesize diskWriteExceptionDiagnostic=_diskWriteExceptionDiagnostic - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initPayloadDataWithDiagnostics:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(MXCPUExceptionDiagnostic *)cpuExceptionDiagnostic;
-(MXDiskWriteExceptionDiagnostic *)diskWriteExceptionDiagnostic;
-(void)setCpuExceptionDiagnostic:(MXCPUExceptionDiagnostic *)arg1 ;
-(void)setDiskWriteExceptionDiagnostic:(MXDiskWriteExceptionDiagnostic *)arg1 ;
@end

