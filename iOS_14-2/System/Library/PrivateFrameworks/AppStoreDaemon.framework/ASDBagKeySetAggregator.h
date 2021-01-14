/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/


@class NSMutableDictionary;

@interface ASDBagKeySetAggregator : NSObject {

	NSMutableDictionary* _bagKeySets;

}
-(id)init;
-(BOOL)hasBagKeySetForConsumer:(Class)arg1 ;
-(void)addBagKeySet:(id)arg1 forConsumer:(Class)arg2 ;
-(id)generateAggregatedBagKeySet;
@end

