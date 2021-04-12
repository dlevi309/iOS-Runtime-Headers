/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)debugDescription;
-(void)purgeCache;
-(long long)cacheSize;
-(void)setResult:(id)arg1 forKey:(id)arg2 ;
-(id)initWithCacheSize:(long long)arg1 ;
-(long long)_cacheQueue_cacheSize;
-(id)_cacheQueue_resultForKey:(id)arg1 ;
-(void)_cacheQueue_setResult:(id)arg1 forKey:(id)arg2 ;
-(id)resultForKey:(id)arg1 ;
@end

