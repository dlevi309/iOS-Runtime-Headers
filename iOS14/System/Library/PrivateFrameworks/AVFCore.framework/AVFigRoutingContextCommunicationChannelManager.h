/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

@class AVFigRoutingContextOutputContextImpl, AVOutputContextCommunicationChannel;


@protocol AVFigRoutingContextCommunicationChannelManager <NSObject>
@property (__weak) AVFigRoutingContextOutputContextImpl * parentOutputContextImpl; 
@property (nonatomic,readonly) AVOutputContextCommunicationChannel * outgoingCommunicationChannel; 
@required
-(id)openCommunicationChannelWithOptions:(id)arg1 error:(id*)arg2;
-(AVFigRoutingContextOutputContextImpl *)parentOutputContextImpl;
-(void)setParentOutputContextImpl:(id)arg1;
-(AVOutputContextCommunicationChannel *)outgoingCommunicationChannel;

@end

