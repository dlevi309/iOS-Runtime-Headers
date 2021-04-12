/*
* Generated on Monday, March 1, 2021 at 2:30:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol UIWindowDelegate <NSObject>
@optional
-(id)rotatingSnapshotViewForWindow:(id)arg1;
-(id)rotatingContentViewForWindow:(id)arg1;
-(id)rotatingHeaderViewForWindow:(id)arg1;
-(id)rotatingFooterViewForWindow:(id)arg1;
-(void)getRotationContentSettings:(SCD_Struct_UI47*)arg1 forWindow:(id)arg2;
-(void)window:(id)arg1 willAnimateFromContentFrame:(CGRect)arg2 toContentFrame:(CGRect)arg3;
-(BOOL)window:(id)arg1 shouldAutorotateToInterfaceOrientation:(long long)arg2;
-(void)window:(id)arg1 willRotateToInterfaceOrientation:(long long)arg2 duration:(double)arg3;
-(void)window:(id)arg1 didAnimateFirstHalfOfRotationToInterfaceOrientation:(long long)arg2;
-(void)window:(id)arg1 didRotateFromInterfaceOrientation:(long long)arg2;
-(BOOL)shouldWindowUseOnePartInterfaceRotationAnimation:(id)arg1;
-(void)window:(id)arg1 willAnimateRotationToInterfaceOrientation:(long long)arg2 duration:(double)arg3;
-(void)window:(id)arg1 willAnimateFirstHalfOfRotationToInterfaceOrientation:(long long)arg2 duration:(double)arg3;
-(void)window:(id)arg1 willAnimateSecondHalfOfRotationFromInterfaceOrientation:(long long)arg2 duration:(double)arg3;

@end

