/*
* Generated on Thursday, January 14, 2021 at 2:26:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Osprey.framework/Osprey
*/


@protocol OspreyClientStreamingContext;
@interface OspreyMessageProducer : NSObject {

	/*^block*/id _serializer;
	id<OspreyClientStreamingContext> _streamingContext;

}
-(id)initWithMessageSerializer:(/*^block*/id)arg1 streamingContext:(id)arg2 ;
-(void)produceMessage:(id)arg1 ;
-(void)produceMessage:(id)arg1 compressed:(BOOL)arg2 ;
-(void)finishProducing;
@end

