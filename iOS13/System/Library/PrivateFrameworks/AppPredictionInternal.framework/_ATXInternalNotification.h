/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
@class NSString;

@interface _ATXInternalNotification : NSObject {

	NSString* _notificationName;
	id _token;
	opaque_pthread_mutex_t _lock;

}
+(void)postData:(id)arg1 forNotificationNamed:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(void)registerForNotifications:(/*^block*/id)arg1 ;
-(id)initWithNotificationName:(id)arg1 ;
@end

