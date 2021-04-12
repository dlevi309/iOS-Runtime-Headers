/*
* Generated on Thursday, January 14, 2021 at 2:22:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/


@protocol MFDAStreamingContentConsumer <DAMailboxStreamingContentConsumer,NSObject>
@required
-(BOOL)succeeded;
-(id)data;
-(BOOL)didBeginStreaming;
-(double)timeOfLastActivity;

@end

