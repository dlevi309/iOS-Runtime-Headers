/*
* Generated on Thursday, January 14, 2021 at 2:28:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
*/


@protocol CACAXNotificationObserverDelegate;
#import <SpeechRecognitionCommandAndControl/SpeechRecognitionCommandAndControl-Structs.h>
@class NSArray;

@interface CACAXNotificationObserver : NSObject {

	AXObserverRef _observer;
	id<CACAXNotificationObserverDelegate> _delegate;
	NSArray* _notifications;

}

@property (assign,nonatomic,__weak) id<CACAXNotificationObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSArray * notifications;                                          //@synthesize notifications=_notifications - In the implementation block
-(id<CACAXNotificationObserverDelegate>)delegate;
-(void)setDelegate:(id<CACAXNotificationObserverDelegate>)arg1 ;
-(NSArray *)notifications;
-(id)initWithNotifications:(id)arg1 ;
-(void)_didObserveNotification:(int)arg1 notificationData:(void*)arg2 ;
@end

