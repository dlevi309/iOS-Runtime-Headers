/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestionsBaseTrigger.h>
#import <MapsSuggestions/MapsSuggestionsTriggerObserver.h>
#import <MapsSuggestions/MapsSuggestionsRunCondition.h>

@protocol MapsSuggestionsFirstUnlockProtocol;
@class NSString;

@interface MapsSuggestionsFirstUnlockTrigger : MapsSuggestionsBaseTrigger <MapsSuggestionsTriggerObserver, MapsSuggestionsRunCondition> {

	id<MapsSuggestionsFirstUnlockProtocol> _firstUnlock;

}

@property (nonatomic,readonly) NSString * uniqueName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didAddFirstObserver;
-(id)init;
-(void)triggerFired:(id)arg1 ;
-(void)didRemoveLastObserver;
-(id)initWithFirstLock:(id)arg1 ;
-(id)objectForJSON;
-(BOOL)shouldRun;
@end

