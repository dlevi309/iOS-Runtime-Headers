/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <libobjc.A.dylib/CNUIUserActionListConsumer.h>
#import <libobjc.A.dylib/CNContactActionsControllerDelegate.h>

@protocol CNContactQuickActionViewContainer, CNContactQuickActionsControllerDelegate, CNUIUserActionListDataSource, CNSchedulerProvider, CNCancelable, CNUIUserActionContext, CNUINavigationListStyle;
@class NSArray, CNContact, NSDictionary, CNContactActionsController, UIViewController, CNContactQuickActionsDisambiguationMenuPresentation, NSString;

@interface CNContactQuickActionsController : NSObject <CNUIUserActionListConsumer, CNContactActionsControllerDelegate> {

	id<CNContactQuickActionViewContainer> _contactQuickActionViewContainer;
	id<CNContactQuickActionsControllerDelegate> _delegate;
	NSArray* _actionTypes;
	CNContact* _contact;
	id<CNUIUserActionListDataSource> _userActionListDataSource;
	id<CNSchedulerProvider> _schedulerProvider;
	id<CNCancelable> _actionDisoveryToken;
	NSDictionary* _actionListModelsByActionType;
	id<CNUIUserActionContext> _userActionContext;
	CNContactActionsController* _disambiguationMenuController;
	UIViewController* _disambiguationMenuViewController;
	CNContactQuickActionsDisambiguationMenuPresentation* _disambiguationMenuPresentation;
	id<CNUINavigationListStyle> _navigationListStyle;

}

@property (nonatomic,readonly) id<CNUIUserActionListDataSource> userActionListDataSource;                                         //@synthesize userActionListDataSource=_userActionListDataSource - In the implementation block
@property (nonatomic,readonly) id<CNSchedulerProvider> schedulerProvider;                                                         //@synthesize schedulerProvider=_schedulerProvider - In the implementation block
@property (nonatomic,retain) id<CNCancelable> actionDisoveryToken;                                                                //@synthesize actionDisoveryToken=_actionDisoveryToken - In the implementation block
@property (nonatomic,retain) NSDictionary * actionListModelsByActionType;                                                         //@synthesize actionListModelsByActionType=_actionListModelsByActionType - In the implementation block
@property (nonatomic,readonly) id<CNUIUserActionContext> userActionContext;                                                       //@synthesize userActionContext=_userActionContext - In the implementation block
@property (nonatomic,retain) CNContactActionsController * disambiguationMenuController;                                           //@synthesize disambiguationMenuController=_disambiguationMenuController - In the implementation block
@property (nonatomic,retain) UIViewController * disambiguationMenuViewController;                                                 //@synthesize disambiguationMenuViewController=_disambiguationMenuViewController - In the implementation block
@property (nonatomic,readonly) CNContactQuickActionsDisambiguationMenuPresentation * disambiguationMenuPresentation;              //@synthesize disambiguationMenuPresentation=_disambiguationMenuPresentation - In the implementation block
@property (nonatomic,retain) id<CNUINavigationListStyle> navigationListStyle;                                                     //@synthesize navigationListStyle=_navigationListStyle - In the implementation block
@property (nonatomic,__weak,readonly) id<CNContactQuickActionViewContainer> contactQuickActionViewContainer;                      //@synthesize contactQuickActionViewContainer=_contactQuickActionViewContainer - In the implementation block
@property (assign,nonatomic,__weak) id<CNContactQuickActionsControllerDelegate> delegate;                                         //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSArray * actionTypes;                                                                             //@synthesize actionTypes=_actionTypes - In the implementation block
@property (nonatomic,retain) CNContact * contact;                                                                                 //@synthesize contact=_contact - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)descriptorForRequiredKeys;
+(id)log;
-(CNContact *)contact;
-(id<CNSchedulerProvider>)schedulerProvider;
-(id)initWithActionTypes:(id)arg1 contactQuickActionViewContainer:(id)arg2 disambiguationMenuPresentation:(id)arg3 userActionListDataSource:(id)arg4 schedulerProvider:(id)arg5 userActionContext:(id)arg6 ;
-(void)setContact:(CNContact *)arg1 ;
-(id)initWithActionTypes:(id)arg1 contactQuickActionViewContainer:(id)arg2 ;
-(id)allModelsObservable;
-(id)initWithActionTypes:(id)arg1 contactQuickActionViewContainer:(id)arg2 disambiguationMenuPresentation:(id)arg3 ;
-(void)processDiscoveredModels:(id)arg1 ;
-(void)storeDiscoveredModels:(id)arg1 ;
-(void)executeTapBehaviorForActionType:(id)arg1 ;
-(void)reportStoredModelsToQuickActionContainer;
-(void)executeLongPressBehaviorForActionType:(id)arg1 ;
-(void)reportStoredModel:(id)arg1 forActionType:(id)arg2 toQuickActionContainer:(id)arg3 ;
-(id)defaultTitleForActionType:(id)arg1 ;
-(void)showDisambiguationMenuForActionType:(id)arg1 ;
-(void)setupDisambiguationMenuForActionType:(id)arg1 ;
-(void)tearDownDisambiguationMenu;
-(void)disambiguationViewControllerDismissedExternally:(id)arg1 ;
-(id<CNContactQuickActionViewContainer>)contactQuickActionViewContainer;
-(id<CNUIUserActionListDataSource>)userActionListDataSource;
-(id<CNCancelable>)actionDisoveryToken;
-(void)setActionDisoveryToken:(id<CNCancelable>)arg1 ;
-(NSDictionary *)actionListModelsByActionType;
-(id<CNUIUserActionContext>)userActionContext;
-(void)setActionListModelsByActionType:(NSDictionary *)arg1 ;
-(CNContactActionsController *)disambiguationMenuController;
-(void)setDisambiguationMenuController:(CNContactActionsController *)arg1 ;
-(UIViewController *)disambiguationMenuViewController;
-(void)setDisambiguationMenuViewController:(UIViewController *)arg1 ;
-(CNContactQuickActionsDisambiguationMenuPresentation *)disambiguationMenuPresentation;
-(id)init;
-(id<CNContactQuickActionsControllerDelegate>)delegate;
-(void)setNavigationListStyle:(id<CNUINavigationListStyle>)arg1 ;
-(id<CNUINavigationListStyle>)navigationListStyle;
-(void)setDelegate:(id<CNContactQuickActionsControllerDelegate>)arg1 ;
-(void)contactActionsController:(id)arg1 didSelectAction:(id)arg2 ;
-(NSArray *)actionTypes;
-(void)performAction:(id)arg1 ;
-(void)dealloc;
-(void)cleanUpAfterLatestActionDiscovery;
-(void)discoverActions;
@end

