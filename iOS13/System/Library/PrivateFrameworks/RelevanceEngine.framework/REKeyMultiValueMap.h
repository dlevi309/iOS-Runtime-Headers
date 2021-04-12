/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/


@class NSMapTable;

@interface REKeyMultiValueMap : NSObject {

	NSMapTable* _keyMap;
	NSMapTable* _valueMap;

}

@property (nonatomic,readonly) unsigned long long keyCount; 
@property (nonatomic,readonly) unsigned long long valueCount; 
-(id)init;
-(void)removeKey:(id)arg1 ;
-(id)valuesForKey:(id)arg1 ;
-(unsigned long long)valueCount;
-(id)keyForValue:(id)arg1 ;
-(id)initWithValuePointFunctionOptions:(unsigned long long)arg1 ;
-(void)addKey:(id)arg1 withValues:(id)arg2 ;
-(unsigned long long)keyCount;
-(void)insertValue:(id)arg1 forKey:(id)arg2 ;
-(void)removeValue:(id)arg1 forKey:(id)arg2 ;
-(void)enumerateValuesForKey:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
@end

