/*
* Generated on Thursday, January 14, 2021 at 2:20:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol UIWindowDelegate <NSObject>
@optional
-(void)window:(id)arg1 willAnimateSecondHalfOfRotationFromInterfaceOrientation:(long long)arg2 duration:(double)arg3;
-(void)window:(id)arg1 willAnimateFirstHalfOfRotationToInterfaceOrientation:(long long)arg2 duration:(double)arg3;
-(void)window:(id)arg1 didAnimateFirstHalfOfRotationToInterfaceOrientation:(long long)arg2;
-(void)window:(id)arg1 willAnimateRotationToInterfaceOrientation:(long long)arg2 duration:(double)arg3;
-(void)window:(id)arg1 willAnimateFromContentFrame:(CGRect)arg2 toContentFrame:(CGRect)arg3;
-(BOOL)window:(id)arg1 shouldAutorotateToInterfaceOrientation:(long long)arg2;
-(void)window:(id)arg1 willRotateToInterfaceOrientation:(long long)arg2 duration:(double)arg3;
-(void)window:(id)arg1 didRotateFromInterfaceOrientation:(long long)arg2;
-(BOOL)shouldWindowUseOnePartInterfaceRotationAnimation:(id)arg1;
-(id)rotatingSnapshotViewForWindow:(id)arg1;
-(id)rotatingContentViewForWindow:(id)arg1;
-(id)rotatingHeaderViewForWindow:(id)arg1;
-(id)rotatingFooterViewForWindow:(id)arg1;
-(void)getRotationContentSettings:(SCD_Struct_UI53*)arg1 forWindow:(id)arg2;

@end

