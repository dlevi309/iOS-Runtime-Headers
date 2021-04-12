/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestionsTriggerObserver.h>

@class NSMutableDictionary, NSMutableArray, NSString;

@interface MapsSuggestionsLimitedDictionary : NSObject <MapsSuggestionsTriggerObserver> {

	unsigned long long _maxCapacity;
	NSMutableDictionary* _dict;
	NSMutableDictionary* _hits;
	NSMutableArray* _order;
	unsigned long long _totalHits;
	unsigned long long _totalMisses;
	NSString* uniqueName;

}

@property (nonatomic,readonly) NSString * uniqueName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)objectForKeyedSubscript:(id)arg1 ;
-(NSString *)uniqueName;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(void)triggerFired:(id)arg1 ;
-(unsigned long long)count;
-(void)removeObjectForKey:(id)arg1 ;
-(id)initWithMaximumCapacity:(unsigned long long)arg1 ;
-(unsigned long long)hitsOnKey:(id)arg1 ;
-(NSString *)description;
-(double)totalHitRatio;
-(void)removeAllObjects;
@end

