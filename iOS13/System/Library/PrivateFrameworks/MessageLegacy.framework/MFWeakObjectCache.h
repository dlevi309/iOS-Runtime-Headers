/*
* Generated on Monday, March 1, 2021 at 2:34:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
*/


@class NSMutableDictionary, NSLock;

@interface MFWeakObjectCache : NSObject {

	/*^block*/id _block;
	NSMutableDictionary* _dictionary;
	NSLock* _lock;

}
-(void)dealloc;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(id)objectForKey:(id)arg1 wasCached:(BOOL*)arg2 ;
-(id)objectForKey:(id)arg1 shouldGenerate:(BOOL)arg2 wasCached:(BOOL*)arg3 ;
-(id)weakObjectCacheRefForKey:(id)arg1 ;
@end

