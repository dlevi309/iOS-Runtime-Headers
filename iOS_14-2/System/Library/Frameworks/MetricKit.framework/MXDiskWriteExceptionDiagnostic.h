/*
* Generated on Thursday, January 14, 2021 at 2:26:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetricKit.framework/MetricKit
*/

#import <MetricKit/MXDiagnostic.h>

@class MXCallStackTree, NSMeasurement;

@interface MXDiskWriteExceptionDiagnostic : MXDiagnostic {

	MXCallStackTree* _callStackTree;
	NSMeasurement* _totalWritesCaused;

}

@property (readonly) MXCallStackTree * callStackTree;                //@synthesize callStackTree=_callStackTree - In the implementation block
@property (readonly) NSMeasurement * totalWritesCaused;              //@synthesize totalWritesCaused=_totalWritesCaused - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)toDictionary;
-(id)initWithCoder:(id)arg1 ;
-(MXCallStackTree *)callStackTree;
-(id)initWithMetaData:(id)arg1 applicationVersion:(id)arg2 totalWritesCaused:(id)arg3 stackTrace:(id)arg4 ;
-(NSMeasurement *)totalWritesCaused;
@end

