/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AdPlatformsCommon.framework/AdPlatformsCommon
*/


@class NSMutableDictionary, NSMutableOrderedSet;

@interface APOrderedMutableDictionary : NSObject {

	NSMutableDictionary* _dictionary;
	NSMutableOrderedSet* _mutableOrderedSet;

}

@property (nonatomic,readonly) id firstObject; 
@property (nonatomic,readonly) id firstKey; 
@property (nonatomic,readonly) id lastObject; 
@property (nonatomic,readonly) id lastKey; 
@property (nonatomic,readonly) unsigned long long count; 
-(BOOL)containsKey:(id)arg1 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)enumerateKeysUsingBlock:(/*^block*/id)arg1 ;
-(id)firstKey;
-(id)init;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(unsigned long long)count;
-(void)removeObjectForKey:(id)arg1 ;
-(id)lastObject;
-(id)firstObject;
-(id)objectForKey:(id)arg1 ;
-(id)lastKey;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
@end

