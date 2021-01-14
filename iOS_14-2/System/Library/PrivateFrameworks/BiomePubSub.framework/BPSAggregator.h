/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub
*/


@interface BPSAggregator : NSObject {

	id _accumulator;
	/*^block*/id _closure;

}

@property (nonatomic,readonly) id accumulator;              //@synthesize accumulator=_accumulator - In the implementation block
@property (nonatomic,readonly) id closure;                  //@synthesize closure=_closure - In the implementation block
-(id)closure;
-(id)accumulator;
-(id)initWithAccumulator:(id)arg1 closure:(/*^block*/id)arg2 ;
@end

