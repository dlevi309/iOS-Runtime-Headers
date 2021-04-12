/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/


@protocol CPSNavigationAlertQueueDelegate <NSObject>
@required
-(void)navigationAlertQueue:(id)arg1 shouldDisplayAlertView:(id)arg2 animated:(BOOL)arg3;
-(void)navigationAlertQueue:(id)arg1 shouldRemoveAlertView:(id)arg2 animated:(BOOL)arg3 dismissalContext:(unsigned long long)arg4 completion:(/*^block*/id)arg5;
-(BOOL)canAnimateNavigationAlert;

@end

