/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestionsBaseTrigger.h>
#import <MapsSuggestions/MapsSuggestionsEventKitObserver.h>

@class MapsSuggestionsEventKit, NSString;

@interface MapsSuggestionsEventKitChangedTrigger : MapsSuggestionsBaseTrigger <MapsSuggestionsEventKitObserver> {

	MapsSuggestionsEventKit* _eventKit;

}

@property (nonatomic,readonly) NSString * uniqueName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didAddFirstObserver;
-(void)didRemoveLastObserver;
-(void)eventKitDidChange:(id)arg1 ;
-(id)initWithEventKit:(id)arg1 ;
@end

