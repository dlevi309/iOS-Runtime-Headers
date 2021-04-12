/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreHaptics.framework/CoreHaptics
*/

#import <libobjc.A.dylib/CHHapticDeviceCapability.h>

@interface CHDefaultHapticDeviceCapability : NSObject <CHHapticDeviceCapability> {

	BOOL _supports3rdPartyHaptics;

}

@property (readonly) unsigned long long maximumNumberOfHapticChannels; 
@property (readonly) unsigned long long maximumNumberOfAudioChannels; 
@property (readonly) BOOL supportsHaptics; 
@property (readonly) BOOL supportsAudio; 
-(id)init;
-(id)initPrivate;
-(BOOL)supportsHaptics;
-(BOOL)supportsAudio;
-(float)minimumValueForEventParameter:(id)arg1 ;
-(float)maximumValueForEventParameter:(id)arg1 ;
-(float)defaultValueForEventParameter:(id)arg1 eventType:(id)arg2 ;
-(float)minimumValueForDynamicParameter:(id)arg1 ;
-(float)maximumValueForDynamicParameter:(id)arg1 ;
-(float)defaultValueForDynamicParameter:(id)arg1 ;
-(id)attributesForEventParameter:(id)arg1 eventType:(id)arg2 error:(id*)arg3 ;
-(id)attributesForDynamicParameter:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)maximumNumberOfHapticChannels;
-(unsigned long long)maximumNumberOfAudioChannels;
@end

