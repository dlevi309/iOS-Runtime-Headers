/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRProtocolMessage.h>

@class MRVirtualTouchDeviceDescriptor;

@interface MRRegisterHIDDeviceMessage : MRProtocolMessage {

	MRVirtualTouchDeviceDescriptor* _deviceDescriptor;

}

@property (nonatomic,copy,readonly) MRVirtualTouchDeviceDescriptor * deviceDescriptor; 
-(unsigned long long)type;
-(id)initWithDeviceDescriptor:(id)arg1 ;
-(MRVirtualTouchDeviceDescriptor *)deviceDescriptor;
@end

