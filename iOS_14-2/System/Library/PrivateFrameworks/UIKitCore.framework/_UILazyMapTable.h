/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSMapTable;

@interface _UILazyMapTable : NSObject {

	/*^block*/id _mappingBlock;
	NSMapTable* _keysToClientTables;
	NSMapTable* _keysToValues;
	NSMapTable* _valuesToKeys;

}
-(id)keys;
-(BOOL)hasCachedObjectForKey:(id)arg1 ;
-(unsigned long long)count;
-(id)description;
-(id)objectForKey:(id)arg1 ;
-(void)registerClient:(id)arg1 ofObjectForKey:(id)arg2 ;
-(id)cachedObjects;
-(void)unregisterClient:(id)arg1 ofObjectForKey:(id)arg2 ;
-(id)keyEnumerable;
-(id)initWithMappingBlock:(/*^block*/id)arg1 ;
-(id)cachedObjectEnumerable;
@end

