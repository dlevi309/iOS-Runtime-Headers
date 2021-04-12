/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub
*/

#import <BiomePubSub/BPSReduceProducer.h>

@interface _BPSReduceInner : BPSReduceProducer {

	/*^block*/id _reduce;

}

@property (nonatomic,readonly) id reduce;              //@synthesize reduce=_reduce - In the implementation block
-(id)receiveNewValue:(id)arg1 ;
-(id)reduce;
-(id)initWithDownstream:(id)arg1 initial:(id)arg2 reduce:(/*^block*/id)arg3 ;
@end

