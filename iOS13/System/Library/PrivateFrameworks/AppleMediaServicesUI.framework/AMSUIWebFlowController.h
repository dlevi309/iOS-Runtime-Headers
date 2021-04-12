/*
* Generated on Monday, March 1, 2021 at 2:34:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/


@class AMSUIWebContainerViewController, AMSUIWebClientContext, NSLock, NSMutableSet;

@interface AMSUIWebFlowController : NSObject {

	AMSUIWebContainerViewController* _rootContainer;
	AMSUIWebClientContext* _context;
	NSLock* _timeoutLock;
	NSMutableSet* _timeouts;

}

@property (nonatomic,__weak,readonly) AMSUIWebContainerViewController * rootContainer;                 //@synthesize rootContainer=_rootContainer - In the implementation block
@property (nonatomic,__weak,readonly) AMSUIWebClientContext * context;                                 //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSLock * timeoutLock;                                                     //@synthesize timeoutLock=_timeoutLock - In the implementation block
@property (nonatomic,retain) NSMutableSet * timeouts;                                                  //@synthesize timeouts=_timeouts - In the implementation block
@property (nonatomic,__weak,readonly) AMSUIWebContainerViewController * currentContainer; 
-(AMSUIWebClientContext *)context;
-(AMSUIWebContainerViewController *)rootContainer;
-(void)dismissViewController;
-(id)refreshPageForContainer:(id)arg1 options:(id)arg2 ;
-(AMSUIWebContainerViewController *)currentContainer;
-(void)replaceWithPageModel:(id)arg1 forContainer:(id)arg2 options:(id)arg3 ;
-(void)pushWithOptions:(id)arg1 ;
-(void)presentWithOptions:(id)arg1 ;
-(void)popViewController;
-(void)_takeSnapshotIfNeeded;
-(id)_refreshPageWithForContainer:(id)arg1 options:(id)arg2 isRetry:(BOOL)arg3 ;
-(NSLock *)timeoutLock;
-(NSMutableSet *)timeouts;
-(void)startTimeout:(double)arg1 queue:(id)arg2 block:(/*^block*/id)arg3 ;
-(id)initWithRootContainer:(id)arg1 context:(id)arg2 ;
-(void)startTimeoutInterruption;
-(void)stopTimeoutInterruption;
-(void)setTimeoutLock:(NSLock *)arg1 ;
-(void)setTimeouts:(NSMutableSet *)arg1 ;
@end

