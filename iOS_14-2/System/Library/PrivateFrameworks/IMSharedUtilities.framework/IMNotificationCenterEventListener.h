/*
* Generated on Thursday, January 14, 2021 at 2:22:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isListening;
-(void)_notification:(id)arg1 ;
-(void)willStartListening;
-(void)willStopListening;
-(void)registerForNotificationName:(id)arg1 object:(id)arg2 ;
-(void)registerForNotificationName:(id)arg1 ;
-(BOOL)isRegisteredForNotification;
-(NSString *)registeredNotificationName;
-(NSString *)notificationName;
-(id)notificationObject;
-(void)willReset;
-(void)dealloc;
@end

