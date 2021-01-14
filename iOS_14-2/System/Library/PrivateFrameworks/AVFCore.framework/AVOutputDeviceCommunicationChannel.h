/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


@protocol AVOutputDeviceCommunicationChannelImpl;
@interface AVOutputDeviceCommunicationChannel : NSObject {

	id<AVOutputDeviceCommunicationChannelImpl> _impl;

}
-(void)close;
-(void)sendData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithOutputDeviceCommunicationChannelImpl:(id)arg1 ;
-(void)dealloc;
@end

