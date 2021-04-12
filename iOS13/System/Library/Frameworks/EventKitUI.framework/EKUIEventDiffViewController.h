/*
* Generated on Monday, March 1, 2021 at 2:31:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EKEventViewController.h>
#import <libobjc.A.dylib/EKEventTitleDetailItemDelegate.h>
#import <libobjc.A.dylib/EKEventDetailNotesCellDelegate.h>
#import <libobjc.A.dylib/EKEditItemViewControllerProtocol.h>

@protocol EKEditItemViewControllerDelegate;
@class NSMutableArray, EKEvent;

@interface EKUIEventDiffViewController : EKEventViewController <EKEventTitleDetailItemDelegate, EKEventDetailNotesCellDelegate, EKEditItemViewControllerProtocol> {

	NSMutableArray* _items;
	id<EKEditItemViewControllerDelegate> _editDelegate;
	EKEvent* _originalEvent;

}

@property (retain) EKEvent * originalEvent;                                                         //@synthesize originalEvent=_originalEvent - In the implementation block
@property (assign,nonatomic,__weak) id<EKEditItemViewControllerDelegate> editDelegate;              //@synthesize editDelegate=_editDelegate - In the implementation block
@property (assign,nonatomic) BOOL presentModally; 
@property (assign,nonatomic) BOOL editItemShouldBeAskedForInjectableViewController; 
@property (assign,nonatomic) BOOL useCustomBackButton; 
-(id)title;
-(id)_items;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)apply;
-(void)editButtonPressed;
-(id)_statusButtons;
-(id<EKEditItemViewControllerDelegate>)editDelegate;
-(void)setEditDelegate:(id<EKEditItemViewControllerDelegate>)arg1 ;
-(BOOL)presentModally;
-(BOOL)editItemShouldBeAskedForInjectableViewController;
-(BOOL)useCustomBackButton;
-(BOOL)shouldShowEditButtonInline;
-(void)setOriginalEvent:(EKEvent *)arg1 ;
-(EKEvent *)originalEvent;
-(id)initWithOriginalEvent:(id)arg1 newEvent:(id)arg2 ;
-(void)_updateNavBarAnimated:(BOOL)arg1 ;
@end

