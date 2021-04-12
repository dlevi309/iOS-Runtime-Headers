/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
*/

#import <IMSharedUtilities/IMEventListener.h>

@class NSString;

@interface IMNotificationCenterEventListener : IMEventListener {

	NSString* _registeredNotificationName;
	NSString* _notificationName;
	id _notificationObject;

}

@property (nonatomic,readonly) NSString * registeredNotificationName;              //@synthesize registeredNotificationName=_registeredNotificationName - In the implementation block
@property (readonly) BOOL isRegisteredForNotification; 
@property (copy,readonly) NSString * notificationName;                             //@synthesize notificationName=_notificationName - In the implementation block
@property (__weak,readonly) id notificationObject;                                 //@synthesize notificationObject=_notificationObject - In the implementation block
+(id)eventListenerForNotificationName:(id)arg1 object:(id)arg2 ;
+(id)eventListenerForNotificationName:(id)arg1 ;
-(void)dealloc;
-(void)_notification:(id)arg1 ;
-(void)willStartListening;
-(void)willStopListening;
-(void)willReset;
-(BOOL)isListening;
-(void)registerForNotificationName:(id)arg1 object:(id)arg2 ;
-(void)registerForNotificationName:(id)arg1 ;
-(BOOL)isRegisteredForNotification;
-(NSString *)registeredNotificationName;
-(NSString *)notificationName;
-(id)notificationObject;
@end

