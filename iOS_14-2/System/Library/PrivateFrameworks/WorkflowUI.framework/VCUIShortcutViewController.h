/*
* Generated on Thursday, January 14, 2021 at 2:28:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@class OBWelcomeController, UINavigationController, UIBarButtonItem, WFWorkflow, WFTrigger, WFAutomationSuggestion, NSString, WFWorkflowIcon, NSLayoutConstraint, UITableView, UIView, OBTrayButton, WFDatabase, WFWorkflowViewController;

@interface VCUIShortcutViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate, UINavigationControllerDelegate, WFWorkflowViewControllerDelegate> {

	BOOL _hasAppeared;
	id<VCUIShortcutViewControllerDelegate> _delegate;
	OBWelcomeController* _welcomeController;
	UINavigationController* _navigationController;
	UIBarButtonItem* _rightBarButtonItem;
	WFWorkflow* _workflow;
	WFTrigger* _trigger;
	WFAutomationSuggestion* _suggestion;
	unsigned long long _source;
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
@property (nonatomic,retain) WFTrigger * trigger;                                                     //@synthesize trigger=_trigger - In the implementation block
@property (nonatomic,retain) WFAutomationSuggestion * suggestion;                                     //@synthesize suggestion=_suggestion - In the implementation block
@property (assign,nonatomic) unsigned long long source;                                               //@synthesize source=_source - In the implementation block
@property (nonatomic,copy) NSString * shortcutName;                                                   //@synthesize shortcutName=_shortcutName - In the implementation block
@property (nonatomic,copy) NSString * shortcutDescription;                                            //@synthesize shortcutDescription=_shortcutDescription - In the implementation block
@property (nonatomic,copy) WFWorkflowIcon * shortcutIcon;                                             //@synthesize shortcutIcon=_shortcutIcon - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_preventsAppearanceProxyCustomization;
-(void)viewDidAppear:(BOOL)arg1 ;
-(unsigned long long)mode;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setPrimaryButton:(OBTrayButton *)arg1 ;
-(void)setSecondaryButton:(OBTrayButton *)arg1 ;
-(WFTrigger *)trigger;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(BOOL)hasAppeared;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id<VCUIShortcutViewControllerDelegate>)delegate;
-(UITableView *)tableView;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)keyboardWillChange:(id)arg1 ;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(id)subtitle;
-(void)setTrigger:(WFTrigger *)arg1 ;
-(NSLayoutConstraint *)tableViewHeightConstraint;
-(WFAutomationSuggestion *)suggestion;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)setShortcutName:(NSString *)arg1 ;
-(void)setSource:(unsigned long long)arg1 ;
-(int)eventSource;
-(void)setHasAppeared:(BOOL)arg1 ;
-(void)setDelegate:(id<VCUIShortcutViewControllerDelegate>)arg1 ;
-(WFWorkflow *)workflow;
-(UIView *)customView;
-(void)didTapCancel;
-(id)primaryButtonTitle;
-(id)secondaryButtonTitle;
-(id)captionText;
-(void)viewDidLoad;
-(void)setCustomView:(UIView *)arg1 ;
-(OBTrayButton *)primaryButton;
-(id)headerImage;
-(OBTrayButton *)secondaryButton;
-(void)setWorkflow:(WFWorkflow *)arg1 ;
-(void)setSuggestion:(WFAutomationSuggestion *)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(UIBarButtonItem *)rightBarButtonItem;
-(WFDatabase *)database;
-(id)nameCell;
-(void)textFieldDidChange:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)setRightBarButtonItem:(UIBarButtonItem *)arg1 ;
-(NSString *)shortcutDescription;
-(NSString *)shortcutName;
-(id)applicationBundleIdentifier;
-(id)title;
-(void)dealloc;
-(unsigned long long)source;
-(UINavigationController *)navigationController;
-(OBWelcomeController *)welcomeController;
-(void)didTapPrimaryButton;
-(void)didTapSecondaryButton;
-(void)workflowViewController:(id)arg1 didChangeContentSize:(CGSize)arg2 ;
-(id)initWithWorkflow:(id)arg1 database:(id)arg2 mode:(unsigned long long)arg3 ;
-(id)initWithAutomationSuggestion:(id)arg1 workflow:(id)arg2 database:(id)arg3 ;
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
-(void)createNewAutomationSuggestion;
-(void)updatePrimaryButton;
-(void)trackAddEvent;
-(BOOL)isUpdatingExistingShortcut;
-(void)setShortcutDescription:(NSString *)arg1 ;
-(WFWorkflowIcon *)shortcutIcon;
-(void)setShortcutIcon:(WFWorkflowIcon *)arg1 ;
-(NSLayoutConstraint *)customViewContainerHeightConstraint;
-(UIView *)customViewContainer;
-(WFWorkflowViewController *)inlineWorkflowViewController;
-(void)setInlineWorkflowViewController:(WFWorkflowViewController *)arg1 ;
@end

