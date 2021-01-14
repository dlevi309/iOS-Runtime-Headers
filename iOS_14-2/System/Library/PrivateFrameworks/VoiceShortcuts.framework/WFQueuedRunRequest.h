/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
*/


@class WFWorkflowRunRequest, WFWorkflowRunningContext;

@interface WFQueuedRunRequest : NSObject {

	BOOL _shouldNotifyObservers;
	WFWorkflowRunRequest* _runRequest;
	WFWorkflowRunningContext* _runningContext;
	/*^block*/id _completionHandler;

}

@property (nonatomic,readonly) WFWorkflowRunRequest * runRequest;                      //@synthesize runRequest=_runRequest - In the implementation block
@property (nonatomic,readonly) WFWorkflowRunningContext * runningContext;              //@synthesize runningContext=_runningContext - In the implementation block
@property (nonatomic,copy,readonly) id completionHandler;                              //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,readonly) BOOL shouldNotifyObservers;                             //@synthesize shouldNotifyObservers=_shouldNotifyObservers - In the implementation block
-(id)completionHandler;
-(WFWorkflowRunRequest *)runRequest;
-(id)initWithRunRequest:(id)arg1 runningContext:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(WFWorkflowRunningContext *)runningContext;
-(BOOL)shouldNotifyObservers;
@end

