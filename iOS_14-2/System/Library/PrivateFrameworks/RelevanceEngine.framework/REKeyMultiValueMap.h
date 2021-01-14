/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)keyCount;
-(unsigned long long)valueCount;
-(id)keyForValue:(id)arg1 ;
-(id)initWithValuePointFunctionOptions:(unsigned long long)arg1 ;
-(id)valuesForKey:(id)arg1 ;
-(void)addKey:(id)arg1 withValues:(id)arg2 ;
-(void)insertValue:(id)arg1 forKey:(id)arg2 ;
-(void)removeValue:(id)arg1 forKey:(id)arg2 ;
-(void)enumerateValuesForKey:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
@end

