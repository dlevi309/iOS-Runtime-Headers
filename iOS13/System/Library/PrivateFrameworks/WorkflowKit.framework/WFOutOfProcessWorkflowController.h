/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <libobjc.A.dylib/WFOutOfProcessWorkflowControllerHost.h>

@protocol WFOutOfProcessWorkflowControllerDelegate, OS_dispatch_queue, OS_dispatch_source;
@class WFContentCollection, NSString, NSData, WFWorkflowReference, NSExtension, NSUUID, NSObject;

@interface WFOutOfProcessWorkflowController : NSObject <WFOutOfProcessWorkflowControllerHost> {

	WFContentCollection* _input;
	WFContentCollection* _output;
	id<WFOutOfProcessWorkflowControllerDelegate> _delegate;
	NSString* _automationType;
	NSString* _debugIdentifier;
	NSData* _workflowData;
	long long _environment;
	double _timeoutSeconds;
	WFWorkflowReference* _workflowReference;
	NSExtension* _extension;
	NSUUID* _extensionRequestIdentifier;
	NSObject*<OS_dispatch_queue> _internalSerialQueue;
	NSObject*<OS_dispatch_source> _extensionMaxRunTimeTimer;
	long long _state;

}

@property (nonatomic,readonly) NSData * workflowData;                                                   //@synthesize workflowData=_workflowData - In the implementation block
@property (nonatomic,readonly) long long environment;                                                   //@synthesize environment=_environment - In the implementation block
@property (nonatomic,readonly) double timeoutSeconds;                                                   //@synthesize timeoutSeconds=_timeoutSeconds - In the implementation block
@property (nonatomic,readonly) WFWorkflowReference * workflowReference;                                 //@synthesize workflowReference=_workflowReference - In the implementation block
@property (nonatomic,retain) NSExtension * extension;                                                   //@synthesize extension=_extension - In the implementation block
@property (nonatomic,retain) NSUUID * extensionRequestIdentifier;                                       //@synthesize extensionRequestIdentifier=_extensionRequestIdentifier - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> internalSerialQueue;                        //@synthesize internalSerialQueue=_internalSerialQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> extensionMaxRunTimeTimer;                    //@synthesize extensionMaxRunTimeTimer=_extensionMaxRunTimeTimer - In the implementation block
@property (assign,nonatomic) long long state;                                                           //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) WFContentCollection * input;                                               //@synthesize input=_input - In the implementation block
@property (nonatomic,readonly) WFContentCollection * output;                                            //@synthesize output=_output - In the implementation block
@property (assign,nonatomic,__weak) id<WFOutOfProcessWorkflowControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * automationType;                                                   //@synthesize automationType=_automationType - In the implementation block
@property (nonatomic,readonly) NSString * debugIdentifier;                                              //@synthesize debugIdentifier=_debugIdentifier - In the implementation block
@property (getter=isRunning,nonatomic,readonly) BOOL running; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<WFOutOfProcessWorkflowControllerDelegate>)delegate;
-(void)setDelegate:(id<WFOutOfProcessWorkflowControllerDelegate>)arg1 ;
-(void)stop;
-(long long)state;
-(long long)environment;
-(BOOL)isRunning;
-(WFContentCollection *)input;
-(void)setState:(long long)arg1 ;
-(double)timeoutSeconds;
-(void)setInput:(WFContentCollection *)arg1 ;
-(void)setExtension:(NSExtension *)arg1 ;
-(void)setExtensionRequestIdentifier:(NSUUID *)arg1 ;
-(NSExtension *)extension;
-(NSUUID *)extensionRequestIdentifier;
-(id)extensionContext;
-(NSString *)debugIdentifier;
-(NSObject*<OS_dispatch_queue>)internalSerialQueue;
-(WFContentCollection *)output;
-(id)extensionInterface;
-(BOOL)runWithInput:(id)arg1 error:(out id*)arg2 ;
-(void)workflowDidStart;
-(void)workflowDidFinishRunningWithError:(id)arg1 cancelled:(BOOL)arg2 ;
-(NSString *)automationType;
-(void)setAutomationType:(NSString *)arg1 ;
-(id)initWithWorkflow:(id)arg1 database:(id)arg2 environment:(long long)arg3 ;
-(id)initWithWorkflowData:(id)arg1 debugIdentifier:(id)arg2 environment:(long long)arg3 ;
-(id)initWithWorkflowData:(id)arg1 debugIdentifier:(id)arg2 environment:(long long)arg3 workflowReference:(id)arg4 ;
-(void)handleExtensionMaxRunTimeExceeded;
-(void)handleXPCConnectionInterruption;
-(void)stopExtension;
-(void)cancelTimeoutTimer;
-(void)restartTimeoutTimer;
-(void)reportFinishToDelegateWithError:(id)arg1 cancelled:(BOOL)arg2 ;
-(NSData *)workflowData;
-(WFWorkflowReference *)workflowReference;
-(NSObject*<OS_dispatch_source>)extensionMaxRunTimeTimer;
-(void)setExtensionMaxRunTimeTimer:(NSObject*<OS_dispatch_source>)arg1 ;
@end

