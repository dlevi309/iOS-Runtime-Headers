/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
*/


@class _PASLock;

@interface _PASLRUCache : NSObject {

	_PASLock* _lock;
	unsigned long long _countLimit;

}
-(void)removeObjectForKey:(id)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(void)removeAllObjects;
-(id)initWithCountLimit:(unsigned long long)arg1 ;
-(void)enumerateKeysAndObjectsUsingBlock:(/*^block*/id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
@end

