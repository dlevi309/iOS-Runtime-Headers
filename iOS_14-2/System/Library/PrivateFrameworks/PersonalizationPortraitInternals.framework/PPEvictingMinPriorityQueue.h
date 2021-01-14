/*
* Generated on Thursday, January 14, 2021 at 2:25:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
@interface PPEvictingMinPriorityQueue : NSObject {

	unsigned long long _capacity;
	priority_queue<PPScoredItem *, std::__1::vector<PPScoredItem *, std::__1::allocator<PPScoredItem *> >, PPScoredItemCompareGreater>=vector<PPScoredItem *, std::__1::allocator<PPScoredItem *> >=@@compressed_pair<PPScoredItem *__strong *, std::__1::allocator<PPScoredItem *> >=@}}PPScoredItemCompareGreater}Ref _queue;

}

@property (nonatomic,readonly) double count; 
-(id)init;
-(double)count;
-(void)addObject:(id)arg1 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(id)popItem;
-(id)extractSortedMutableArray;
-(void)dealloc;
@end

