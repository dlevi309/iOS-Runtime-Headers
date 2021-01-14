/*
* Generated on Thursday, January 14, 2021 at 2:26:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
*/


#import <MediaStream/MediaStream-Structs.h>
@class NSMutableDictionary;

@interface MSAlertManager : NSObject {

	NSMutableDictionary* _personIDToNotification;

}
+(id)sharedAlertManager;
-(id)init;
-(void)_userDidRespondToNotification:(CFUserNotificationRef)arg1 info:(id)arg2 responseFlags:(unsigned long long)arg3 ;
-(void)_dismissNotificationForPersonID:(id)arg1 ;
-(void)_showNotificationInfo:(id)arg1 ;
-(void)displayAlertForPersonID:(id)arg1 notificationDict:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
@end

