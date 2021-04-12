/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/


@class NSMutableArray, NSMutableDictionary;

@interface EFMutableIndexMap : NSObject {

	NSMutableArray* _tuples;
	NSMutableDictionary* _keyToTuple;

}

@property (nonatomic,retain) NSMutableArray * tuples;                       //@synthesize tuples=_tuples - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * keyToTuple;              //@synthesize keyToTuple=_keyToTuple - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
-(id)init;
-(id)description;
-(unsigned long long)count;
-(long long)keyAtIndex:(unsigned long long)arg1 ;
-(void)setObject:(id)arg1 forKey:(long long)arg2 ;
-(void)enumerateKeysIndexesAndObjectsUsingBlock:(/*^block*/id)arg1 ;
-(void)addKey:(long long)arg1 atIndex:(unsigned long long)arg2 object:(id)arg3 ;
-(id)_tupleForKey:(long long)arg1 ;
-(void)addKey:(long long)arg1 atIndex:(unsigned long long)arg2 ;
-(BOOL)removeKeyAtIndex:(unsigned long long)arg1 ;
-(void)removeAllKeys;
-(void)enumerateKeysAndIndexesUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)hasKeyAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexOfKey:(long long)arg1 ;
-(id)objectForInt64Key:(long long)arg1 ;
-(void)shiftKeysStartingAtIndex:(unsigned long long)arg1 by:(long long)arg2 ;
-(NSMutableArray *)tuples;
-(void)setTuples:(NSMutableArray *)arg1 ;
-(NSMutableDictionary *)keyToTuple;
-(void)setKeyToTuple:(NSMutableDictionary *)arg1 ;
@end

