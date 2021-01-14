/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
*/


#import <IMFoundation/IMFoundation-Structs.h>
@class NSMutableArray;

@interface IMPerfProfiler : NSObject {

	NSMutableArray* _sinks;

}
+(id)instance;
-(id)init;
-(void)addSink:(id)arg1 withBehavior:(id)arg2 ;
-(void)logMeasurement:(IMPerfMeasurement_t*)arg1 ;
@end

