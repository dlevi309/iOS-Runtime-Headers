/*
* Generated on Monday, March 1, 2021 at 2:35:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
*/


@interface CACUserAttentionSignalProviderFactory : NSObject {

	double _samplingInterval;
	double _attentionLossTimeout;
	unsigned long long _supportedAttentionAwarenessEvents;

}
+(id)_attentionAwarenessConfigurationWithIdentifier:(id)arg1 eventMask:(unsigned long long)arg2 samplingInterval:(double)arg3 attentionLossTimeout:(double)arg4 ;
-(id)wakeGestureManager;
-(unsigned long long)_faceAttentionAwarenessEventMask;
-(unsigned long long)_touchAttentionAwarenessEventMask;
-(id)initWithSamplingInterval:(double)arg1 attentionLossTimeout:(double)arg2 supportedAttentionAwarenessEvents:(unsigned long long)arg3 ;
-(id)faceAttentionAwarenessClient;
-(id)touchAttentionAwarenessClient;
@end

