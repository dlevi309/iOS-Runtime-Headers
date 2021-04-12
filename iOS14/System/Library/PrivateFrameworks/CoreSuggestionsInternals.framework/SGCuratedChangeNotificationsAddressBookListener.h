/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <CoreSuggestionsInternals/SGCuratedChangeNotificationsBaseListener.h>

@protocol NSObject, OS_dispatch_queue;
@class NSObject;

@interface SGCuratedChangeNotificationsAddressBookListener : SGCuratedChangeNotificationsBaseListener {

	id<NSObject> _notificationCenterToken;
	NSObject*<OS_dispatch_queue> _notificationQueue;

}
-(void)startListening;
-(void)stopListening;
@end

