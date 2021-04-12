/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CNActionsViewProtocol.h>
#import <libobjc.A.dylib/CNUIUserActionListConsumer.h>
#import <libobjc.A.dylib/CNContactActionsControllerDelegate.h>
#import <libobjc.A.dylib/CNUIObjectViewController.h>

@protocol CNUIObjectViewControllerDelegate, CNContactInlineActionsViewControllerDelegate, CNCustomPresentation, CNSchedulerProvider;
@class CNContact, NSArray, CNActionsView, NSDictionary, CNContactActionsController, CNUIContactsEnvironment, CNUIUserActionListDataSource, NSString, UIView;

@interface CNContactInlineActionsViewController : UIViewController <CNActionsViewProtocol, CNUIUserActionListConsumer, CNContactActionsControllerDelegate, CNUIObjectViewController> {

	BOOL _displaysUnavailableActionTypes;
	BOOL _displaysTitles;
	id<CNUIObjectViewControllerDelegate> objectViewControllerDelegate;
	CNContact* _contact;
	NSArray* _supportedActionTypes;
	double _actionTypesInterspace;
	long long _viewStyle;
	id<CNContactInlineActionsViewControllerDelegate> _delegate;
	NSArray* _actionItems;
	CNActionsView* _actionsView;
	NSArray* _tokens;
	NSDictionary* _defaultActionPerType;
	id<CNCustomPresentation> _actionsControllerPresentation;
	id<CNSchedulerProvider> _schedulerProvider;
	CNContactActionsController* _actionsController;
	CNUIContactsEnvironment* _environment;
	CNUIUserActionListDataSource* _actionListDataSource;

}

@property (nonatomic,copy) NSArray * actionItems;                                                                   //@synthesize actionItems=_actionItems - In the implementation block
@property (assign,nonatomic,__weak) CNActionsView * actionsView;                                                    //@synthesize actionsView=_actionsView - In the implementation block
@property (nonatomic,copy) NSArray * tokens;                                                                        //@synthesize tokens=_tokens - In the implementation block
@property (nonatomic,copy) NSDictionary * defaultActionPerType;                                                     //@synthesize defaultActionPerType=_defaultActionPerType - In the implementation block
@property (nonatomic,retain) id<CNCustomPresentation> actionsControllerPresentation;                                //@synthesize actionsControllerPresentation=_actionsControllerPresentation - In the implementation block
@property (nonatomic,retain) id<CNSchedulerProvider> schedulerProvider;                                             //@synthesize schedulerProvider=_schedulerProvider - In the implementation block
@property (nonatomic,readonly) double throttleDelay; 
@property (nonatomic,retain) CNContactActionsController * actionsController;                                        //@synthesize actionsController=_actionsController - In the implementation block
@property (nonatomic,retain) CNUIContactsEnvironment * environment;                                                 //@synthesize environment=_environment - In the implementation block
@property (nonatomic,retain) CNUIUserActionListDataSource * actionListDataSource;                                   //@synthesize actionListDataSource=_actionListDataSource - In the implementation block
@property (assign,nonatomic) BOOL displaysUnavailableActionTypes;                                                   //@synthesize displaysUnavailableActionTypes=_displaysUnavailableActionTypes - In the implementation block
@property (assign,nonatomic) BOOL displaysTitles;                                                                   //@synthesize displaysTitles=_displaysTitles - In the implementation block
@property (nonatomic,retain) CNContact * contact;                                                                   //@synthesize contact=_contact - In the implementation block
@property (nonatomic,copy) NSArray * supportedActionTypes;                                                          //@synthesize supportedActionTypes=_supportedActionTypes - In the implementation block
@property (assign,nonatomic) double actionTypesInterspace;                                                          //@synthesize actionTypesInterspace=_actionTypesInterspace - In the implementation block
@property (assign,nonatomic) long long viewStyle;                                                                   //@synthesize viewStyle=_viewStyle - In the implementation block
@property (assign,nonatomic,__weak) id<CNContactInlineActionsViewControllerDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView * view; 
@property (assign,nonatomic,__weak) id<CNUIObjectViewControllerDelegate> objectViewControllerDelegate; 
+(id)descriptorForRequiredKeys;
-(void)dealloc;
-(id<CNContactInlineActionsViewControllerDelegate>)delegate;
-(void)setDelegate:(id<CNContactInlineActionsViewControllerDelegate>)arg1 ;
-(CNUIContactsEnvironment *)environment;
-(void)setEnvironment:(CNUIContactsEnvironment *)arg1 ;
-(void)reset;
-(void)performAction:(id)arg1 ;
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(NSArray *)tokens;
-(void)setTokens:(NSArray *)arg1 ;
-(void)setActionsView:(CNActionsView *)arg1 ;
-(CNActionsView *)actionsView;
-(id<CNSchedulerProvider>)schedulerProvider;
-(NSArray *)actionItems;
-(void)setSchedulerProvider:(id<CNSchedulerProvider>)arg1 ;
-(CNContactActionsController *)actionsController;
-(NSArray *)supportedActionTypes;
-(void)contactActionsController:(id)arg1 didSelectAction:(id)arg2 ;
-(void)setActionsController:(CNContactActionsController *)arg1 ;
-(id)allModelsObservable;
-(id<CNUIObjectViewControllerDelegate>)objectViewControllerDelegate;
-(void)setObjectViewControllerDelegate:(id<CNUIObjectViewControllerDelegate>)arg1 ;
-(void)didSelectAction:(id)arg1 withSourceView:(id)arg2 longPress:(BOOL)arg3 ;
-(id)initWithActionListDataSource:(id)arg1 environment:(id)arg2 ;
-(void)setDisplaysUnavailableActionTypes:(BOOL)arg1 ;
-(void)updateDesiredTitleFontSizeIfNeeded;
-(void)displayAllSupportedTypesDisabled;
-(void)setDisplaysTitles:(BOOL)arg1 ;
-(void)checkinLaunchTasksForUndiscoverableActionsForContact:(id)arg1 ;
-(void)setActionTypesInterspace:(double)arg1 ;
-(void)setSupportedActionTypes:(NSArray *)arg1 ;
-(void)setViewStyle:(long long)arg1 ;
-(double)throttleDelay;
-(void)removeVisibleActionItems:(id)arg1 ;
-(void)displayAdditionalActionItems:(id)arg1 ;
-(void)updateVisibleActionItems:(id)arg1 ;
-(void)discoverAvailableActionTypes;
-(void)processModels:(id)arg1 ;
-(void)displayActionForType:(id)arg1 withDefaultAction:(id)arg2 enabled:(BOOL)arg3 ;
-(void)removeActionForType:(id)arg1 ;
-(id)makeActionItemForType:(id)arg1 ;
-(void)updateActionItem:(id)arg1 withDefaultAction:(id)arg2 ;
-(id)existingActionItemForType:(id)arg1 ;
-(void)showDisambiguationFromSourceView:(id)arg1 actionType:(id)arg2 ;
-(BOOL)displaysUnavailableActionTypes;
-(BOOL)displaysTitles;
-(double)actionTypesInterspace;
-(long long)viewStyle;
-(void)setActionItems:(NSArray *)arg1 ;
-(NSDictionary *)defaultActionPerType;
-(void)setDefaultActionPerType:(NSDictionary *)arg1 ;
-(id<CNCustomPresentation>)actionsControllerPresentation;
-(void)setActionsControllerPresentation:(id<CNCustomPresentation>)arg1 ;
-(CNUIUserActionListDataSource *)actionListDataSource;
-(void)setActionListDataSource:(CNUIUserActionListDataSource *)arg1 ;
@end

