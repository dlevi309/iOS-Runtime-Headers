/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

