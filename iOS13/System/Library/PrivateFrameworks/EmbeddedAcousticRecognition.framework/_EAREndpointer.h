/*
* Generated on Monday, March 1, 2021 at 2:32:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
*/


#import <EmbeddedAcousticRecognition/EmbeddedAcousticRecognition-Structs.h>
@interface _EAREndpointer : NSObject {

	unique_ptr<quasar::HybridEndpointer, std::__1::default_delete<quasar::HybridEndpointer> >* _endpointer;

}
+(void)initialize;
-(id)initWithConfiguration:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 modelVersion:(id*)arg2 ;
-(id)initWithConfiguration:(id)arg1 delaysTrigger:(BOOL)arg2 modelVersion:(id*)arg3 ;
-(BOOL)requestSupportedWithSamplingRate:(unsigned long long)arg1 ;
-(void)updateEndpointerThresholdWithValue:(float)arg1 ;
-(void)updateEndpointerDelayedTriggerSwitch:(BOOL)arg1 ;
-(BOOL)didEndpointWithFeatures:(id)arg1 audioTimestamp:(double)arg2 featuresToLog:(id*)arg3 endpointPosterior:(float*)arg4 extraDelayMs:(int*)arg5 ;
-(id)defaultServerEndpointFeatures;
-(BOOL)acceptEagerResultWithFeatures:(id)arg1 featuresToLog:(id*)arg2 ;
@end

