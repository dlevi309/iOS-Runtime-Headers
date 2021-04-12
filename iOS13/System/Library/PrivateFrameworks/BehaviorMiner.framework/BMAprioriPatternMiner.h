/*
* Generated on Monday, March 1, 2021 at 2:34:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BehaviorMiner.framework/BehaviorMiner
*/

#import <libobjc.A.dylib/BMPatternMiner.h>

@class NSMutableArray;

@interface BMAprioriPatternMiner : NSObject <BMPatternMiner> {

	NSMutableArray* _indexBaskets;
	NSMutableArray* _items;

}

@property (nonatomic,copy) NSMutableArray * indexBaskets;              //@synthesize indexBaskets=_indexBaskets - In the implementation block
@property (nonatomic,copy) NSMutableArray * items;                     //@synthesize items=_items - In the implementation block
-(NSMutableArray *)items;
-(void)setItems:(NSMutableArray *)arg1 ;
-(id)initWithBaskets:(id)arg1 ;
-(id)minePatternsWithMinSupport:(unsigned long long)arg1 constrainedToPatternsWithTypes:(id)arg2 ;
-(NSMutableArray *)indexBaskets;
-(id)supportOfItemIndexSet:(id)arg1 ;
-(id)getItemIndexSetsWithMinSupport:(double)arg1 itemIndexSets:(id)arg2 ;
-(void)setIndexBaskets:(NSMutableArray *)arg1 ;
@end

