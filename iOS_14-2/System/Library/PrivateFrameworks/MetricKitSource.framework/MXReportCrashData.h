/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetricKitSource.framework/MetricKitSource
*/

#import <MetricKitSource/MXSourceData.h>

@class MXCrashDiagnostic;

@interface MXReportCrashData : MXSourceData {

	MXCrashDiagnostic* _crashDiagnostic;

}

@property (retain) MXCrashDiagnostic * crashDiagnostic;              //@synthesize crashDiagnostic=_crashDiagnostic - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initPayloadDataWithDiagnostics:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(MXCrashDiagnostic *)crashDiagnostic;
-(void)setCrashDiagnostic:(MXCrashDiagnostic *)arg1 ;
@end

