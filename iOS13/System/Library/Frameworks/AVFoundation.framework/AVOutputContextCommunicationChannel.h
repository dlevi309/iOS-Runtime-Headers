/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVOutputContextCommunicationChannelInternal;

@interface AVOutputContextCommunicationChannel : NSObject {

	AVOutputContextCommunicationChannelInternal* _ivars;

}

@property (nonatomic,readonly) const CFStringRef commChannelUUID; 
@property (nonatomic,readonly) id<AVOutputContextCommunicationChannelImpl> impl; 
-(id)init;
-(void)dealloc;
-(id<AVOutputContextCommunicationChannelImpl>)impl;
-(void)sendData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithOutputContextCommunicationChannelImpl:(id)arg1 ;
-(const CFStringRef)commChannelUUID;
@end

