/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
*/


@protocol BFFFlowItem <NSObject>
@optional
+(BOOL)controllerNeedsToRun;
+(id)internalSkipKey;
+(BOOL)controllerAffectedByTapFreeSetup;
+(void)skippedByCloudConfig;
+(BOOL)isTrailing;
-(BOOL)shouldPresentModally;
-(BOOL)isEphemeral;
-(void)setNavigationController:(id)arg1;
-(id)viewController;
-(id)displayLanguage;
-(BOOL)controllerNeedsToRun;
-(void)performExtendedInitializationWithCompletion:(/*^block*/id)arg1;
-(void)didReceiveInternalSkipInfo;
-(BOOL)shouldSuppressExtendedInitializationActivityIndicator;
-(void)startFlowItem:(BOOL)arg1;
-(void)controllerWasPopped;
-(BOOL)controllerAllowsNavigatingBack;
-(BOOL)responsibleForViewController:(id)arg1;
-(void)presentHostedViewControllerOnNavigationController:(id)arg1 completion:(/*^block*/id)arg2;
-(void)cancelHostedPresentation;
-(BOOL)shouldAllowStartOver;
-(void)startOver;
-(void)handleDebugGesture;
-(id)internalMenuActions;
-(BOOL)shouldStopInactivityTimer;
-(void)flowItemDidAppear:(BOOL)arg1;

@required
+(id)cloudConfigSkipKey;
-(id)init;
-(void)setDelegate:(id)arg1;

@end

