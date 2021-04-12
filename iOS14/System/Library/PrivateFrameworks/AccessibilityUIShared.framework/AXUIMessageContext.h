/*
* Generated on Thursday, January 14, 2021 at 2:25:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUIShared.framework/AccessibilityUIShared
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
-(void)setXpcMessage:(NSObject*<OS_xpc_object>)arg1 ;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(void*)context;
-(NSObject*<OS_xpc_object>)xpcMessage;
-(void)setContext:(void*)arg1 ;
-(AXAccessQueue *)targetAccessQueue;
-(void)setTargetAccessQueue:(AXAccessQueue *)arg1 ;
-(BOOL)completionRequiresWritingBlock;
-(void)setCompletionRequiresWritingBlock:(BOOL)arg1 ;
@end

