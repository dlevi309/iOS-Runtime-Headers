/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXComponentView.h>

@protocol SXQuickLookModule, SXQuickLookComponentFileProvider;
@class NFStateMachine, NFStateMachineState, UIActivityIndicatorView, UITapGestureRecognizer, UILabel, SXQuickLookViewController;

@interface SXQuickLookComponentView : SXComponentView {

	id<SXQuickLookModule> _quickLookModule;
	id<SXQuickLookComponentFileProvider> _fileProvider;
	NFStateMachine* _stateMachine;
	NFStateMachineState* _idleState;
	NFStateMachineState* _loadingState;
	NFStateMachineState* _presentingState;
	NFStateMachineState* _errorState;
	UIActivityIndicatorView* _loadingIndicator;
	UITapGestureRecognizer* _tapGestureRecognizer;
	UILabel* _errorLabel;
	SXQuickLookViewController* _quickLookViewController;

}

@property (nonatomic,readonly) id<SXQuickLookModule> quickLookModule;                          //@synthesize quickLookModule=_quickLookModule - In the implementation block
@property (nonatomic,readonly) id<SXQuickLookComponentFileProvider> fileProvider;              //@synthesize fileProvider=_fileProvider - In the implementation block
@property (nonatomic,readonly) NFStateMachine * stateMachine;                                  //@synthesize stateMachine=_stateMachine - In the implementation block
@property (nonatomic,readonly) NFStateMachineState * idleState;                                //@synthesize idleState=_idleState - In the implementation block
@property (nonatomic,readonly) NFStateMachineState * loadingState;                             //@synthesize loadingState=_loadingState - In the implementation block
@property (nonatomic,readonly) NFStateMachineState * presentingState;                          //@synthesize presentingState=_presentingState - In the implementation block
@property (nonatomic,readonly) NFStateMachineState * errorState;                               //@synthesize errorState=_errorState - In the implementation block
@property (nonatomic,readonly) UIActivityIndicatorView * loadingIndicator;                     //@synthesize loadingIndicator=_loadingIndicator - In the implementation block
@property (nonatomic,readonly) UITapGestureRecognizer * tapGestureRecognizer;                  //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (nonatomic,retain) UILabel * errorLabel;                                             //@synthesize errorLabel=_errorLabel - In the implementation block
@property (nonatomic,retain) SXQuickLookViewController * quickLookViewController;              //@synthesize quickLookViewController=_quickLookViewController - In the implementation block
-(void)layout;
-(id<SXQuickLookComponentFileProvider>)fileProvider;
-(void)configure;
-(NFStateMachine *)stateMachine;
-(void)discardContents;
-(UITapGestureRecognizer *)tapGestureRecognizer;
-(UIActivityIndicatorView *)loadingIndicator;
-(NFStateMachineState *)loadingState;
-(void)setErrorLabel:(UILabel *)arg1 ;
-(UILabel *)errorLabel;
-(void)presentComponentWithChanges:(SCD_Struct_SX17)arg1 ;
-(void)renderContents;
-(id)createLoadingState;
-(id)createErrorState;
-(void)layoutErrorView;
-(void)layoutLoadingIndicator;
-(void)layoutWebView;
-(id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 componentStyleRendererFactory:(id)arg4 fileProvider:(id)arg5 quickLookModule:(id)arg6 ;
-(void)handleTap;
-(id)createIdleState;
-(id)createPresentingState;
-(NFStateMachineState *)idleState;
-(NFStateMachineState *)presentingState;
-(NFStateMachineState *)errorState;
-(SXQuickLookViewController *)quickLookViewController;
-(void)setQuickLookViewController:(SXQuickLookViewController *)arg1 ;
-(id<SXQuickLookModule>)quickLookModule;
@end

