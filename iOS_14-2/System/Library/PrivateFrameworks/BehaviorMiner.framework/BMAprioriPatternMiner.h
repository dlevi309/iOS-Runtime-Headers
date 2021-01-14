/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BehaviorMiner.framework/BehaviorMiner
*/

#import <libobjc.A.dylib/BMPatternMiner.h>

@class NSArray;

@interface BMAprioriPatternMiner : NSObject <BMPatternMiner> {

	BOOL _shouldStop;
	NSArray* _items;
	NSArray* _indexBaskets;
	unsigned long long _maxItemsetSize;

}

@property (assign) BOOL shouldStop;                                          //@synthesize shouldStop=_shouldStop - In the implementation block
@property (nonatomic,readonly) NSArray * indexBaskets;                       //@synthesize indexBaskets=_indexBaskets - In the implementation block
@property (assign,nonatomic) unsigned long long maxItemsetSize;              //@synthesize maxItemsetSize=_maxItemsetSize - In the implementation block
@property (nonatomic,readonly) NSArray * items;                              //@synthesize items=_items - In the implementation block
-(void)terminateEarly;
-(NSArray *)items;
-(BOOL)shouldStop;
-(void)setShouldStop:(BOOL)arg1 ;
-(id)initWithBaskets:(id)arg1 ;
-(unsigned long long)maxItemsetSize;
-(void)setMaxItemsetSize:(unsigned long long)arg1 ;
-(id)minePatternsWithMinSupport:(unsigned long long)arg1 constrainedToPatternsWithTypes:(id)arg2 ;
-(NSArray *)indexBaskets;
-(id)supportOfItemIndexSet:(id)arg1 ;
-(id)getItemIndexSetsWithMinSupport:(double)arg1 itemIndexSets:(id)arg2 ;
@end

