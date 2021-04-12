/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
*/


#import <IMFoundation/IMFoundation-Structs.h>
@class NSMutableArray;

@interface IMPerfProfiler : NSObject {

	NSMutableArray* _sinks;

}
+(id)instance;
-(id)init;
-(void)dealloc;
-(void)addSink:(id)arg1 withBehavior:(id)arg2 ;
-(void)logMeasurement:(IMPerfMeasurement_t*)arg1 ;
@end

