/*
* Generated on Thursday, January 14, 2021 at 2:27:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/


@class NSMutableArray, NSMutableDictionary;

@interface SCNOrderedDictionary : NSObject {

	NSMutableArray* _keys;
	NSMutableDictionary* _keyValues;

}
-(id)keys;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)valueForKey:(id)arg1 ;
-(unsigned long long)count;
-(void)removeObjectForKey:(id)arg1 ;
-(id)objectAtIndex:(long long)arg1 ;
-(id)copy;
-(id)dictionary;
-(id)objectForKey:(id)arg1 ;
-(void)removeAllObjects;
-(id)allValues;
-(id)allKeys;
-(void)dealloc;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)_setupFrom:(id)arg1 ;
-(void)applyFunction:(/*function pointer*/void*)arg1 withContext:(void*)arg2 ;
@end

