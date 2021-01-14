/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <CoreSuggestionsInternals/SGCuratedChangeNotificationsBaseListener.h>

@protocol NSObject;
@interface SGCuratedChangeNotificationsCalendarListener : SGCuratedChangeNotificationsBaseListener {

	id<NSObject> _notificationCenterToken;

}
-(void)startListening;
-(void)stopListening;
@end

