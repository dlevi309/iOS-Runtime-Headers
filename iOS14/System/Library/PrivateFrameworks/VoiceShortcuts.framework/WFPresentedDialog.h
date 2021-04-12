/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
*/


@class WFDialogRequest, WFDialogResponse, WFWorkflowRunningContext;

@interface WFPresentedDialog : NSObject {

	WFDialogRequest* _request;
	WFDialogResponse* _response;
	unsigned long long _presentationMode;
	WFWorkflowRunningContext* _context;
	/*^block*/id _completionHandler;

}

@property (nonatomic,readonly) WFDialogRequest * request;                        //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) WFDialogResponse * response;                        //@synthesize response=_response - In the implementation block
@property (nonatomic,readonly) unsigned long long presentationMode;              //@synthesize presentationMode=_presentationMode - In the implementation block
@property (nonatomic,readonly) WFWorkflowRunningContext * context;               //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) id completionHandler;                             //@synthesize completionHandler=_completionHandler - In the implementation block
-(id)completionHandler;
-(WFWorkflowRunningContext *)context;
-(WFDialogRequest *)request;
-(WFDialogResponse *)response;
-(unsigned long long)presentationMode;
-(void)setResponse:(WFDialogResponse *)arg1 ;
-(id)initWithRequest:(id)arg1 presentationMode:(unsigned long long)arg2 runningContext:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
@end

