/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/


@class NSMapTable;

@interface REKeyValueMap : NSObject {

	NSMapTable* _keyMap;
	NSMapTable* _valueMap;

}

@property (nonatomic,readonly) unsigned long long count; 
-(id)init;
-(id)valueForKey:(id)arg1 ;
-(unsigned long long)count;
-(void)removeKey:(id)arg1 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(unsigned long long)valueCount;
-(void)addKey:(id)arg1 withValue:(id)arg2 ;
-(id)keyForValue:(id)arg1 ;
@end

