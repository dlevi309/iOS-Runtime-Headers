/*
* Generated on Thursday, January 14, 2021 at 2:26:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetricKit.framework/MetricKit
*/

#import <MetricKit/MXDiagnostic.h>

@class MXCallStackTree, NSString, NSNumber;

@interface MXCrashDiagnostic : MXDiagnostic {

	MXCallStackTree* _callStackTree;
	NSString* _terminationReason;
	NSString* _virtualMemoryRegionInfo;
	NSNumber* _exceptionType;
	NSNumber* _exceptionCode;
	NSNumber* _signal;

}

@property (readonly) MXCallStackTree * callStackTree;                 //@synthesize callStackTree=_callStackTree - In the implementation block
@property (readonly) NSString * terminationReason;                    //@synthesize terminationReason=_terminationReason - In the implementation block
@property (readonly) NSString * virtualMemoryRegionInfo;              //@synthesize virtualMemoryRegionInfo=_virtualMemoryRegionInfo - In the implementation block
@property (readonly) NSNumber * exceptionType;                        //@synthesize exceptionType=_exceptionType - In the implementation block
@property (readonly) NSNumber * exceptionCode;                        //@synthesize exceptionCode=_exceptionCode - In the implementation block
@property (readonly) NSNumber * signal;                               //@synthesize signal=_signal - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)terminationReason;
-(void)encodeWithCoder:(id)arg1 ;
-(NSNumber *)exceptionCode;
-(NSNumber *)exceptionType;
-(id)initWithMetaData:(id)arg1 applicationVersion:(id)arg2 terminationReason:(id)arg3 applicationSpecificInfo:(id)arg4 virtualMemoryRegionInfo:(id)arg5 exceptionType:(id)arg6 exceptionCode:(id)arg7 signal:(id)arg8 stackTrace:(id)arg9 ;
-(id)toDictionary;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)signal;
-(MXCallStackTree *)callStackTree;
-(NSString *)virtualMemoryRegionInfo;
@end

