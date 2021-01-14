/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@class NSMutableDictionary;

@interface AMSBagKeySetAggregator : NSObject {

	NSMutableDictionary* _bagKeySets;

}

@property (nonatomic,retain) NSMutableDictionary * bagKeySets;              //@synthesize bagKeySets=_bagKeySets - In the implementation block
-(id)init;
-(BOOL)hasBagKeySetForConsumer:(Class)arg1 ;
-(NSMutableDictionary *)bagKeySets;
-(void)addBagKeySet:(id)arg1 forConsumer:(Class)arg2 ;
-(id)generateAggregatedBagKeySet;
-(void)setBagKeySets:(NSMutableDictionary *)arg1 ;
@end

