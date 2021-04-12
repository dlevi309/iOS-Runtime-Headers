/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <UIKit/UIPopoverPresentationControllerDelegate.h>
#import <libobjc.A.dylib/WFActionDrawerAppsDetailViewControllerDelegate.h>
#import <libobjc.A.dylib/WFActionDrawerAppsViewControllerDelegate.h>
#import <libobjc.A.dylib/WFActionDrawerViewControllerDelegate.h>
#import <libobjc.A.dylib/WFActionDrawerResultsViewControllerDelegate.h>
#import <libobjc.A.dylib/WFActionDescriptionViewControllerDelegate.h>
#import <libobjc.A.dylib/WFComponentNavigationContext.h>
#import <libobjc.A.dylib/WFActionDrawerStateConfigurable.h>
#import <libobjc.A.dylib/WFActionDrawerStateRepresentable.h>

@protocol WFActionDrawerResultsControlling;
@class WFComposeViewController, WFActionDrawerViewController, WFWorkflow, WFDrawerController, UINavigationController, NSHashTable, WFActionDrawerResults, WFActionDrawerSiriSuggestionsViewController, UIViewController, WFActionDrawerResultsController, WFActionDrawerAppsViewController, NSString, WFActionDrawerState;

@interface WFActionDrawerCoordinator : NSObject <UIPopoverPresentationControllerDelegate, WFActionDrawerAppsDetailViewControllerDelegate, WFActionDrawerAppsViewControllerDelegate, WFActionDrawerViewControllerDelegate, WFActionDrawerResultsViewControllerDelegate, WFActionDescriptionViewControllerDelegate, WFComponentNavigationContext, WFActionDrawerStateConfigurable, WFActionDrawerStateRepresentable> {

	WFComposeViewController* _composeViewController;
	WFActionDrawerViewController* _actionsViewController;
	WFWorkflow* _workflow;
	WFDrawerController* _drawerController;
	UINavigationController* _navigationController;
	NSHashTable* _componentEditingSessions;
	WFActionDrawerResults* _siriSuggestionsResults;
	WFActionDrawerResults* _siriSuggestionsByIntentResults;
	WFActionDrawerSiriSuggestionsViewController* _siriSuggestionsViewController;
	id<WFActionDrawerResultsControlling> _actionDrawerResultsControllingDelegate;
	UIViewController* _documentationPopoverViewController;
	WFActionDrawerResultsController* _actionDrawerResultsController;
	WFActionDrawerAppsViewController* _appsViewController;

}

@property (nonatomic,readonly) NSHashTable * componentEditingSessions;                                                        //@synthesize componentEditingSessions=_componentEditingSessions - In the implementation block
@property (nonatomic,retain) WFActionDrawerResults * siriSuggestionsResults;                                                  //@synthesize siriSuggestionsResults=_siriSuggestionsResults - In the implementation block
@property (nonatomic,retain) WFActionDrawerResults * siriSuggestionsByIntentResults;                                          //@synthesize siriSuggestionsByIntentResults=_siriSuggestionsByIntentResults - In the implementation block
@property (assign,nonatomic,__weak) WFActionDrawerSiriSuggestionsViewController * siriSuggestionsViewController;              //@synthesize siriSuggestionsViewController=_siriSuggestionsViewController - In the implementation block
@property (assign,nonatomic,__weak) id<WFActionDrawerResultsControlling> actionDrawerResultsControllingDelegate;              //@synthesize actionDrawerResultsControllingDelegate=_actionDrawerResultsControllingDelegate - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * documentationPopoverViewController;                                    //@synthesize documentationPopoverViewController=_documentationPopoverViewController - In the implementation block
@property (nonatomic,retain) WFActionDrawerResultsController * actionDrawerResultsController;                                 //@synthesize actionDrawerResultsController=_actionDrawerResultsController - In the implementation block
@property (nonatomic,retain) WFActionDrawerAppsViewController * appsViewController;                                           //@synthesize appsViewController=_appsViewController - In the implementation block
@property (nonatomic,__weak,readonly) WFComposeViewController * composeViewController;                                        //@synthesize composeViewController=_composeViewController - In the implementation block
@property (nonatomic,readonly) WFActionDrawerViewController * actionsViewController;                                          //@synthesize actionsViewController=_actionsViewController - In the implementation block
@property (nonatomic,readonly) WFWorkflow * workflow;                                                                         //@synthesize workflow=_workflow - In the implementation block
@property (assign,nonatomic,__weak) WFDrawerController * drawerController;                                                    //@synthesize drawerController=_drawerController - In the implementation block
@property (assign,nonatomic,__weak) UINavigationController * navigationController;                                            //@synthesize navigationController=_navigationController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) UIViewController * componentHostingViewController; 
@property (nonatomic,readonly) WFActionDrawerState * state; 
-(void)dealloc;
-(WFActionDrawerState *)state;
-(long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2 ;
-(UINavigationController *)navigationController;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(void)setNavigationController:(UINavigationController *)arg1 ;
-(WFActionDrawerViewController *)actionsViewController;
-(WFWorkflow *)workflow;
-(WFComposeViewController *)composeViewController;
-(BOOL)moveToState:(id)arg1 animated:(BOOL)arg2 ;
-(WFActionDrawerResultsController *)actionDrawerResultsController;
-(void)setActionDrawerResultsController:(WFActionDrawerResultsController *)arg1 ;
-(void)suggestionsViewController:(id)arg1 didSelectAction:(id)arg2 ;
-(void)resultsViewController:(id)arg1 didSelectAction:(id)arg2 ;
-(void)resultsViewController:(id)arg1 didSelectDocumentationForAction:(id)arg2 fromView:(id)arg3 ;
-(WFActionDrawerSiriSuggestionsViewController *)siriSuggestionsViewController;
-(id<WFActionDrawerResultsControlling>)actionDrawerResultsControllingDelegate;
-(void)setActionDrawerResultsControllingDelegate:(id<WFActionDrawerResultsControlling>)arg1 ;
-(void)responderDidBeginEditing:(id)arg1 ;
-(void)componentPresentDocumentationForAction:(id)arg1 withSourceView:(id)arg2 ;
-(void)componentWillBeginEditingSession:(id)arg1 ;
-(void)componentDidEndEditingSession:(id)arg1 ;
-(void)componentPresentWorkflowSettings;
-(UIViewController *)componentHostingViewController;
-(WFDrawerController *)drawerController;
-(void)setDrawerController:(WFDrawerController *)arg1 ;
-(void)appendAction:(id)arg1 ;
-(void)actionDescriptionViewController:(id)arg1 didSelectAddAction:(id)arg2 ;
-(void)actionDrawerViewController:(id)arg1 didSelectAction:(id)arg2 ;
-(void)actionDrawerViewController:(id)arg1 didSelectDocumentationForAction:(id)arg2 fromView:(id)arg3 ;
-(void)actionDrawerViewControllerDidSelectCategoryApps:(id)arg1 title:(id)arg2 ;
-(void)actionDrawerViewControllerDidSelectCategoryFavorites:(id)arg1 title:(id)arg2 ;
-(void)actionDrawerViewControllerDidSelectCategoryScripting:(id)arg1 title:(id)arg2 ;
-(void)actionDrawerViewController:(id)arg1 didSelectCategoryForContentType:(id)arg2 title:(id)arg3 ;
-(void)actionDrawerViewController:(id)arg1 didSelectAppWithBundleIdentifier:(id)arg2 ;
-(void)appViewController:(id)arg1 didSelectAppWithBundleIdentifier:(id)arg2 ;
-(void)appDetailsViewController:(id)arg1 didSelectAction:(id)arg2 ;
-(void)appDetailsViewController:(id)arg1 didSelectDocumentationForAction:(id)arg2 fromView:(id)arg3 ;
-(id)initWithComposeViewController:(id)arg1 workflow:(id)arg2 ;
-(void)loadWithActionsViewController:(id)arg1 withState:(id)arg2 ;
-(void)reloadSiriSuggestions;
-(id)presentResultsViewControllerWithTitle:(id)arg1 results:(id)arg2 visibility:(unsigned long long)arg3 animated:(BOOL)arg4 ;
-(void)presentResultsViewController:(id)arg1 visibility:(unsigned long long)arg2 animated:(BOOL)arg3 ;
-(id)presentDescriptionForAction:(id)arg1 fromViewController:(id)arg2 view:(id)arg3 arrowDirections:(unsigned long long)arg4 animated:(BOOL)arg5 ;
-(void)presentResultsForAppWithBundleIdentifier:(id)arg1 ;
-(void)dismissDocumentationIfPresentedInPopoverAnimated:(BOOL)arg1 ;
-(void)subscribeForTextEditingNotifications;
-(void)cancelEditingSessionsWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSHashTable *)componentEditingSessions;
-(WFActionDrawerResults *)siriSuggestionsResults;
-(void)setSiriSuggestionsResults:(WFActionDrawerResults *)arg1 ;
-(WFActionDrawerResults *)siriSuggestionsByIntentResults;
-(void)setSiriSuggestionsByIntentResults:(WFActionDrawerResults *)arg1 ;
-(void)setSiriSuggestionsViewController:(WFActionDrawerSiriSuggestionsViewController *)arg1 ;
-(UIViewController *)documentationPopoverViewController;
-(void)setDocumentationPopoverViewController:(UIViewController *)arg1 ;
-(WFActionDrawerAppsViewController *)appsViewController;
-(void)setAppsViewController:(WFActionDrawerAppsViewController *)arg1 ;
@end

