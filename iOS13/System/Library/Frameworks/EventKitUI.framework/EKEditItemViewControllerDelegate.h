/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/


@protocol EKEditItemViewControllerDelegate <NSObject>
@optional
-(BOOL)editItemViewControllerSave:(id)arg1;
-(void)editItemViewControllerWantsKeyboardPinned:(BOOL)arg1;
-(id)editItemEventToDetach;

@required
-(void)editItemViewController:(id)arg1 didCompleteWithAction:(int)arg2;
-(BOOL)editItemViewControllerShouldShowDetachAlert;

@end

