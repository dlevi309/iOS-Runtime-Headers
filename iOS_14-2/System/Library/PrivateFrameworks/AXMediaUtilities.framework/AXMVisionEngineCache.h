/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableOrderedSet, NSMutableDictionary;

@interface AXMVisionEngineCache : NSObject {

	NSObject*<OS_dispatch_queue> _cacheQueue;
	long long _cacheQueue_maxItems;
	NSMutableOrderedSet* _cacheQueue_orderedKeys;
	NSMutableDictionary* _cacheQueue_results;

}

@property (nonatomic,readonly) long long cacheSize; 
-(long long)cacheSize;
-(id)debugDescription;
-(id)description;
-(void)purgeCache;
-(void)setResult:(id)arg1 forKey:(id)arg2 ;
-(id)initWithCacheSize:(long long)arg1 ;
-(long long)_cacheQueue_cacheSize;
-(id)_cacheQueue_resultForKey:(id)arg1 ;
-(void)_cacheQueue_setResult:(id)arg1 forKey:(id)arg2 ;
-(id)resultForKey:(id)arg1 ;
@end

