/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/


@protocol HAP2CoAPIOConsumer;
@interface HAP2CoAPIOConsumerWeakHolder : NSObject {

	id<HAP2CoAPIOConsumer> _consumer;

}

@property (nonatomic,__weak,readonly) id<HAP2CoAPIOConsumer> consumer;              //@synthesize consumer=_consumer - In the implementation block
+(id)new;
-(id)init;
-(id)initWithConsumer:(id)arg1 ;
-(id<HAP2CoAPIOConsumer>)consumer;
@end

