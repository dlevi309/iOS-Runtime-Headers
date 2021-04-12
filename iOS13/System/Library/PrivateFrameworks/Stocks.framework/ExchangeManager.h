/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
*/


@class NSMutableDictionary;

@interface ExchangeManager : NSObject {

	NSMutableDictionary* _exchangesByName;

}
+(id)sharedManager;
-(id)init;
-(void)saveChanges;
-(id)exchangeWithName:(id)arg1 createIfNotFound:(BOOL)arg2 ;
-(void)_loadExchangesFromDefaults;
-(void)addExchange:(id)arg1 ;
-(id)exchangeWithName:(id)arg1 ;
-(void)_addExchange:(id)arg1 ;
-(id)exchangeList;
-(BOOL)containsExchange:(id)arg1 ;
-(void)removeExchange:(id)arg1 ;
-(void)reloadExchangesFromDefaults;
@end

