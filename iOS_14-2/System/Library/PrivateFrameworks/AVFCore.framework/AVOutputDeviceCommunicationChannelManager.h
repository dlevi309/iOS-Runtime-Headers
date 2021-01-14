/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

@class AVOutputDevice;


@protocol AVOutputDeviceCommunicationChannelManager <NSObject>
@property (__weak) AVOutputDevice * parentOutputDevice; 
@required
-(void)setParentOutputDevice:(id)arg1;
-(void)openCommunicationChannelWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(AVOutputDevice *)parentOutputDevice;

@end

