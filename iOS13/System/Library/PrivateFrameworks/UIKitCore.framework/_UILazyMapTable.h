/*
* Generated on Monday, March 1, 2021 at 2:30:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSMapTable;

@interface _UILazyMapTable : NSObject {

	/*^block*/id _mappingBlock;
	NSMapTable* _keysToClientTables;
	NSMapTable* _keysToValues;
	NSMapTable* _valuesToKeys;

}
-(id)description;
-(unsigned long long)count;
-(id)objectForKey:(id)arg1 ;
-(id)keys;
-(id)initWithMappingBlock:(/*^block*/id)arg1 ;
-(id)cachedObjectEnumerable;
-(void)registerClient:(id)arg1 ofObjectForKey:(id)arg2 ;
-(BOOL)hasCachedObjectForKey:(id)arg1 ;
-(void)unregisterClient:(id)arg1 ofObjectForKey:(id)arg2 ;
-(id)cachedObjects;
-(id)keyEnumerable;
@end

