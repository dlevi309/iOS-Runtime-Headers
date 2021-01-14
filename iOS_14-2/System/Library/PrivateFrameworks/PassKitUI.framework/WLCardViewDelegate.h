/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/


@protocol WLCardViewDelegate <NSObject>
@optional
-(void)passViewTapped:(id)arg1;
-(void)faceFrameDidChangeForPassView:(id)arg1;
-(void)passViewDidResize:(id)arg1 animated:(BOOL)arg2;
-(void)passViewExpandButtonTapped:(id)arg1;
-(void)passView:(id)arg1 deleteButtonPressedForPass:(id)arg2;
-(BOOL)passView:(id)arg1 deleteButtonEnabledForPass:(id)arg2;
-(void)passView:(id)arg1 willPresentPassDetailsViewController:(id)arg2;
-(void)passView:(id)arg1 didPresentPassDetailsViewController:(id)arg2;

@end

