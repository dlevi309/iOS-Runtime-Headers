/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/WFImportQuestionContainerViewControllerDelegate.h>
#import <libobjc.A.dylib/VCUIShortcutViewControllerDelegate.h>
#import <UIKit/UIAdaptivePresentationControllerDelegate.h>

@protocol WFGalleryImportViewControllerDelegate;
@class WFGalleryWorkflow, WFSharedShortcut, WFWorkflow, NSString, WFWorkflowRecord, WFWorkflowIcon, VCUIShortcutViewController, WFImportQuestionContainerViewController, UIBarButtonItem, UIActivityIndicatorView;

@interface WFGalleryImportViewController : UIViewController <WFImportQuestionContainerViewControllerDelegate, VCUIShortcutViewControllerDelegate, UIAdaptivePresentationControllerDelegate> {

	BOOL _previewingFor3DTouch;
	BOOL _importingSharedShortcut;
	BOOL _skipServicesConfirmation;
	BOOL _showSharingManagement;
	id<WFGalleryImportViewControllerDelegate> _delegate;
	WFGalleryWorkflow* _galleryWorkflow;
	WFSharedShortcut* _sharedShortcut;
	WFWorkflow* _workflow;
	NSString* _loggingContext;
	WFWorkflowRecord* _workflowRecord;
	NSString* _name;
	WFWorkflowIcon* _icon;
	unsigned long long _currentImportQuestionIndex;
	VCUIShortcutViewController* _shortcutViewController;
	WFImportQuestionContainerViewController* _importQuestionViewController;
	UIBarButtonItem* _rightButtonItem;
	UIActivityIndicatorView* _activityIndicator;

}

@property (nonatomic,readonly) WFWorkflowRecord * workflowRecord;                                                        //@synthesize workflowRecord=_workflowRecord - In the implementation block
@property (nonatomic,readonly) NSString * name;                                                                          //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) WFWorkflowIcon * icon;                                                                    //@synthesize icon=_icon - In the implementation block
@property (assign,nonatomic) unsigned long long currentImportQuestionIndex;                                              //@synthesize currentImportQuestionIndex=_currentImportQuestionIndex - In the implementation block
@property (nonatomic,readonly) BOOL skipServicesConfirmation;                                                            //@synthesize skipServicesConfirmation=_skipServicesConfirmation - In the implementation block
@property (assign,nonatomic,__weak) VCUIShortcutViewController * shortcutViewController;                                 //@synthesize shortcutViewController=_shortcutViewController - In the implementation block
@property (assign,nonatomic,__weak) WFImportQuestionContainerViewController * importQuestionViewController;              //@synthesize importQuestionViewController=_importQuestionViewController - In the implementation block
@property (assign,nonatomic,__weak) UIBarButtonItem * rightButtonItem;                                                   //@synthesize rightButtonItem=_rightButtonItem - In the implementation block
@property (assign,nonatomic,__weak) UIActivityIndicatorView * activityIndicator;                                         //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (assign,nonatomic) BOOL showSharingManagement;                                                                 //@synthesize showSharingManagement=_showSharingManagement - In the implementation block
@property (assign,nonatomic,__weak) id<WFGalleryImportViewControllerDelegate> delegate;                                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) WFGalleryWorkflow * galleryWorkflow;                                                      //@synthesize galleryWorkflow=_galleryWorkflow - In the implementation block
@property (nonatomic,readonly) WFSharedShortcut * sharedShortcut;                                                        //@synthesize sharedShortcut=_sharedShortcut - In the implementation block
@property (nonatomic,readonly) WFWorkflow * workflow;                                                                    //@synthesize workflow=_workflow - In the implementation block
@property (nonatomic,readonly) NSString * loggingContext;                                                                //@synthesize loggingContext=_loggingContext - In the implementation block
@property (assign,nonatomic) BOOL previewingFor3DTouch;                                                                  //@synthesize previewingFor3DTouch=_previewingFor3DTouch - In the implementation block
@property (assign,nonatomic) BOOL importingSharedShortcut;                                                               //@synthesize importingSharedShortcut=_importingSharedShortcut - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)name;
-(id<WFGalleryImportViewControllerDelegate>)delegate;
-(void)setDelegate:(id<WFGalleryImportViewControllerDelegate>)arg1 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)presentationControllerShouldDismiss:(id)arg1 ;
-(WFWorkflowIcon *)icon;
-(void)updateView;
-(UIActivityIndicatorView *)activityIndicator;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(void)didFinish;
-(WFWorkflow *)workflow;
-(void)logEvent:(id)arg1 withObjects:(id)arg2 ;
-(WFWorkflowRecord *)workflowRecord;
-(void)didTapCancel;
-(void)trackAddEvent;
-(void)updateBarButtonItems;
-(void)shortcutViewController:(id)arg1 didFinishWithName:(id)arg2 ;
-(void)shortcutViewControllerDidCancel:(id)arg1 ;
-(void)importQuestionViewControllerDidSelectCancel:(id)arg1 ;
-(void)importQuestionViewControllerDidSelectBack:(id)arg1 ;
-(void)importQuestionViewControllerDidSelectNext:(id)arg1 ;
-(void)importQuestionViewControllerDidSelectSkip:(id)arg1 ;
-(id)initWithGalleryWorkflow:(id)arg1 loggingContext:(id)arg2 ;
-(id)initWithSharedShortcut:(id)arg1 loggingContext:(id)arg2 ;
-(id)initWithWorkflowRecord:(id)arg1 loggingContext:(id)arg2 skipServicesConfirmation:(BOOL)arg3 ;
-(void)setPreviewingFor3DTouch:(BOOL)arg1 ;
-(void)loadWorkflowIfNeeded;
-(void)didTapShare;
-(id)localizedStopSharingString;
-(void)didTapManageSharing;
-(void)unshareSharedShortcut;
-(void)showNextImportQuestion;
-(void)showNextImportQuestionAnimated:(BOOL)arg1 backButtonHidden:(BOOL)arg2 ;
-(int)eventSourceForShortcut;
-(WFGalleryWorkflow *)galleryWorkflow;
-(WFSharedShortcut *)sharedShortcut;
-(NSString *)loggingContext;
-(BOOL)previewingFor3DTouch;
-(BOOL)importingSharedShortcut;
-(void)setImportingSharedShortcut:(BOOL)arg1 ;
-(unsigned long long)currentImportQuestionIndex;
-(void)setCurrentImportQuestionIndex:(unsigned long long)arg1 ;
-(BOOL)skipServicesConfirmation;
-(VCUIShortcutViewController *)shortcutViewController;
-(void)setShortcutViewController:(VCUIShortcutViewController *)arg1 ;
-(WFImportQuestionContainerViewController *)importQuestionViewController;
-(void)setImportQuestionViewController:(WFImportQuestionContainerViewController *)arg1 ;
-(UIBarButtonItem *)rightButtonItem;
-(void)setRightButtonItem:(UIBarButtonItem *)arg1 ;
-(BOOL)showSharingManagement;
-(void)setShowSharingManagement:(BOOL)arg1 ;
@end

