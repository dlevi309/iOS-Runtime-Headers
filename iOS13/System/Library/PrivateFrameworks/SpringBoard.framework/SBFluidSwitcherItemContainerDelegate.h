/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBFluidSwitcherItemContainerDelegate <NSObject>
@required
-(double)switcherCardScale;
-(long long)switcherInterfaceOrientation;
-(long long)homeScreenInterfaceOrientation;
-(void)killContainer:(id)arg1 forReason:(long long)arg2;
-(BOOL)canSelectContainer:(id)arg1 numberOfTaps:(long long)arg2;
-(void)didSelectContainer:(id)arg1;
-(CGRect*)frameForPageViewOfContainer:(id)arg1 fullyPresented:(BOOL)arg2;
-(void)scrollViewKillingProgressUpdated:(double)arg1 ofContainer:(id)arg2;
-(BOOL)shouldUseBackgroundWallpaperTreatmentForItemContainer:(id)arg1;

@end

