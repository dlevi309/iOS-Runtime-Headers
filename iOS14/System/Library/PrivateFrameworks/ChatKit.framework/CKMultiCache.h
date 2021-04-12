/*
* Generated on Thursday, January 14, 2021 at 2:21:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <IMFoundation/IMMultiDict.h>

@interface CKMultiCache : IMMultiDict {

	BOOL _cacheEligibleForPrewarm;
	unsigned long long _limit;

}

@property (assign,nonatomic) unsigned long long limit;                  //@synthesize limit=_limit - In the implementation block
@property (assign,nonatomic) BOOL cacheEligibleForPrewarm;              //@synthesize cacheEligibleForPrewarm=_cacheEligibleForPrewarm - In the implementation block
-(void)setLimit:(unsigned long long)arg1 ;
-(unsigned long long)limit;
-(id)init;
-(void)removeAllObjects;
-(void)pushObject:(id)arg1 forKey:(id)arg2 ;
-(void)setCacheEligibleForPrewarm:(BOOL)arg1 ;
-(void)markCacheAsPrewarmed;
-(BOOL)cacheEligibleForPrewarm;
-(void)dealloc;
@end

