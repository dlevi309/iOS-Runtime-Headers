/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRProtocolMessage.h>

@class MRVirtualVoiceInputDeviceDescriptor;

@interface MRRegisterVoiceInputDeviceMessage : MRProtocolMessage {

	MRVirtualVoiceInputDeviceDescriptor* _descriptor;

}

@property (nonatomic,readonly) MRVirtualVoiceInputDeviceDescriptor * descriptor; 
-(unsigned long long)type;
-(MRVirtualVoiceInputDeviceDescriptor *)descriptor;
-(id)initWithDescriptor:(id)arg1 ;
@end

