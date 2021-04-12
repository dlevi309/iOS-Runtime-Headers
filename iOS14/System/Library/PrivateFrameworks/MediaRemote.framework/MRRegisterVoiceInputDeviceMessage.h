/*
* Generated on Thursday, January 14, 2021 at 2:21:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRProtocolMessage.h>

@class MRVirtualVoiceInputDeviceDescriptor;

@interface MRRegisterVoiceInputDeviceMessage : MRProtocolMessage {

	MRVirtualVoiceInputDeviceDescriptor* _descriptor;

}

@property (nonatomic,readonly) MRVirtualVoiceInputDeviceDescriptor * descriptor; 
-(id)initWithDescriptor:(id)arg1 ;
-(MRVirtualVoiceInputDeviceDescriptor *)descriptor;
-(unsigned long long)type;
@end

