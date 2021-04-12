/*
* Generated on Thursday, January 14, 2021 at 2:24:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)_progressIndicatorView;
-(void)_setProgressIndicatorView:(id)arg1 ;
-(void)setDataSource:(id<SUICProgressIndicatorViewControllerDataSource>)arg1 ;
-(BOOL)_canShowWhileLocked;
-(id)_stateMachine;
-(void)loadView;
-(BOOL)_shouldAcceptEventsFromStateMachine:(id)arg1 ;
-(void)progressStateMachine:(id)arg1 didTransitionToState:(unsigned long long)arg2 fromState:(unsigned long long)arg3 forEvent:(unsigned long long)arg4 ;
-(void)progressStateMachine:(id)arg1 ignoredEvent:(unsigned long long)arg2 ;
@end

