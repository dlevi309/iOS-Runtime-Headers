/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AccessibilityUIShared.framework/AccessibilityUIShared
*/


@protocol OS_xpc_object;
@class NSObject, AXAccessQueue;

@interface AXUIMessageContext : NSObject {

	BOOL _completionRequiresWritingBlock;
	NSObject*<OS_xpc_object> _xpcMessage;
	void* _context;
	AXAccessQueue* _targetAccessQueue;
	/*^block*/id _completion;

}

@property (nonatomic,retain) NSObject*<OS_xpc_object> xpcMessage;              //@synthesize xpcMessage=_xpcMessage - In the implementation block
@property (assign,nonatomic) void* context;                                    //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) AXAccessQueue * targetAccessQueue;                //@synthesize targetAccessQueue=_targetAccessQueue - In the implementation block
@property (assign,nonatomic) BOOL completionRequiresWritingBlock;              //@synthesize completionRequiresWritingBlock=_completionRequiresWritingBlock - In the implementation block
@property (nonatomic,copy) id completion;                                      //@synthesize completion=_completion - In the implementation block
-(void*)context;
-(void)setContext:(void*)arg1 ;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(void)setXpcMessage:(NSObject*<OS_xpc_object>)arg1 ;
-(NSObject*<OS_xpc_object>)xpcMessage;
-(AXAccessQueue *)targetAccessQueue;
-(void)setTargetAccessQueue:(AXAccessQueue *)arg1 ;
-(BOOL)completionRequiresWritingBlock;
-(void)setCompletionRequiresWritingBlock:(BOOL)arg1 ;
@end

