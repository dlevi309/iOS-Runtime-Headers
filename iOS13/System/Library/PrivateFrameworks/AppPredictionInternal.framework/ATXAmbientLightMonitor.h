/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@protocol OS_dispatch_queue;
#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
@class NSObject, NSMutableArray;

@interface ATXAmbientLightMonitor : NSObject {

	IOHIDEventSystemClientRef _client;
	IOHIDServiceClientRef _sender;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _sampledAmbientLightValues;
	int _sampledAmbientLightValuesCurrentIndex;
	double _lastSampleTimestamp;

}
+(id)sharedInstance;
+(int)getAmbientLightTypeForXValue:(double)arg1 YValue:(double)arg2 ZValue:(double)arg3 ;
-(id)init;
-(void)dealloc;
-(void)start;
-(id)initWithoutMonitoring;
-(int)getCurrentAmbientLightType;
-(void)addSampleWithXValue:(id)arg1 YValue:(id)arg2 ZValue:(id)arg3 ;
-(id)getCurrentSampledValues;
@end

