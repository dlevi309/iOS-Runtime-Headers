/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <IMFoundation/IMMultiDict.h>

@interface CKMultiCache : IMMultiDict {

	BOOL _cacheEligibleForPrewarm;
	BOOL _punchoutCacheEligibleForPrewarm;
	unsigned long long _limit;

}

@property (assign,nonatomic) unsigned long long limit;                          //@synthesize limit=_limit - In the implementation block
@property (assign,nonatomic) BOOL cacheEligibleForPrewarm;                      //@synthesize cacheEligibleForPrewarm=_cacheEligibleForPrewarm - In the implementation block
@property (assign,nonatomic) BOOL punchoutCacheEligibleForPrewarm;              //@synthesize punchoutCacheEligibleForPrewarm=_punchoutCacheEligibleForPrewarm - In the implementation block
-(id)init;
-(void)dealloc;
-(void)removeAllObjects;
-(unsigned long long)limit;
-(void)setLimit:(unsigned long long)arg1 ;
-(void)pushObject:(id)arg1 forKey:(id)arg2 ;
-(void)setCacheEligibleForPrewarm:(BOOL)arg1 ;
-(void)setPunchoutCacheEligibleForPrewarm:(BOOL)arg1 ;
-(void)markCacheAsPrewarmed;
-(void)markPunchoutCacheAsPrewarmed;
-(BOOL)cacheEligibleForPrewarm;
-(BOOL)punchoutCacheEligibleForPrewarm;
@end

