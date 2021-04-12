/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
*/


@class WBSMutableOrderedSet, NSMutableDictionary, NSArray;

@interface WBSMutableOrderedDictionary : NSObject {

	WBSMutableOrderedSet* _mutableOrderedSetOfKeys;
	NSMutableDictionary* _mutableDictionary;
	unsigned long long _maximumCount;

}

@property (nonatomic,readonly) NSArray * orderedKeys; 
@property (nonatomic,readonly) NSArray * orderedValues; 
-(id)init;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)removeObjectsForKeys:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(id)initWithMaximumCount:(unsigned long long)arg1 ;
-(NSArray *)orderedKeys;
-(NSArray *)orderedValues;
@end

