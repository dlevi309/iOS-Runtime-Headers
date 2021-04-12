/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/


@protocol PKPassGroupViewDelegate <NSObject>
@optional
-(long long)groupViewContentModeForFrontmostPassWhenPiled:(id)arg1 withDefaultContentMode:(long long)arg2;
-(unsigned long long)groupViewPassesSuppressedContent:(id)arg1;
-(void)groupViewTapped:(id)arg1;
-(void)groupViewPressed:(id)arg1;
-(void)groupViewPressedDidEnd:(id)arg1;
-(BOOL)groupViewShouldAllowPanning:(id)arg1;
-(void)groupViewPanDidBegin:(id)arg1;
-(void)groupViewPanDidEnd:(id)arg1;
-(void)groupView:(id)arg1 panned:(CGPoint)arg2 withVelocity:(CGPoint)arg3;
-(void)groupViewDidUpdatePageControlVisibility:(id)arg1;
-(void)groupView:(id)arg1 didUpdatePassView:(id)arg2;
-(void)groupView:(id)arg1 deleteButtonPressedForPass:(id)arg2;
-(BOOL)groupView:(id)arg1 deleteButtonEnabledForPass:(id)arg2;
-(void)groupView:(id)arg1 frontmostPassViewDidChange:(id)arg2 withContext:(id)arg3;
-(void)groupView:(id)arg1 faceViewFrameDidChangeForFrontmostPassView:(id)arg2;
-(id)groupViewReusablePassViewQueue:(id)arg1;
-(long long)groupViewContentModeForFrontmostPassWhenStacked:(id)arg1;

@end

