/*
* Generated on Monday, March 1, 2021 at 2:35:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

