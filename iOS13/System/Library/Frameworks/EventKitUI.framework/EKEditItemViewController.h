/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/EKEditItemViewControllerProtocol.h>

@protocol EKStyleProvider, EKEditItemViewControllerDelegate;
@class EKUIRecurrenceAlertController;

@interface EKEditItemViewController : UIViewController <EKEditItemViewControllerProtocol> {

	CGRect _initialFrame;
	unsigned long long _subitem;
	BOOL _modal;
	id<EKStyleProvider> _styleProvider;
	id<EKEditItemViewControllerDelegate> _editDelegate;
	EKUIRecurrenceAlertController* _recurrenceAlertController;
	BOOL _showsDoneButton;

}

@property (assign,nonatomic) unsigned long long subitem;                                            //@synthesize subitem=_subitem - In the implementation block
@property (assign,nonatomic) BOOL modal;                                                            //@synthesize modal=_modal - In the implementation block
@property (assign,nonatomic) BOOL showsDoneButton;                                                  //@synthesize showsDoneButton=_showsDoneButton - In the implementation block
@property (assign,nonatomic,__weak) id<EKEditItemViewControllerDelegate> editDelegate;              //@synthesize editDelegate=_editDelegate - In the implementation block
@property (assign,nonatomic) BOOL presentModally; 
@property (assign,nonatomic) BOOL editItemShouldBeAskedForInjectableViewController; 
@property (assign,nonatomic) BOOL useCustomBackButton; 
-(void)cancel;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)preferredContentSize;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(unsigned long long)supportedInterfaceOrientations;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(void)didReceiveMemoryWarning;
-(double)marginForTableView:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 styleProvider:(id)arg2 ;
-(void)popIfNonModal;
-(void)saveAndDismissWithExtremePrejudice;
-(id<EKEditItemViewControllerDelegate>)editDelegate;
-(void)setEditDelegate:(id<EKEditItemViewControllerDelegate>)arg1 ;
-(void)setCell:(id)arg1 checked:(BOOL)arg2 ;
-(BOOL)fitsPopoverWhenKeyboardActive;
-(void)saveAndDismiss;
-(void)setModal:(BOOL)arg1 ;
-(BOOL)validateAllowingAlert:(BOOL)arg1 ;
-(void)_saveAndDismissWithForce:(BOOL)arg1 ;
-(unsigned long long)subitem;
-(void)setSubitem:(unsigned long long)arg1 ;
-(BOOL)modal;
-(BOOL)showsDoneButton;
-(void)setShowsDoneButton:(BOOL)arg1 ;
@end

