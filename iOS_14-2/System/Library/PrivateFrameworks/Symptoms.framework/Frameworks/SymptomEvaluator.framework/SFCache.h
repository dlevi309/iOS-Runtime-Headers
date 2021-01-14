/*
* Generated on Thursday, January 14, 2021 at 2:24:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/


@class NSMutableDictionary;

@interface SFCache : NSObject {

	unsigned long long _cachePolicy;
	unsigned long long _cacheSize;
	double _entryTimeToLive;
	NSMutableDictionary* _cacheEntries;

}
-(id)init;
-(id)initWithPolicy:(unsigned long long)arg1 ;
-(unsigned long long)count;
-(id)initWithPolicy:(unsigned long long)arg1 timeToLive:(double)arg2 size:(unsigned long long)arg3 ;
-(id)_entryForKey:(id)arg1 ;
-(void)_removeCacheEntryWithKey:(id)arg1 ;
-(void)_insertCacheEntry:(id)arg1 forKey:(id)arg2 ;
-(id)entryForKey:(id)arg1 ;
-(void)addEntry:(id)arg1 forKey:(id)arg2 ;
@end

