/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub
*/

#import <BiomePubSub/_BPSAbstractOrderedMerge.h>

@interface _BPSOrderedMergeManyInner : _BPSAbstractOrderedMerge {

	/*^block*/id _comparator;

}

@property (nonatomic,copy) id comparator;              //@synthesize comparator=_comparator - In the implementation block
-(void)setComparator:(id)arg1 ;
-(id)comparator;
-(long long)compareFirst:(id)arg1 withSecond:(id)arg2 ;
-(id)initWithDownstream:(id)arg1 upstreamCount:(unsigned long long)arg2 comparator:(/*^block*/id)arg3 ;
@end

