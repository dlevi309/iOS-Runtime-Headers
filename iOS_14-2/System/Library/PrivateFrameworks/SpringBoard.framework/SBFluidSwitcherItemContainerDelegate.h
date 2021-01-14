/*
* Generated on Thursday, January 14, 2021 at 2:25:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBFluidSwitcherItemContainerDelegate <NSObject>
@required
-(BOOL)canSelectContainer:(id)arg1 numberOfTaps:(long long)arg2;
-(long long)switcherInterfaceOrientation;
-(void)killContainer:(id)arg1 forReason:(long long)arg2;
-(long long)homeScreenInterfaceOrientation;
-(CGRect*)frameForPageViewOfContainer:(id)arg1 fullyPresented:(BOOL)arg2;
-(void)scrollViewKillingProgressUpdated:(double)arg1 ofContainer:(id)arg2;
-(void)didSelectContainer:(id)arg1;

@end

