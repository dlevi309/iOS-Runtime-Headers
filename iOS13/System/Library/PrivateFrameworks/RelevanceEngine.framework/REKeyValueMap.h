/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/


@class NSMapTable;

@interface REKeyValueMap : NSObject {

	NSMapTable* _keyMap;
	NSMapTable* _valueMap;

}

@property (nonatomic,readonly) unsigned long long count; 
-(id)init;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(unsigned long long)count;
-(id)valueForKey:(id)arg1 ;
-(void)removeKey:(id)arg1 ;
-(unsigned long long)valueCount;
-(void)addKey:(id)arg1 withValue:(id)arg2 ;
-(id)keyForValue:(id)arg1 ;
@end

