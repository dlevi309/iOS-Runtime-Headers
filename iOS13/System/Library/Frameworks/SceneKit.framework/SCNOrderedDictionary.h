/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/


@class NSMutableArray, NSMutableDictionary;

@interface SCNOrderedDictionary : NSObject {

	NSMutableArray* _keys;
	NSMutableDictionary* _keyValues;

}
-(void)dealloc;
-(id)copy;
-(unsigned long long)count;
-(id)allKeys;
-(id)objectAtIndex:(long long)arg1 ;
-(void)removeAllObjects;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(id)allValues;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)dictionary;
-(id)keys;
-(id)valueForKey:(id)arg1 ;
-(void)_setupFrom:(id)arg1 ;
-(void)applyFunction:(/*function pointer*/void*)arg1 withContext:(void*)arg2 ;
@end

