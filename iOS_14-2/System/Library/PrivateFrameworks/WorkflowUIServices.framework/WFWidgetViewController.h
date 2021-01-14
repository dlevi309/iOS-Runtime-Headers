/*
* Generated on Thursday, January 14, 2021 at 2:28:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUIServices.framework/WorkflowUIServices
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/WFWidgetGridViewDelegate.h>
#import <libobjc.A.dylib/WFWorkflowRunnerClientDelegate.h>
#import <libobjc.A.dylib/WFObservableResultObserver.h>

@protocol OS_os_log;
@class WFObservableResult, WFWidgetGridView, WFWidgetOptions, WFWidgetWorkflowRunnerClient, NSObject, NSString;

@interface WFWidgetViewController : UIViewController <WFWidgetGridViewDelegate, WFWorkflowRunnerClientDelegate, WFObservableResultObserver> {

	BOOL _running;
	BOOL _needsLayout;
	WFObservableResult* _observedResult;
	WFWidgetGridView* _gridView;
	double _cornerRadius;
	WFWidgetOptions* _options;
	WFWidgetWorkflowRunnerClient* _client;
	NSObject*<OS_os_log> _log;

}

@property (nonatomic,retain) WFObservableResult * observedResult;                //@synthesize observedResult=_observedResult - In the implementation block
@property (nonatomic,readonly) WFWidgetGridView * gridView;                      //@synthesize gridView=_gridView - In the implementation block
@property (nonatomic,readonly) double cornerRadius;                              //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (nonatomic,readonly) WFWidgetOptions * options;                        //@synthesize options=_options - In the implementation block
@property (nonatomic,retain) WFWidgetWorkflowRunnerClient * client;              //@synthesize client=_client - In the implementation block
@property (assign,nonatomic) BOOL running;                                       //@synthesize running=_running - In the implementation block
@property (assign,nonatomic) BOOL needsLayout;                                   //@synthesize needsLayout=_needsLayout - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_os_log> log;                         //@synthesize log=_log - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)runningStates;
+(id)progressSubscribers;
-(WFWidgetGridView *)gridView;
-(void)setRunning:(BOOL)arg1 ;
-(id)initWithOptions:(id)arg1 ;
-(BOOL)running;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
-(WFWidgetWorkflowRunnerClient *)client;
-(void)setClient:(WFWidgetWorkflowRunnerClient *)arg1 ;
-(NSObject*<OS_os_log>)log;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setNeedsLayout:(BOOL)arg1 ;
-(WFWidgetOptions *)options;
-(double)cornerRadius;
-(BOOL)_canShowWhileLocked;
-(void)loadView;
-(void)observableResultDidChange:(id)arg1 ;
-(void)dealloc;
-(BOOL)needsLayout;
-(void)workflowRunnerClient:(id)arg1 didFinishRunningWorkflowWithError:(id)arg2 cancelled:(BOOL)arg3 ;
-(void)gridView:(id)arg1 didTapCell:(id)arg2 ;
-(void)gridView:(id)arg1 cellDidTransitionToRunningState:(long long)arg2 ;
-(void)gridViewDidFinishLayout:(id)arg1 ;
-(void)performInitialFetch;
-(void)layoutWithObservableResult:(id)arg1 ;
-(void)refreshWorkflows;
-(void)addDefaultShortcutsIfNecessaryWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)showRunningUIForCell:(id)arg1 ;
-(void)stopRunningWithCell:(id)arg1 ;
-(void)resumeRunningWithCell:(id)arg1 ;
-(void)removeStaleRunningContexts;
-(void)restoreRunningStateIfNecessary;
-(/*^block*/id)publishingHandlerForCell:(id)arg1 ;
-(id)runningContextForWorkflowIdentifier:(id)arg1 ;
-(void)setObservedResult:(WFObservableResult *)arg1 ;
-(void)startObservingContentSizeCategoryNotifications;
-(void)stopObservingContentSizeCategoryNotifications;
-(WFObservableResult *)observedResult;
@end

