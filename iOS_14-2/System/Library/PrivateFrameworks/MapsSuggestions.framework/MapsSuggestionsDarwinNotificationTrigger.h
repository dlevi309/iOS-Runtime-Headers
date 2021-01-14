/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestionsBaseTrigger.h>

@interface MapsSuggestionsDarwinNotificationTrigger : MapsSuggestionsBaseTrigger {

	const char* _notificationName;
	int _notificationToken;

}
-(void)didAddFirstObserver;
-(id)initWithNotificationName:(const char*)arg1 triggerName:(id)arg2 ;
-(id)initWithNotificationName:(const char*)arg1 ;
-(id)initWithName:(id)arg1 ;
-(void)didRemoveLastObserver;
-(const char*)notificationName;
-(void)dealloc;
@end

