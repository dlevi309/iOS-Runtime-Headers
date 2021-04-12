/*
* Generated on Monday, March 1, 2021 at 2:35:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
*/

#import <libobjc.A.dylib/CACAXNotificationObserverDelegate.h>
#import <libobjc.A.dylib/CACContentViewManager.h>

@class CACAXNotificationObserver;

@interface CACOutOfProcessPresentationManager : NSObject <CACAXNotificationObserverDelegate, CACContentViewManager> {

	CACAXNotificationObserver* _observer;

}

@property (nonatomic,retain) CACAXNotificationObserver * observer;              //@synthesize observer=_observer - In the implementation block
+(long long)remoteViewType;
+(int)axNotification;
-(id)init;
-(CACAXNotificationObserver *)observer;
-(void)setObserver:(CACAXNotificationObserver *)arg1 ;
-(void)hide;
-(BOOL)isShowing;
-(BOOL)isOverlay;
-(BOOL)isOutOfProcess;
-(void)handleAXNotificationData:(void*)arg1 ;
-(void)hideWithoutAnimation;
-(void)observer:(id)arg1 didObserveNotification:(int)arg2 notificationData:(void*)arg3 ;
-(void)presentWithData:(id)arg1 ;
@end

