/*
* Generated on Thursday, January 14, 2021 at 2:24:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SUICProgressIndicatorViewControllerDataSource.h>

@class SUICProgressIndicatorViewController, UIButton, SUICProgressStateMachine, NSProgress, NSString;

@interface SUICProgressDebugViewController : UIViewController <SUICProgressIndicatorViewControllerDataSource> {

	SUICProgressIndicatorViewController* _indicatorViewController;
	UIButton* _eventGeneratorButton;
	SUICProgressStateMachine* _stateMachine;
	unsigned long long _testEventLoopCounter;

}

@property (readonly) NSProgress * progress; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSProgress *)progress;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)stateMachineForProgressIndicatorViewController:(id)arg1 ;
-(void)_eventGeneratorButtonTouchedUpInside:(id)arg1 ;
@end

