/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)removeObjectsForKeys:(id)arg1 ;
-(id)init;
-(NSArray *)orderedKeys;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(id)initWithMaximumCount:(unsigned long long)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(NSArray *)orderedValues;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
@end

