/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/


@protocol MFComposeStyleSelectorViewControllerDelegate <NSObject>
@optional
-(void)composeStyleSelectorDidPresentColorPicker:(id)arg1;
-(id)composeStyleSelectorPresentationContext:(id)arg1;
-(void)composeStyleSelectorDidDismissFontPicker:(id)arg1;

@required
-(void)composeStyleSelector:(id)arg1 didSelectStyle:(id)arg2;
-(void)composeStyleSelectorDidCancel:(id)arg1;
-(void)composeStyleSelector:(id)arg1 didChangeFontSize:(double)arg2;
-(void)composeStyleSelector:(id)arg1 didChangeTextColor:(id)arg2;
-(void)composeStyleSelector:(id)arg1 didChangeFont:(id)arg2;

@end

