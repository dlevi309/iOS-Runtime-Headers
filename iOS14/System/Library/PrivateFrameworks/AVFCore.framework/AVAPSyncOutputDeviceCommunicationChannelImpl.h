/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVOutputDeviceCommunicationChannelImpl.h>

@class NSString;

@interface AVAPSyncOutputDeviceCommunicationChannelImpl : NSObject <AVOutputDeviceCommunicationChannelImpl> {

	NSString* _deviceID;
	CFStringRef _commChannelUUID;
	OpaqueAPSyncControllerRef _syncController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)close;
-(void)sendData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithDeviceID:(id)arg1 channelUUID:(CFStringRef)arg2 syncController:(OpaqueAPSyncControllerRef)arg3 ;
-(void)dealloc;
@end

