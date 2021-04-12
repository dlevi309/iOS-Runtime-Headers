/*
* Generated on Thursday, January 14, 2021 at 2:24:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
*/


#import <EmbeddedAcousticRecognition/EmbeddedAcousticRecognition-Structs.h>
@interface _EAREndpointer : NSObject {

	unique_ptr<quasar::HybridEndpointer, std::__1::default_delete<quasar::HybridEndpointer> >* _endpointer;

}
+(void)initialize;
-(id)initWithConfiguration:(id)arg1 ;
-(id)defaultServerEndpointFeatures;
-(BOOL)requestSupportedWithSamplingRate:(unsigned long long)arg1 ;
-(void)updateEndpointerThresholdWithValue:(float)arg1 ;
-(BOOL)didEndpointWithFeatures:(id)arg1 audioTimestamp:(double)arg2 featuresToLog:(id*)arg3 endpointPosterior:(float*)arg4 extraDelayMs:(int*)arg5 ;
-(id)initWithConfiguration:(id)arg1 modelVersion:(id*)arg2 ;
-(void)updateEndpointerDelayedTriggerSwitch:(BOOL)arg1 ;
-(BOOL)acceptEagerResultWithFeatures:(id)arg1 featuresToLog:(id*)arg2 ;
-(id)initWithConfiguration:(id)arg1 delaysTrigger:(BOOL)arg2 modelVersion:(id*)arg3 ;
@end

