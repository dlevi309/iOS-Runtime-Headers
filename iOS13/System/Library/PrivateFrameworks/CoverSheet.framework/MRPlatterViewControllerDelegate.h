/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/


@protocol MRPlatterViewControllerDelegate <NSObject>
@optional
-(void)platterViewController:(id)arg1 shouldDisplayPlatterDidChange:(BOOL)arg2;
-(void)platterViewController:(id)arg1 didReceiveInteractionEvent:(id)arg2;
-(void)platterViewController:(id)arg1 didToggleRoutingPicker:(BOOL)arg2;
-(void)platterViewController:(id)arg1 willToggleRoutingPicker:(BOOL)arg2;
-(void)dismissPlatterViewController:(id)arg1 completion:(/*^block*/id)arg2;
-(id)platterViewController:(id)arg1 presentingViewForPresentedViewController:(id)arg2;
-(void)platterViewController:(id)arg1 homeGestureDismisalAllowedDidChange:(BOOL)arg2;
-(BOOL)shouldPresentUsingViewServicePlatterViewController:(id)arg1;
-(void)platterViewController:(id)arg1 didPickRoute:(id)arg2;

@end

