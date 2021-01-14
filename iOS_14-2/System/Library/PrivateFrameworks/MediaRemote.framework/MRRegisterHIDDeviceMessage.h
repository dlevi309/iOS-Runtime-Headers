/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRProtocolMessage.h>

@class MRVirtualTouchDeviceDescriptor;

@interface MRRegisterHIDDeviceMessage : MRProtocolMessage {

	MRVirtualTouchDeviceDescriptor* _deviceDescriptor;

}

@property (nonatomic,copy,readonly) MRVirtualTouchDeviceDescriptor * deviceDescriptor; 
-(id)initWithDeviceDescriptor:(id)arg1 ;
-(MRVirtualTouchDeviceDescriptor *)deviceDescriptor;
-(unsigned long long)type;
@end

