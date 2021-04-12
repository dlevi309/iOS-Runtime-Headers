/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VisualAlert.framework/VisualAlert
*/

#import <VisualAlert/VISAXNotificationHandler.h>

@interface AXLocalNotificationHandler : VISAXNotificationHandler {

	id _opaqueObserver;

}

@property (setter=_setOpaqueObserver:,nonatomic,retain) id _opaqueObserver;              //@synthesize opaqueObserver=_opaqueObserver - In the implementation block
-(void)_stopObserving;
-(void)_startObserving;
-(id)_notificationTypeDescription;
-(void)_setOpaqueObserver:(id)arg1 ;
-(id)_opaqueObserver;
-(void)_startObservingWithObject:(id)arg1 ;
-(void)_stopObservingWithObject:(id)arg1 ;
@end

