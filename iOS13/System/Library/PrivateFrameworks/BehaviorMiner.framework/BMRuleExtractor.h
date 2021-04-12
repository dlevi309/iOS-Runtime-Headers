/*
* Generated on Monday, March 1, 2021 at 2:34:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BehaviorMiner.framework/BehaviorMiner
*/


@class NSMutableDictionary, NSMutableArray;

@interface BMRuleExtractor : NSObject {

	NSMutableDictionary* _patterns;
	NSMutableArray* _items;
	unsigned long long _basketCount;

}

@property (nonatomic,retain) NSMutableDictionary * patterns;              //@synthesize patterns=_patterns - In the implementation block
@property (nonatomic,retain) NSMutableArray * items;                      //@synthesize items=_items - In the implementation block
@property (assign) unsigned long long basketCount;                        //@synthesize basketCount=_basketCount - In the implementation block
-(NSMutableArray *)items;
-(void)setItems:(NSMutableArray *)arg1 ;
-(NSMutableDictionary *)patterns;
-(id)initWithPatterns:(id)arg1 items:(id)arg2 basketCount:(unsigned long long)arg3 ;
-(void)extractRulesWithMinSupport:(unsigned long long)arg1 minConfidence:(double)arg2 targetTypes:(id)arg3 batchSize:(unsigned long long)arg4 handler:(/*^block*/id)arg5 ;
-(id)subsetsOfItemset:(id)arg1 ;
-(id)supportOfItemSet:(id)arg1 ;
-(unsigned long long)basketCount;
-(id)itemSetForItemIndexSet:(id)arg1 ;
-(void)setPatterns:(NSMutableDictionary *)arg1 ;
-(void)setBasketCount:(unsigned long long)arg1 ;
@end

