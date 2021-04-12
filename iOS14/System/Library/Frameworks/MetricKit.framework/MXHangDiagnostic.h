/*
* Generated on Thursday, January 14, 2021 at 2:26:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetricKit.framework/MetricKit
*/

#import <MetricKit/MXDiagnostic.h>

@class MXCallStackTree, NSMeasurement;

@interface MXHangDiagnostic : MXDiagnostic {

	MXCallStackTree* _callStackTree;
	NSMeasurement* _hangDuration;

}

@property (readonly) MXCallStackTree * callStackTree;              //@synthesize callStackTree=_callStackTree - In the implementation block
@property (readonly) NSMeasurement * hangDuration;                 //@synthesize hangDuration=_hangDuration - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)toDictionary;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithMetaData:(id)arg1 applicationVersion:(id)arg2 callStack:(id)arg3 hangDuration:(id)arg4 ;
-(MXCallStackTree *)callStackTree;
-(NSMeasurement *)hangDuration;
@end

