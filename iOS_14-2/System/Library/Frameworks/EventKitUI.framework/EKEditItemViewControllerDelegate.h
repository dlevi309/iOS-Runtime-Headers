/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/


@protocol EKEditItemViewControllerDelegate <NSObject>
@optional
-(BOOL)editItemViewControllerSave:(id)arg1;
-(void)editItemViewControllerWantsKeyboardPinned:(BOOL)arg1;

@required
-(void)editItemViewController:(id)arg1 didCompleteWithAction:(int)arg2;
-(id)editItemEventToDetach;
-(BOOL)editItemViewControllerShouldShowDetachAlert;

@end

