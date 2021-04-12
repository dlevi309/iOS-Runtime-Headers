/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/


@class NSCache;

@interface WFAccountCache : NSObject {

	NSCache* _cache;

}

@property (nonatomic,readonly) NSCache * cache;              //@synthesize cache=_cache - In the implementation block
-(NSCache *)cache;
-(id)init;
-(id)accountsForService:(id)arg1 ;
-(id)numberOfAccountsForService:(id)arg1 ;
-(void)setNumberOfAccounts:(id)arg1 forService:(id)arg2 ;
-(void)setAccounts:(id)arg1 forService:(id)arg2 ;
-(void)clearCacheForService:(id)arg1 ;
@end

