/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestionsTriggeringToggle.h>
#import <MapsSuggestions/MapsSuggestionsTriggerObserver.h>

@class NSMutableArray, NSString;

@interface MapsSuggestionsCompositeTriggeringToggle : MapsSuggestionsTriggeringToggle <MapsSuggestionsTriggerObserver> {

	NSMutableArray* _runConditions;
	NSMutableArray* _triggers;

}

@property (nonatomic,readonly) NSString * uniqueName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didAddFirstObserver;
-(void)triggerFired:(id)arg1 ;
-(void)addRunCondition:(id)arg1 ;
-(void)didRemoveLastObserver;
-(id)initWithName:(id)arg1 behavior:(unsigned long long)arg2 ;
-(id)objectForJSON;
-(BOOL)shouldRun;
-(void)addTrigger:(id)arg1 ;
-(void)dealloc;
@end

