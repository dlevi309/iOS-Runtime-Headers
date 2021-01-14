/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@protocol BWNoiseReductionAndFusionProcessorController <NSObject>
@required
+(id)new;
-(id)init;
-(BOOL)finishProcessingCurrentInputNow;
-(int)enqueueInputForProcessing:(id)arg1 delegate:(id)arg2 processErrorRecoveryFrame:(BOOL)arg3 processOriginalImage:(BOOL)arg4 clientBracketSequenceNumber:(int)arg5;
-(id)adaptiveBracketingParametersForDigitalFlashMode:(int)arg1 frameStatistics:(id)arg2 stationary:(BOOL)arg3 detectedObjects:(id)arg4;
-(id)adaptiveBracketingDigitalFlashTotalIntegrationTimesProviderForPortType:(id)arg1;
-(id)initWithConfiguration:(id)arg1;

@end

