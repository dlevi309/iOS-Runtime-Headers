/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub
*/

#import <BiomePubSub/BPSPublisher.h>

@class NSArray;

@interface BPSOrderedMerge : BPSPublisher {

	NSArray* _publishers;
	/*^block*/id _comparator;

}

@property (nonatomic,readonly) NSArray * publishers;              //@synthesize publishers=_publishers - In the implementation block
@property (nonatomic,copy) id comparator;                         //@synthesize comparator=_comparator - In the implementation block
-(id)bookmarkableUpstreams;
-(id)initWithUpstreams:(id)arg1 bookmarkState:(id)arg2 ;
-(BOOL)canStoreInternalStateInBookmark;
-(void)setComparator:(id)arg1 ;
-(id)init;
-(void)subscribe:(id)arg1 ;
-(id)comparator;
-(NSArray *)publishers;
-(id)initWithPublishers:(id)arg1 comparator:(/*^block*/id)arg2 ;
-(id)initWithA:(id)arg1 b:(id)arg2 comparator:(/*^block*/id)arg3 ;
@end

