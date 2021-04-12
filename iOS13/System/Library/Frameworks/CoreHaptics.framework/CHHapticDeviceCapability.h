/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreHaptics.framework/CoreHaptics
*/


@protocol CHHapticDeviceCapability
@property (readonly) BOOL supportsHaptics; 
@property (readonly) BOOL supportsAudio; 
@required
-(BOOL)supportsHaptics;
-(BOOL)supportsAudio;
-(id)attributesForEventParameter:(id)arg1 eventType:(id)arg2 error:(id*)arg3;
-(id)attributesForDynamicParameter:(id)arg1 error:(id*)arg2;

@end

