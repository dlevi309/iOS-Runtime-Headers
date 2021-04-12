/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITextFieldDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <libobjc.A.dylib/WFWorkflowViewControllerDelegate.h>

@protocol VCUIShortcutViewControllerDelegate;
@class OBWelcomeController, UINavigationController, UIBarButtonItem, WFWorkflow, NSString, WFWorkflowIcon, NSLayoutConstraint, UITableView, UIView, OBTrayButton, WFDatabase, WFWorkflowViewController;

@interface VCUIShortcutViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate, UINavigationControllerDelegate, WFWorkflowViewControllerDelegate> {

	BOOL _hasAppeared;
	id<VCUIShortcutViewControllerDelegate> _delegate;
	OBWelcomeController* _welcomeController;
	UINavigationController* _navigationController;
	UIBarButtonItem* _rightBarButtonItem;
	WFWorkflow* _workflow;
	NSString* _shortcutName;
	NSString* _shortcutDescription;
	WFWorkflowIcon* _shortcutIcon;
	unsigned long long _mode;
	NSLayoutConstraint* _tableViewHeightConstraint;
	UITableView* _tableView;
	NSLayoutConstraint* _customViewContainerHeightConstraint;
	UIView* _customViewContainer;
	UIView* _customView;
	OBTrayButton* _primaryButton;
	OBTrayButton* _secondaryButton;
	WFDatabase* _database;
	WFWorkflowViewController* _inlineWorkflowViewController;

}

@property (nonatomic,readonly) unsigned long long mode;                                               //@synthesize mode=_mode - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * tableViewHeightConstraint;                        //@synthesize tableViewHeightConstraint=_tableViewHeightConstraint - In the implementation block
@property (nonatomic,readonly) UITableView * tableView;                                               //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * customViewContainerHeightConstraint;              //@synthesize customViewContainerHeightConstraint=_customViewContainerHeightConstraint - In the implementation block
@property (nonatomic,readonly) UIView * customViewContainer;                                          //@synthesize customViewContainer=_customViewContainer - In the implementation block
@property (nonatomic,retain) UIView * customView;                                                     //@synthesize customView=_customView - In the implementation block
@property (nonatomic,retain) OBTrayButton * primaryButton;                                            //@synthesize primaryButton=_primaryButton - In the implementation block
@property (nonatomic,retain) OBTrayButton * secondaryButton;                                          //@synthesize secondaryButton=_secondaryButton - In the implementation block
@property (nonatomic,readonly) WFDatabase * database;                                                 //@synthesize database=_database - In the implementation block
@property (nonatomic,retain) WFWorkflowViewController * inlineWorkflowViewController;                 //@synthesize inlineWorkflowViewController=_inlineWorkflowViewController - In the implementation block
@property (assign,nonatomic) BOOL hasAppeared;                                                        //@synthesize hasAppeared=_hasAppeared - In the implementation block
@property (assign,nonatomic,__weak) id<VCUIShortcutViewControllerDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) OBWelcomeController * welcomeController;                               //@synthesize welcomeController=_welcomeController - In the implementation block
@property (nonatomic,readonly) UINavigationController * navigationController;                         //@synthesize navigationController=_navigationController - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * rightBarButtonItem;                                    //@synthesize rightBarButtonItem=_rightBarButtonItem - In the implementation block
@property (nonatomic,retain) WFWorkflow * workflow;                                                   //@synthesize workflow=_workflow - In the implementation block
@property (nonatomic,copy) NSString * shortcutName;                                                   //@synthesize shortcutName=_shortcutName - In the implementation block
@property (nonatomic,copy) NSString * shortcutDescription;                                            //@synthesize shortcutDescription=_shortcutDescription - In the implementation block
@property (nonatomic,copy) WFWorkflowIcon * shortcutIcon;                                             //@synthesize shortcutIcon=_shortcutIcon - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_preventsAppearanceProxyCustomization;
-(void)dealloc;
-(id<VCUIShortcutViewControllerDelegate>)delegate;
-(void)setDelegate:(id<VCUIShortcutViewControllerDelegate>)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)title;
-(unsigned long long)mode;
-(WFDatabase *)database;
-(id)subtitle;
-(void)setCustomView:(UIView *)arg1 ;
-(UIView *)customView;
-(UITableView *)tableView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(UIBarButtonItem *)rightBarButtonItem;
-(void)setRightBarButtonItem:(UIBarButtonItem *)arg1 ;
-(UINavigationController *)navigationController;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(id)applicationBundleIdentifier;
-(NSString *)shortcutName;
-(void)setShortcutName:(NSString *)arg1 ;
-(NSLayoutConstraint *)tableViewHeightConstraint;
-(id)captionText;
-(void)keyboardWillChange:(id)arg1 ;
-(void)textFieldDidChange:(id)arg1 ;
-(WFWorkflow *)workflow;
-(void)setWorkflow:(WFWorkflow *)arg1 ;
-(id)secondaryButtonTitle;
-(id)primaryButtonTitle;
-(id)headerImage;
-(int)eventSource;
-(void)setPrimaryButton:(OBTrayButton *)arg1 ;
-(void)setSecondaryButton:(OBTrayButton *)arg1 ;
-(OBTrayButton *)primaryButton;
-(OBTrayButton *)secondaryButton;
-(BOOL)hasAppeared;
-(void)setHasAppeared:(BOOL)arg1 ;
-(NSString *)shortcutDescription;
-(void)setShortcutDescription:(NSString *)arg1 ;
-(id)nameCell;
-(void)workflowViewController:(id)arg1 didChangeContentSize:(CGSize)arg2 ;
-(id)initWithWorkflow:(id)arg1 database:(id)arg2 mode:(unsigned long long)arg3 ;
-(unsigned long long)currentPreviewMode;
-(void)updateCustomView;
-(void)setCustomView:(id)arg1 withHeight:(double)arg2 ;
-(id)shortcutPreviewImage;
-(id)shortcutPreview;
-(id)primaryButtonTintColor;
-(id)createdSecondaryButton;
-(id)secondaryButtonTintColor;
-(id)nameSectionTitle;
-(BOOL)shouldShowActionCell;
-(void)didTapPrimaryButton;
-(void)didTapSecondaryButton;
-(void)didTapCancel;
-(void)updatePrimaryButton;
-(void)trackAddEvent;
-(BOOL)isUpdatingExistingShortcut;
-(OBWelcomeController *)welcomeController;
-(WFWorkflowIcon *)shortcutIcon;
-(void)setShortcutIcon:(WFWorkflowIcon *)arg1 ;
-(NSLayoutConstraint *)customViewContainerHeightConstraint;
-(UIView *)customViewContainer;
-(WFWorkflowViewController *)inlineWorkflowViewController;
-(void)setInlineWorkflowViewController:(WFWorkflowViewController *)arg1 ;
@end

