/*
* Generated on Thursday, January 14, 2021 at 2:26:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetricKit.framework/MetricKit
*/

#import <MetricKit/MXDiagnostic.h>

@class MXCallStackTree, NSMeasurement;

@interface MXCPUExceptionDiagnostic : MXDiagnostic {

	MXCallStackTree* _callStackTree;
	NSMeasurement* _totalCPUTime;
	NSMeasurement* _totalSampledTime;

}

@property (readonly) MXCallStackTree * callStackTree;               //@synthesize callStackTree=_callStackTree - In the implementation block
@property (readonly) NSMeasurement * totalCPUTime;                  //@synthesize totalCPUTime=_totalCPUTime - In the implementation block
@property (readonly) NSMeasurement * totalSampledTime;              //@synthesize totalSampledTime=_totalSampledTime - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)toDictionary;
-(id)initWithCoder:(id)arg1 ;
-(MXCallStackTree *)callStackTree;
-(id)initWithMetaData:(id)arg1 applicationVersion:(id)arg2 callStack:(id)arg3 totalCpuTime:(id)arg4 totalSampledTime:(id)arg5 ;
-(NSMeasurement *)totalCPUTime;
-(NSMeasurement *)totalSampledTime;
@end

