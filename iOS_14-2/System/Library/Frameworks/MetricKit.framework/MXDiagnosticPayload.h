/*
* Generated on Thursday, January 14, 2021 at 2:26:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetricKit.framework/MetricKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSDate;

@interface MXDiagnosticPayload : NSObject <NSSecureCoding> {

	NSArray* _cpuExceptionDiagnostics;
	NSArray* _diskWriteExceptionDiagnostics;
	NSArray* _hangDiagnostics;
	NSArray* _crashDiagnostics;
	NSDate* _timeStampBegin;
	NSDate* _timeStampEnd;

}

@property (readonly) NSArray * cpuExceptionDiagnostics;                    //@synthesize cpuExceptionDiagnostics=_cpuExceptionDiagnostics - In the implementation block
@property (readonly) NSArray * diskWriteExceptionDiagnostics;              //@synthesize diskWriteExceptionDiagnostics=_diskWriteExceptionDiagnostics - In the implementation block
@property (readonly) NSArray * hangDiagnostics;                            //@synthesize hangDiagnostics=_hangDiagnostics - In the implementation block
@property (readonly) NSArray * crashDiagnostics;                           //@synthesize crashDiagnostics=_crashDiagnostics - In the implementation block
@property (readonly) NSDate * timeStampBegin;                              //@synthesize timeStampBegin=_timeStampBegin - In the implementation block
@property (readonly) NSDate * timeStampEnd;                                //@synthesize timeStampEnd=_timeStampEnd - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)dictionaryRepresentation;
-(id)JSONRepresentation;
-(void)encodeWithCoder:(id)arg1 ;
-(id)toDictionary;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)timeStampBegin;
-(NSDate *)timeStampEnd;
-(id)initWithTimeStampBegin:(id)arg1 withTimeStampEnd:(id)arg2 withDiagnostics:(id)arg3 ;
-(NSArray *)cpuExceptionDiagnostics;
-(NSArray *)diskWriteExceptionDiagnostics;
-(NSArray *)hangDiagnostics;
-(NSArray *)crashDiagnostics;
@end

