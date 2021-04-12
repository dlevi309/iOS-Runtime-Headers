/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKEditItemViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/EKEventAttachmentCellControllerDelegate.h>

@protocol EKEventAttachmentEditViewControllerDelegate;
@class UITableView, NSArray, NSString;

@interface EKEventAttachmentEditViewController : EKEditItemViewController <UITableViewDataSource, UITableViewDelegate, EKEventAttachmentCellControllerDelegate> {

	UITableView* _table;
	NSArray* _cellControllers;
	id<EKEventAttachmentEditViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<EKEventAttachmentEditViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id<EKEventAttachmentEditViewControllerDelegate>)delegate;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)setDelegate:(id<EKEventAttachmentEditViewControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(id)initWithFrame:(CGRect)arg1 attachments:(id)arg2 sourceIsManaged:(BOOL)arg3 ;
-(id)owningEventForAttachmentCellController:(id)arg1 ;
-(id)parentViewControllerForAttachmentCellController:(id)arg1 ;
-(void)loadView;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
@end

