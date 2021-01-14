/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestionsBaseTrigger.h>
#import <MapsSuggestions/MapsSuggestionsRunCondition.h>

@class NSString;

@interface MapsSuggestionsNetworkReachableTrigger : MapsSuggestionsBaseTrigger <MapsSuggestionsRunCondition>

@property (nonatomic,readonly) NSString * uniqueName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didAddFirstObserver;
-(id)init;
-(void)_reachabilityChanged;
-(void)didRemoveLastObserver;
-(id)objectForJSON;
-(BOOL)shouldRun;
@end

