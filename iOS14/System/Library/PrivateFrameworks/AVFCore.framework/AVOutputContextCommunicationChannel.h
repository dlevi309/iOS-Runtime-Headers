/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


#import <AVFCore/AVFCore-Structs.h>
@class AVOutputContextCommunicationChannelInternal;

@interface AVOutputContextCommunicationChannel : NSObject {

	AVOutputContextCommunicationChannelInternal* _ivars;

}

@property (nonatomic,readonly) const CFStringRef commChannelUUID; 
@property (nonatomic,readonly) id<AVOutputContextCommunicationChannelImpl> impl; 
-(id)init;
-(void)sendData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithOutputContextCommunicationChannelImpl:(id)arg1 ;
-(const CFStringRef)commChannelUUID;
-(void)dealloc;
-(id<AVOutputContextCommunicationChannelImpl>)impl;
@end

