/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/


@protocol WFIntentExecutorDelegate;
@class INCExtensionConnection, INIntent;

@interface WFIntentExecutor : NSObject {

	WFIntentExecutor* _strongSelf;
	BOOL _forceExecutionOnPhone;
	BOOL _skipResolveAndConfirm;
	INCExtensionConnection* _connection;
	id<WFIntentExecutorDelegate> _delegate;
	/*^block*/id _completionHandler;

}

@property (nonatomic,copy,readonly) id completionHandler;                               //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,nonatomic) BOOL forceExecutionOnPhone;                                //@synthesize forceExecutionOnPhone=_forceExecutionOnPhone - In the implementation block
@property (assign,nonatomic) BOOL skipResolveAndConfirm;                                //@synthesize skipResolveAndConfirm=_skipResolveAndConfirm - In the implementation block
@property (nonatomic,readonly) INIntent * intent; 
@property (nonatomic,readonly) INCExtensionConnection * connection;                     //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic,__weak) id<WFIntentExecutorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<WFIntentExecutorDelegate>)delegate;
-(void)setDelegate:(id<WFIntentExecutorDelegate>)arg1 ;
-(void)failWithError:(id)arg1 ;
-(void)cancel;
-(void)finish;
-(INCExtensionConnection *)connection;
-(INIntent *)intent;
-(id)completionHandler;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)errorFromResolutionResult:(id)arg1 forSlot:(id)arg2 onIntent:(id)arg3 ;
-(id)errorFromConfirmResponse:(id)arg1 intent:(id)arg2 ;
-(id)errorFromHandleResponse:(id)arg1 intent:(id)arg2 ;
-(id)initWithIntent:(id)arg1 donateInteraction:(BOOL)arg2 groupIdentifier:(id)arg3 ;
-(void)retainSelf;
-(void)autoreleaseSelf;
-(void)getDynamicOptionsForParameterNamed:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getDefaultValueForParameterNamed:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)extensionInputItemsWithIntent:(id)arg1 ;
-(void)configureConnection;
-(void)startConnectionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)resolveIntent:(id)arg1 withExtensionProxy:(id)arg2 ;
-(void)confirmIntent:(id)arg1 withExtensionProxy:(id)arg2 ;
-(void)handleIntent:(id)arg1 withExtensionProxy:(id)arg2 ;
-(void)handleIntent:(id)arg1 inBackgroundAppWithBundleIdentifier:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)updateIntentWithItemToConfirm:(id)arg1 forSlot:(id)arg2 onIntent:(id)arg3 ;
-(id)errorFromExtensionError:(id)arg1 ;
-(void)finishWithInteraction:(id)arg1 error:(id)arg2 ;
-(void)finishWithInteraction:(id)arg1 ;
-(BOOL)continueInApp;
-(void)showConfirmationForInteraction:(id)arg1 confirmationRequired:(BOOL)arg2 authenticationRequired:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)forceExecutionOnPhone;
-(void)setForceExecutionOnPhone:(BOOL)arg1 ;
-(BOOL)skipResolveAndConfirm;
-(void)setSkipResolveAndConfirm:(BOOL)arg1 ;
@end

