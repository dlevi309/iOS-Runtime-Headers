/*
* Generated on Thursday, January 14, 2021 at 2:24:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


@protocol MRPlatterViewControllerDelegate <NSObject>
@optional
-(void)dismissPlatterViewController:(id)arg1 completion:(/*^block*/id)arg2;
-(void)platterViewController:(id)arg1 willToggleRoutingPicker:(BOOL)arg2;
-(void)platterViewController:(id)arg1 didToggleRoutingPicker:(BOOL)arg2;
-(id)platterViewController:(id)arg1 presentingViewForPresentedViewController:(id)arg2;
-(void)platterViewController:(id)arg1 didReceiveInteractionEvent:(id)arg2;
-(void)platterViewController:(id)arg1 homeGestureDismisalAllowedDidChange:(BOOL)arg2;
-(void)platterViewController:(id)arg1 didPickRoute:(id)arg2;
-(BOOL)shouldPresentUsingViewServicePlatterViewController:(id)arg1;
-(void)platterViewController:(id)arg1 shouldDisplayPlatterDidChange:(BOOL)arg2;

@end

