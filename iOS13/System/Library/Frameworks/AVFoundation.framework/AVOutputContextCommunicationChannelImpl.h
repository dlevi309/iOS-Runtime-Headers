/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

@class AVOutputContextCommunicationChannel;


@protocol AVOutputContextCommunicationChannelImpl <NSObject>
@property (__weak) AVOutputContextCommunicationChannel * parentCommunicationChannel; 
@required
-(void)setParentCommunicationChannel:(id)arg1;
-(void)sendData:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(AVOutputContextCommunicationChannel *)parentCommunicationChannel;

@end

