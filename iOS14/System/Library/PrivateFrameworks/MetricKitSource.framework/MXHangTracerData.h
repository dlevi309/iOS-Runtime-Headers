/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetricKitSource.framework/MetricKitSource
*/

#import <MetricKitSource/MXSourceData.h>

@class MXHangDiagnostic;

@interface MXHangTracerData : MXSourceData {

	MXHangDiagnostic* _hangDiagnostic;

}

@property (retain) MXHangDiagnostic * hangDiagnostic;              //@synthesize hangDiagnostic=_hangDiagnostic - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initPayloadDataWithDiagnostics:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(MXHangDiagnostic *)hangDiagnostic;
-(void)setHangDiagnostic:(MXHangDiagnostic *)arg1 ;
@end

