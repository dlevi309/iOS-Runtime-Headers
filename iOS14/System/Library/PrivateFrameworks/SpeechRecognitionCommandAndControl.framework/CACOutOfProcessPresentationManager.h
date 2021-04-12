/*
* Generated on Thursday, January 14, 2021 at 2:28:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isOutOfProcess;
-(void)setObserver:(CACAXNotificationObserver *)arg1 ;
-(id)init;
-(CACAXNotificationObserver *)observer;
-(BOOL)isShowing;
-(BOOL)isOverlay;
-(void)hide;
-(void)handleAXNotificationData:(void*)arg1 ;
-(BOOL)isPhysiciallyInteractiveOverlay;
-(void)hideWithoutAnimation;
-(void)observer:(id)arg1 didObserveNotification:(int)arg2 notificationData:(void*)arg3 ;
-(void)presentWithData:(id)arg1 ;
@end

