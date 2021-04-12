/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SXQuickLookEventHandlerDelegate.h>

@protocol SXQuickLookEventHandler, SXQuickLookRenderer;
@class NFStateMachine, NFStateMachineState, UIImageView, UIButton, UILabel, NSString;

@interface SXQuickLookViewController : UIViewController <SXQuickLookEventHandlerDelegate> {

	id<SXQuickLookEventHandler> _eventHandler;
	id<SXQuickLookRenderer> _renderer;
	NFStateMachine* _stateMachine;
	NFStateMachineState* _loadingState;
	NFStateMachineState* _presentingState;
	NFStateMachineState* _errorState;
	UIImageView* _thumbnailImageView;
	UIButton* _thumbnailControl;
	UILabel* _errorLabel;

}

@property (nonatomic,readonly) id<SXQuickLookEventHandler> eventHandler;              //@synthesize eventHandler=_eventHandler - In the implementation block
@property (nonatomic,readonly) id<SXQuickLookRenderer> renderer;                      //@synthesize renderer=_renderer - In the implementation block
@property (nonatomic,readonly) NFStateMachine * stateMachine;                         //@synthesize stateMachine=_stateMachine - In the implementation block
@property (nonatomic,readonly) NFStateMachineState * loadingState;                    //@synthesize loadingState=_loadingState - In the implementation block
@property (nonatomic,readonly) NFStateMachineState * presentingState;                 //@synthesize presentingState=_presentingState - In the implementation block
@property (nonatomic,readonly) NFStateMachineState * errorState;                      //@synthesize errorState=_errorState - In the implementation block
@property (nonatomic,readonly) UIImageView * thumbnailImageView;                      //@synthesize thumbnailImageView=_thumbnailImageView - In the implementation block
@property (nonatomic,readonly) UIButton * thumbnailControl;                           //@synthesize thumbnailControl=_thumbnailControl - In the implementation block
@property (nonatomic,readonly) UILabel * errorLabel;                                  //@synthesize errorLabel=_errorLabel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(id<SXQuickLookEventHandler>)eventHandler;
-(NFStateMachineState *)presentingState;
-(NFStateMachineState *)errorState;
-(UIImageView *)thumbnailImageView;
-(id<SXQuickLookRenderer>)renderer;
-(NFStateMachine *)stateMachine;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(NFStateMachineState *)loadingState;
-(void)showThumbnailImage:(id)arg1 ;
-(void)showThumbnailErrorWithMessage:(id)arg1 ;
-(UILabel *)errorLabel;
-(id)initWithEventHandler:(id)arg1 renderer:(id)arg2 ;
-(id)createLoadingState;
-(id)createErrorState;
-(void)handleTap;
-(id)createPresentingState;
-(void)configureStateMachine;
-(UIButton *)thumbnailControl;
@end

