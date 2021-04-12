/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestionsBaseTrigger.h>
#import <MapsSuggestions/MapsSuggestionsTrigger.h>
#import <MapsSuggestions/MapsSuggestionsRunCondition.h>

@class NSString;

@interface MapsSuggestionsTriggeringToggle : MapsSuggestionsBaseTrigger <MapsSuggestionsTrigger, MapsSuggestionsRunCondition> {

	unsigned long long _behavior;
	BOOL _state;
	unsigned long long _timesUpdated;

}

@property (assign,nonatomic) BOOL state; 
@property (nonatomic,readonly) unsigned long long timesUpdated; 
@property (nonatomic,readonly) NSString * uniqueName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didAddFirstObserver;
-(id)initWithName:(id)arg1 ;
-(unsigned long long)timesUpdated;
-(void)didRemoveLastObserver;
-(void)setState:(BOOL)arg1 ;
-(id)initWithName:(id)arg1 behavior:(unsigned long long)arg2 ;
-(id)objectForJSON;
-(BOOL)state;
-(BOOL)shouldRun;
@end

