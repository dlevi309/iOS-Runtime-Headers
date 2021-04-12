/*
* Generated on Thursday, January 14, 2021 at 2:23:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)_statusButtons;
-(void)_updateNavBarAnimated:(BOOL)arg1 ;
-(void)editButtonPressed;
-(id<EKEditItemViewControllerDelegate>)editDelegate;
-(id)_items;
-(void)setEditDelegate:(id<EKEditItemViewControllerDelegate>)arg1 ;
-(BOOL)useCustomBackButton;
-(BOOL)editItemShouldBeAskedForInjectableViewController;
-(void)setOriginalEvent:(EKEvent *)arg1 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(EKEvent *)originalEvent;
-(void)apply;
-(BOOL)shouldShowEditButtonInline;
-(BOOL)presentModally;
-(id)initWithOriginalEvent:(id)arg1 newEvent:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)title;
@end

