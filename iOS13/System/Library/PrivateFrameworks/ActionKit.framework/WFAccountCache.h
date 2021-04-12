/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/


@class NSCache;

@interface WFAccountCache : NSObject {

	NSCache* _cache;

}

@property (nonatomic,readonly) NSCache * cache;              //@synthesize cache=_cache - In the implementation block
-(id)init;
-(NSCache *)cache;
-(id)accountsForService:(id)arg1 ;
-(id)numberOfAccountsForService:(id)arg1 ;
-(void)setNumberOfAccounts:(id)arg1 forService:(id)arg2 ;
-(void)setAccounts:(id)arg1 forService:(id)arg2 ;
-(void)clearCacheForService:(id)arg1 ;
@end

