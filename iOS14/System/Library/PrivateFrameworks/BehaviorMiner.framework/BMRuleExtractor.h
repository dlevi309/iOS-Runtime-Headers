/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BehaviorMiner.framework/BehaviorMiner
*/


@class NSMutableDictionary, NSArray;

@interface BMRuleExtractor : NSObject {

	BOOL _shouldStop;
	NSMutableDictionary* _patterns;
	NSArray* _items;
	unsigned long long _basketCount;

}

@property (nonatomic,retain) NSMutableDictionary * patterns;                //@synthesize patterns=_patterns - In the implementation block
@property (nonatomic,retain) NSArray * items;                               //@synthesize items=_items - In the implementation block
@property (nonatomic,readonly) unsigned long long basketCount;              //@synthesize basketCount=_basketCount - In the implementation block
@property (assign) BOOL shouldStop;                                         //@synthesize shouldStop=_shouldStop - In the implementation block
-(void)setItems:(NSArray *)arg1 ;
-(void)setPatterns:(NSMutableDictionary *)arg1 ;
-(void)terminateEarly;
-(NSArray *)items;
-(BOOL)shouldStop;
-(void)setShouldStop:(BOOL)arg1 ;
-(NSMutableDictionary *)patterns;
-(id)initWithPatterns:(id)arg1 items:(id)arg2 basketCount:(unsigned long long)arg3 ;
-(void)extractRulesWithMinSupport:(unsigned long long)arg1 minConfidence:(double)arg2 targetTypes:(id)arg3 batchSize:(unsigned long long)arg4 currentDate:(id)arg5 datedBaskets:(id)arg6 handler:(/*^block*/id)arg7 ;
-(id)subsetsOfItemset:(id)arg1 ;
-(unsigned long long)supportOfItemSet:(id)arg1 ;
-(unsigned long long)basketCount;
-(id)itemSetForItemIndexSet:(id)arg1 ;
-(void)extractRulesWithMinSupport:(unsigned long long)arg1 minConfidence:(double)arg2 targetTypes:(id)arg3 batchSize:(unsigned long long)arg4 handler:(/*^block*/id)arg5 ;
@end

