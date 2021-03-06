/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVOutputDeviceCommunicationChannelManager.h>

@protocol OS_dispatch_queue;
@class AVOutputDevice, NSString, AVOutputContext, NSObject;

@interface AVSystemRemotePoolOutputDeviceCommunicationChannelManager : NSObject <AVOutputDeviceCommunicationChannelManager> {

	AVOutputDevice* _parentOutputDevice;
	NSString* _deviceID;
	AVOutputContext* _outputContext;
	NSObject*<OS_dispatch_queue> _ivarAccessQueue;
	CFDictionaryRef _communicationChannelsForUUIDs;

}

@property (__weak) AVOutputDevice * parentOutputDevice;              //@synthesize parentOutputDevice=_parentOutputDevice - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedSystemRemotePoolImpl;
+(id)sharedSystemRemotePool;
-(void)_didReceiveData:(CFDataRef)arg1 fromDeviceWithID:(CFStringRef)arg2 fromChannelWithUUID:(CFStringRef)arg3 ;
-(void)_didCloseCommChannelWithUUID:(CFStringRef)arg1 forDeviceWithID:(CFStringRef)arg2 ;
-(id)initWithDeviceID:(id)arg1 ;
-(id)_initializeIfNeededAndGetSystemRemotePool;
-(void)setParentOutputDevice:(AVOutputDevice *)arg1 ;
-(void)openCommunicationChannelWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(AVOutputDevice *)parentOutputDevice;
-(void)dealloc;
@end

