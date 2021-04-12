/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub
*/

#import <libobjc.A.dylib/BPSSubscriber.h>

@class _BPSAbstractOrderedMerge, NSString;

@interface _BPSAbstractOrderedMergeSide : NSObject <BPSSubscriber> {

	unsigned long long _index;
	_BPSAbstractOrderedMerge* _combiner;

}

@property (assign,nonatomic) unsigned long long index;                         //@synthesize index=_index - In the implementation block
@property (nonatomic,retain) _BPSAbstractOrderedMerge * combiner;              //@synthesize combiner=_combiner - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)index;
-(long long)receiveInput:(id)arg1 ;
-(void)receiveCompletion:(id)arg1 ;
-(void)setCombiner:(_BPSAbstractOrderedMerge *)arg1 ;
-(void)setIndex:(unsigned long long)arg1 ;
-(id)initWithIndex:(unsigned long long)arg1 combiner:(id)arg2 ;
-(void)receiveSubscription:(id)arg1 ;
-(_BPSAbstractOrderedMerge *)combiner;
@end

