/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestions-Structs.h>
#import <MapsSuggestions/MapsSuggestionsObject.h>

@protocol MapsSuggestionsBudgetDelegate;
@class NSString, NSMutableDictionary;

@interface MapsSuggestionsBudget : NSObject <MapsSuggestionsObject> {

	NSString* _name;
	Queue _queue;
	vector<MSg::_RollingWindowBudgetRule, std::__1::allocator<MSg::_RollingWindowBudgetRule> >* _rules;
	NSMutableDictionary* _data;
	id<MapsSuggestionsBudgetDelegate> _delegate;

}

@property (nonatomic,readonly) NSString * uniqueName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)uniqueName;
-(NSString *)description;
-(BOOL)spendNow;
-(void)addRollingWindowOfCount:(unsigned long long)arg1 perDuration:(const Duration*)arg2 name:(id)arg3 ;
-(id)initWithDelegate:(id)arg1 name:(id)arg2 ;
-(void)addRollingWindowOfCount:(unsigned long long)arg1 perTimeInterval:(double)arg2 name:(id)arg3 ;
-(BOOL)hasBudgetLeft;
-(BOOL)spendAtTime:(id)arg1 ;
-(id)q_loadStateForRuleName:(id)arg1 ;
-(BOOL)q_saveStateForRuleName:(id)arg1 state:(id)arg2 ;
-(void)reset;
@end

