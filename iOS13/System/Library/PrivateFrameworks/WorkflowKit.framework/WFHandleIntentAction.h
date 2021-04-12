/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFAction.h>
#import <libobjc.A.dylib/WFIntentExecutorDelegate.h>
#import <libobjc.A.dylib/WFIntentViewControllerDelegate.h>
#import <libobjc.A.dylib/WFStandaloneShortcutAction.h>

@protocol WFIntentViewController;
@class NSString, WFIntentExecutor, UIViewController, INCExtensionConnection, INIntentDescription, NSArray;

@interface WFHandleIntentAction : WFAction <WFIntentExecutorDelegate, WFIntentViewControllerDelegate, WFStandaloneShortcutAction> {

	NSString* _inputParameterName;
	WFIntentExecutor* _executor;
	UIViewController*<WFIntentViewController> _intentViewController;
	/*^block*/id _viewControllerCompletionHandler;
	INCExtensionConnection* _connection;

}

@property (nonatomic,retain) WFIntentExecutor * executor;                                                 //@synthesize executor=_executor - In the implementation block
@property (nonatomic,retain) UIViewController*<WFIntentViewController> intentViewController;              //@synthesize intentViewController=_intentViewController - In the implementation block
@property (nonatomic,copy) id viewControllerCompletionHandler;                                            //@synthesize viewControllerCompletionHandler=_viewControllerCompletionHandler - In the implementation block
@property (nonatomic,retain) INCExtensionConnection * connection;                                         //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) INIntentDescription * intentDescription; 
@property (nonatomic,readonly) NSArray * slots; 
@property (nonatomic,readonly) NSString * inputParameterName;                                             //@synthesize inputParameterName=_inputParameterName - In the implementation block
@property (nonatomic,readonly) long long intentCategory; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)appIdentifierForIntent:(id)arg1 ;
+(id)bundleIdentifierForIntent:(id)arg1 ;
-(void)cancel;
-(INCExtensionConnection *)connection;
-(void)setConnection:(INCExtensionConnection *)arg1 ;
-(BOOL)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2 ;
-(long long)intentCategory;
-(INIntentDescription *)intentDescription;
-(void)generateShortcutRepresentation:(/*^block*/id)arg1 ;
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(void)finishRunningWithError:(id)arg1 ;
-(void)intentViewControllerWasTapped:(id)arg1 ;
-(void)intentViewControllerDidConfirmIntent:(id)arg1 ;
-(void)intentViewControllerDidDismissPlatter:(id)arg1 ;
-(void)intentExecutorRequestsContinueInApp:(id)arg1 ;
-(void)intentExecutor:(id)arg1 showConfirmationForInteraction:(id)arg2 confirmationRequired:(BOOL)arg3 authenticationRequired:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)initWithIdentifier:(id)arg1 definition:(id)arg2 serializedParameters:(id)arg3 ;
-(BOOL)skipsProcessingHiddenParameters;
-(void)wasAddedToWorkflowByUser:(id)arg1 ;
-(BOOL)requiresShowsWhenRun;
-(BOOL)showsWhenRun;
-(BOOL)opensInApp;
-(unsigned long long)allowsInteractiveSlotResolution;
-(void)resolveSlot:(id)arg1 withProcessedValue:(id)arg2 parameter:(id)arg3 input:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)generatedIntentWithInput:(id)arg1 error:(id*)arg2 ;
-(void)generatePopulatedIntentFromInput:(id)arg1 processedParameters:(id)arg2 completion:(/*^block*/id)arg3 ;
-(NSArray *)slots;
-(id)createResourceManager;
-(id)generatedAccessResource;
-(id)parameterForSlot:(id)arg1 ;
-(void)accessBundleContentWithBlock:(/*^block*/id)arg1 ;
-(BOOL)isWorkflowInDatabase;
-(BOOL)shouldDonateIntent:(id)arg1 ;
-(void)startExecutingIntent:(id)arg1 ;
-(id)executorWithIntent:(id)arg1 groupIdentifier:(id)arg2 ;
-(void)populateIntent:(id)arg1 withInput:(id)arg2 processedParameters:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)shouldOpenAppThroughSiriForIntent:(id)arg1 intentResponse:(id)arg2 ;
-(void)finishRunningByContinuingInApp;
-(void)getOutputFromIntentResponse:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)showInteractionIfNeeded:(id)arg1 inUserInterface:(id)arg2 requiringConfirmation:(BOOL)arg3 requiringAuthentication:(BOOL)arg4 executionStage:(long long)arg5 completionHandler:(/*^block*/id)arg6 ;
-(id)createIntentViewControllerWithInteraction:(id)arg1 requiresConfirmation:(BOOL)arg2 ;
-(void)showInteraction:(id)arg1 fromViewController:(id)arg2 sourceView:(id)arg3 requiringConfirmation:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)dismissViewControllerIfNecessary:(/*^block*/id)arg1 ;
-(id)unknownErrorWithCode:(long long)arg1 localizedDescription:(id)arg2 userInfo:(id)arg3 ;
-(void)handleResolutionResult:(id)arg1 forSlot:(id)arg2 onIntent:(id)arg3 ;
-(void)showAskForValueAndRetryForSlot:(id)arg1 onIntent:(id)arg2 ;
-(void)localizedDisambiguationPromptForAttribute:(id)arg1 intent:(id)arg2 disambiguationItems:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)showDisambiguationAndRetryForSlot:(id)arg1 items:(id)arg2 onIntent:(id)arg3 ;
-(id)errorFromResolutionResult:(id)arg1 forSlot:(id)arg2 onIntent:(id)arg3 ;
-(id)errorFromConfirmResponse:(id)arg1 intent:(id)arg2 ;
-(id)errorFromHandleResponse:(id)arg1 intent:(id)arg2 ;
-(id)errorAttributedToApp:(id)arg1 ;
-(id)errorThatLaunchesApp:(id)arg1 ;
-(void)getErrorFromExtensionError:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)handleExecutorError:(id)arg1 ;
-(NSString *)inputParameterName;
-(WFIntentExecutor *)executor;
-(void)setExecutor:(WFIntentExecutor *)arg1 ;
-(UIViewController*<WFIntentViewController>)intentViewController;
-(void)setIntentViewController:(UIViewController*<WFIntentViewController>)arg1 ;
-(id)viewControllerCompletionHandler;
-(void)setViewControllerCompletionHandler:(id)arg1 ;
@end

