/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SUICProgressStateMachineObserving.h>

@protocol SUICProgressIndicatorViewControllerDataSource;
@class SUICProgressIndicatorView, NSString;

@interface SUICProgressIndicatorViewController : UIViewController <SUICProgressStateMachineObserving> {

	SUICProgressIndicatorView* _progressIndicatorView;
	id<SUICProgressIndicatorViewControllerDataSource> _dataSource;

}

@property (setter=_setProgressIndicatorView:,getter=_progressIndicatorView,nonatomic,retain) SUICProgressIndicatorView * progressIndicatorView;              //@synthesize progressIndicatorView=_progressIndicatorView - In the implementation block
@property (assign,nonatomic,__weak) id<SUICProgressIndicatorViewControllerDataSource> dataSource;                                                            //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SUICProgressIndicatorViewControllerDataSource>)dataSource;
-(void)setDataSource:(id<SUICProgressIndicatorViewControllerDataSource>)arg1 ;
-(void)loadView;
-(BOOL)_canShowWhileLocked;
-(id)_stateMachine;
-(id)_progressIndicatorView;
-(void)_setProgressIndicatorView:(id)arg1 ;
-(BOOL)_shouldAcceptEventsFromStateMachine:(id)arg1 ;
-(void)progressStateMachine:(id)arg1 didTransitionToState:(unsigned long long)arg2 fromState:(unsigned long long)arg3 forEvent:(unsigned long long)arg4 ;
-(void)progressStateMachine:(id)arg1 ignoredEvent:(unsigned long long)arg2 ;
@end

