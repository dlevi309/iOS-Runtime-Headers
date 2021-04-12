/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
*/


@protocol BFFFlowItem <NSObject>
@optional
+(BOOL)controllerNeedsToRun;
+(BOOL)controllerAffectedByTapFreeSetup;
+(void)skippedByCloudConfig;
-(id)viewController;
-(void)setNavigationController:(id)arg1;
-(BOOL)isEphemeral;
-(void)performExtendedInitializationWithCompletion:(/*^block*/id)arg1;
-(void)controllerWasPopped;
-(BOOL)controllerAllowsNavigatingBack;
-(void)startOver;
-(BOOL)shouldAllowStartOver;
-(void)presentHostedViewControllerOnNavigationController:(id)arg1 completion:(/*^block*/id)arg2;
-(void)cancelHostedPresentation;
-(BOOL)shouldSuppressExtendedInitializationActivityIndicator;
-(void)handleDebugGesture;
-(void)startFlowItem:(BOOL)arg1;

@required
+(id)cloudConfigSkipKey;
-(id)init;
-(void)setDelegate:(id)arg1;

@end

