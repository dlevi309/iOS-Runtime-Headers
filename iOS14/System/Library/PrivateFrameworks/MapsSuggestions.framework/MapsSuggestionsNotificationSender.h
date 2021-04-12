/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/


#import <MapsSuggestions/MapsSuggestions-Structs.h>
@interface MapsSuggestionsNotificationSender : NSObject {

	unique_ptr<MSg::NotificationSender, std::__1::default_delete<MSg::NotificationSender> >* _sender;

}
-(id)initWithDarwinNotification:(const char*)arg1 ;
-(void)notify;
-(void)notifyWithState:(unsigned long long)arg1 ;
-(void)notifyWithPayloadString:(id)arg1 ;
@end

