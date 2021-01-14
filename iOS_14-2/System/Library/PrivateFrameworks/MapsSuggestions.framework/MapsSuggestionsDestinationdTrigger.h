/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestions-Structs.h>
#import <MapsSuggestions/MapsSuggestionsBaseTrigger.h>

@class NSSet;

@interface MapsSuggestionsDestinationdTrigger : MapsSuggestionsBaseTrigger {

	unique_ptr<MSg::NotificationReceiver, std::__1::default_delete<MSg::NotificationReceiver> >* _notificationReceiver;
	NSSet* _ignoredPeerIdentifiers;

}
-(id)initWithName:(id)arg1 queue:(id)arg2 ;
-(void)didAddFirstObserver;
-(id)init;
-(void)didRemoveLastObserver;
-(void)addIgnoredClientProcess:(id)arg1 ;
@end

