/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CarPlay.framework/CarPlay
*/


@protocol CPMapClientTemplateDelegate <CPTemplateDelegate>
@required
-(void)previewTripIdentifier:(id)arg1 usingRouteIdentifier:(id)arg2;
-(void)startTripIdentifier:(id)arg1 usingRouteIdentifier:(id)arg2;
-(void)clientPanBeganWithDirection:(long long)arg1;
-(void)clientPanEndedWithDirection:(long long)arg1;
-(void)clientPanWithDirection:(long long)arg1;
-(void)clientPanGestureBegan;
-(void)clientPanGestureWithDeltaPoint:(CGPoint)arg1 velocity:(CGPoint)arg2;
-(void)clientPanGestureEndedWithVelocity:(CGPoint)arg1;
-(void)clientPanViewDidAppear;
-(void)clientPanViewDidDisappear;
-(void)clientPanViewWillDisappear;
-(void)clientNavigationAlertWillAppear:(id)arg1;
-(void)clientNavigationAlertDidAppear:(id)arg1;
-(void)clientNavigationAlertWillDisappear:(id)arg1 context:(unsigned long long)arg2;
-(void)clientNavigationAlertDidDisappear:(id)arg1 context:(unsigned long long)arg2;
-(void)clientTripCanceledByExternalNavigation;
-(void)clientTripAlreadyStartedException;

@end

