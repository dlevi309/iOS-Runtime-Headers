/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub
*/

#import <BiomePubSub/BPSFilterProducer.h>

@interface _BPSRemoveDuplicatesInner : BPSFilterProducer {

	/*^block*/id _isDuplicate;
	id _last;

}

@property (nonatomic,readonly) id isDuplicate;              //@synthesize isDuplicate=_isDuplicate - In the implementation block
@property (nonatomic,retain) id last;                       //@synthesize last=_last - In the implementation block
-(id)receiveNewValue:(id)arg1 ;
-(void)setLast:(id)arg1 ;
-(id)last;
-(id)isDuplicate;
-(id)initWithDownstream:(id)arg1 isDuplicate:(/*^block*/id)arg2 ;
@end

