/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetricMeasurement.framework/MetricMeasurement
*/


@protocol OS_dispatch_queue;
#import <MetricMeasurement/MetricMeasurement-Structs.h>
@class NSArray, NSObject;

@interface MXMInstrument : NSObject {

	NSArray* _instrumentals;
	SCD_Struct_MX6* _currentIteration;
	NSObject*<OS_dispatch_queue> _instrumentalsQueue;

}

@property (assign) BOOL active; 
@property (assign) SCD_Struct_MX6* currentIteration;                               //@synthesize currentIteration=_currentIteration - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> instrumentalsQueue;              //@synthesize instrumentalsQueue=_instrumentalsQueue - In the implementation block
@property (nonatomic,readonly) NSArray * instrumentals;                            //@synthesize instrumentals=_instrumentals - In the implementation block
+(void)load;
+(id)activeInstrument;
+(id)instrumentWithInstrumentals:(id)arg1 ;
-(void)dealloc;
-(id)stop;
-(void)start;
-(void)setActive:(BOOL)arg1 ;
-(BOOL)active;
-(id)stopWithError:(id*)arg1 ;
-(BOOL)startWithError:(id*)arg1 ;
-(SCD_Struct_MX6*)currentIteration;
-(void)setCurrentIteration:(SCD_Struct_MX6*)arg1 ;
-(id)initWithInstrumentals:(id)arg1 ;
-(NSArray *)instrumentals;
-(NSObject*<OS_dispatch_queue>)instrumentalsQueue;
-(id)_makeInstrumentalsForIteration:(id)arg1 shouldCopy:(BOOL)arg2 ;
-(void)_prepareIteration:(SCD_Struct_MX6*)arg1 options:(id)arg2 instrumentals:(id)arg3 errors:(id)arg4 ;
-(id)_transitionWithState:(unsigned long long)arg1 iteration:(const SCD_Struct_MX6*)arg2 instrumentals:(id)arg3 ;
-(id)measureAutomatically:(unsigned long long)arg1 options:(id)arg2 block:(/*^block*/id)arg3 ;
-(id)_validOptionKeys;
-(id)_valueWithOption:(id)arg1 userOptions:(id)arg2 ;
-(void)_setupAndRunWithIteration:(SCD_Struct_MX6*)arg1 spawnThread:(BOOL)arg2 attrs:(opaque_pthread_attr_t*)arg3 pthread:(opaque_pthread_t*)arg4 returnCode:(unsigned long long*)arg5 ;
-(id)_defaultValueWithOption:(id)arg1 ;
-(id)measureBlock:(/*^block*/id)arg1 ;
-(id)measureWithOptions:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)measureAutomatically:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
@end

