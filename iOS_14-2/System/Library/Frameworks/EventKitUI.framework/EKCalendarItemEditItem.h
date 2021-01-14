/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <libobjc.A.dylib/EKEditItemViewControllerDelegate.h>

@protocol EKEditItemViewControllerProtocol, EKCalendarItemEditItemDelegate, EKStyleProvider;
@class EKEventStore, UIViewController, EKCalendarItem, UIResponder, NSString;

@interface EKCalendarItemEditItem : NSObject <EKEditItemViewControllerDelegate> {

	EKEventStore* _store;
	UIViewController*<EKEditItemViewControllerProtocol> _viewController;
	EKCalendarItem* _calendarItem;
	id<EKCalendarItemEditItemDelegate> _delegate;
	id<EKStyleProvider> _styleProvider;
	UIResponder* _selectedResponder;

}

@property (assign,nonatomic,__weak) id<EKCalendarItemEditItemDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<EKStyleProvider> styleProvider;                               //@synthesize styleProvider=_styleProvider - In the implementation block
@property (nonatomic,retain) UIResponder * selectedResponder;                                 //@synthesize selectedResponder=_selectedResponder - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)numberOfSubitems;
-(id)footerView;
-(double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 ;
-(id)headerTitle;
-(id)detailViewControllerWithFrame:(CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2 ;
-(BOOL)editItemViewControllerSave:(id)arg1 ;
-(id<EKCalendarItemEditItemDelegate>)delegate;
-(void)refreshFromCalendarItemAndStore;
-(id)injectableViewControllerWithFrame:(CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2 ;
-(void)showViewController:(id)arg1 editor:(id)arg2 animated:(BOOL)arg3 ;
-(BOOL)forceRefreshStartAndEndDatesOnSave;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 inEditor:(id)arg2 ;
-(void)editor:(id)arg1 requestsInjectableViewControllerToBeShownForSubitem:(unsigned long long)arg2 ;
-(void)editorDidScroll:(id)arg1 ;
-(void)notifyRequiresHeightChange;
-(BOOL)shouldPinKeyboard;
-(id)viewForActionSheet;
-(id)trailingSwipeActionsConfigurationForRowAtIndex:(long long)arg1 ;
-(void)tableViewDidScroll;
-(BOOL)canBeConfiguredForCalendarConstraints:(id)arg1 ;
-(void)editor:(id)arg1 didStartEditingItem:(id)arg2 ;
-(BOOL)forceTableReloadOnSave;
-(double)footerHeightForWidth:(double)arg1 ;
-(void)applicationDidResume;
-(void)setDelegate:(id<EKCalendarItemEditItemDelegate>)arg1 ;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(void)addStylingToCell:(id)arg1 forSubitemAtIndex:(unsigned long long)arg2 ;
-(void)notifySubitemDidSave:(unsigned long long)arg1 ;
-(BOOL)configureForCalendarConstraints:(id)arg1 ;
-(BOOL)prefersTargettedTableReloadOnSave;
-(BOOL)requiresReconfigurationOnSave;
-(BOOL)forceRefreshInviteesItemOnSave;
-(BOOL)forceRefreshLocationItemOnSave;
-(void)endInlineEditing;
-(BOOL)isInline;
-(void)reset;
-(id)calendarItem;
-(void)setCalendarItem:(id)arg1 store:(id)arg2 ;
-(UIResponder *)selectedResponder;
-(void)setSelectedResponder:(UIResponder *)arg1 ;
-(void)notifyDidStartEditing;
-(void)notifyDidEndEditing;
-(void)notifyTextChanged;
-(void)editItemViewController:(id)arg1 didCompleteWithAction:(int)arg2 ;
-(id)editItemEventToDetach;
-(void)editItemViewControllerWantsKeyboardPinned:(BOOL)arg1 ;
-(BOOL)editItemViewControllerShouldShowDetachAlert;
-(id<EKStyleProvider>)styleProvider;
-(BOOL)usesDetailViewControllerForSubitem:(unsigned long long)arg1 ;
-(BOOL)saveAndDismissWithForce:(BOOL)arg1 ;
-(BOOL)editor:(id)arg1 canSelectSubitem:(unsigned long long)arg2 ;
-(void)editor:(id)arg1 didSelectSubitem:(unsigned long long)arg2 ;
-(id)footerTitle;
-(void)editor:(id)arg1 didDeselectSubitem:(unsigned long long)arg2 ;
-(void)setStyleProvider:(id<EKStyleProvider>)arg1 ;
-(BOOL)editor:(id)arg1 shouldClearSelectionFromSubitem:(unsigned long long)arg2 ;
-(BOOL)shouldAppearWithVisibility:(int)arg1 ;
-(void)prepareForReload;
@end

