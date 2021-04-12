/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SUICProgressIndicatorViewControllerDataSource.h>

@class SUICProgressIndicatorViewController, UIButton, SUICProgressStateMachine, NSString, NSProgress;

@interface SUICProgressDebugViewController : UIViewController <SUICProgressIndicatorViewControllerDataSource> {

	SUICProgressIndicatorViewController* _indicatorViewController;
	UIButton* _eventGeneratorButton;
	SUICProgressStateMachine* _stateMachine;
	unsigned long long _testEventLoopCounter;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSProgress * progress; 
-(NSProgress *)progress;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(id)stateMachineForProgressIndicatorViewController:(id)arg1 ;
-(void)_eventGeneratorButtonTouchedUpInside:(id)arg1 ;
@end

