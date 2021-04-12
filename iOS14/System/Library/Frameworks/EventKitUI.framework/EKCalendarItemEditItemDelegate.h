/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/


@protocol EKCalendarItemEditItemDelegate <NSObject>
@optional
-(void)editItem:(id)arg1 wantsRowInsertions:(id)arg2 rowDeletions:(id)arg3;
-(void)editItem:(id)arg1 wantsRowsScrolledToVisible:(id)arg2;
-(id)viewControllerForEditItem:(id)arg1;
-(void)editItem:(id)arg1 wantsDoneButtonDisabled:(BOOL)arg2;
-(void)editItemRequiresHeightChange:(id)arg1;
-(void)editItemRequiresPopoverSizeUpdate:(id)arg1;
-(void)editItemWantsFooterTitlesToReload:(id)arg1;
-(void)editItem:(id)arg1 textViewShouldReturn:(id)arg2;
-(void)editItem:(id)arg1 performActionsOnCellAtSubitem:(unsigned long long)arg2 actions:(/*^block*/id)arg3;
-(void)editItemVisibilityChanged:(id)arg1;
-(void)editItem:(id)arg1 wantsRowInsertions:(id)arg2 rowDeletions:(id)arg3 rowReloads:(id)arg4;
-(id)cellWithReuseIdentifier:(id)arg1 forEditItem:(id)arg2;
-(void)editItemTextChanged:(id)arg1;
-(void)editItemDidStartEditing:(id)arg1;
-(void)editItem:(id)arg1 didSaveFromDetailViewController:(BOOL)arg2;
-(void)editItemDidEndEditing:(id)arg1;
-(void)editItemWantsInjectableViewControllerToBeShown:(id)arg1;
-(void)editItem:(id)arg1 wantsKeyboardPinned:(BOOL)arg2;
-(void)editItem:(id)arg1 wantsRowReload:(id)arg2;
-(long long)rowNumberForEditItem:(id)arg1;
-(void)editItem:(id)arg1 willBeginDatePickingWithDate:(id)arg2 action:(SEL)arg3 animated:(BOOL)arg4 forSubitem:(unsigned long long)arg5;
-(void)editItem:(id)arg1 didEndDatePickingAnimated:(BOOL)arg2;

@required
-(id)defaultAlertTitleForEditItem:(id)arg1;

@end

