/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
*/

#import <IMFoundation/IMFoundation-Structs.h>
#import <IMFoundation/IMPerfProfilerSink.h>

@class NSString;

@interface IMPerfNSLogProfilerSink : NSObject <IMPerfProfilerSink>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instance;
-(void)perfProfiler:(id)arg1 measurementDidFinish:(IMPerfMeasurement_t*)arg2 ;
@end

