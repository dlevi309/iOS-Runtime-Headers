/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

@class AVFigRoutingContextOutputContextImpl, AVOutputContextCommunicationChannel;


@protocol AVFigRoutingContextCommunicationChannelManager <NSObject>
@property (__weak) AVFigRoutingContextOutputContextImpl * parentOutputContextImpl; 
@property (nonatomic,readonly) AVOutputContextCommunicationChannel * outgoingCommunicationChannel; 
@required
-(AVOutputContextCommunicationChannel *)outgoingCommunicationChannel;
-(id)openCommunicationChannelWithOptions:(id)arg1 error:(id*)arg2;
-(void)setParentOutputContextImpl:(id)arg1;
-(AVFigRoutingContextOutputContextImpl *)parentOutputContextImpl;

@end

