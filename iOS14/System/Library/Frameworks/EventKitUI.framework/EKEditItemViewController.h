/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<EKEditItemViewControllerDelegate>)editDelegate;
-(BOOL)showsDoneButton;
-(id)initWithFrame:(CGRect)arg1 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(void)setEditDelegate:(id<EKEditItemViewControllerDelegate>)arg1 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(BOOL)modal;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)setShowsDoneButton:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 styleProvider:(id)arg2 ;
-(void)popIfNonModal;
-(void)saveAndDismissWithExtremePrejudice;
-(CGSize)preferredContentSize;
-(void)didReceiveMemoryWarning;
-(unsigned long long)subitem;
-(void)saveAndDismiss;
-(void)viewDidLoad;
-(void)setCell:(id)arg1 checked:(BOOL)arg2 ;
-(BOOL)fitsPopoverWhenKeyboardActive;
-(void)setModal:(BOOL)arg1 ;
-(double)marginForTableView:(id)arg1 ;
-(BOOL)validateAllowingAlert:(BOOL)arg1 ;
-(void)_saveAndDismissWithForce:(BOOL)arg1 ;
-(void)setSubitem:(unsigned long long)arg1 ;
-(void)cancel;
@end

