/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/


@protocol PKPassGroupViewReceiver <NSObject>
@optional
-(void)setTransitionDuration:(double)arg1;
-(void)groupViewDidMoveToReceiver:(id)arg1;
-(void)groupViewWillBeAvailable:(id)arg1;
-(void)groupViewNeedsAnimating:(id)arg1 withVelocity:(double)arg2 dragging:(BOOL)arg3;
-(void)willDeletePass:(id)arg1;
-(void)didDeletePass:(id)arg1;

@required
-(void)groupViewIsAvailable:(id)arg1;
-(void)leadingHeaderViewInterstitialIsAvailable:(id)arg1;
-(void)trailingHeaderViewInterstitialIsAvailable:(id)arg1;

@end

