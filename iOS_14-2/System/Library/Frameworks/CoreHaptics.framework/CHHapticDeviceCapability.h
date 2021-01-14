/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreHaptics.framework/CoreHaptics
*/


@protocol CHHapticDeviceCapability
@property (readonly) BOOL supportsHaptics; 
@property (readonly) BOOL supportsAudio; 
@required
-(id)attributesForDynamicParameter:(id)arg1 error:(id*)arg2;
-(id)attributesForEventParameter:(id)arg1 eventType:(id)arg2 error:(id*)arg3;
-(BOOL)supportsHaptics;
-(BOOL)supportsAudio;

@end

