/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
*/


@class NSProtocolChecker, NSString, NSArray;

@interface IMLocalObject : NSObject {

	id _internal;

}

@property (assign,nonatomic) id target; 
@property (nonatomic,readonly) NSProtocolChecker * protocolChecker; 
@property (nonatomic,readonly) NSString * portName; 
@property (nonatomic,retain) NSString * processName; 
@property (nonatomic,readonly) NSObject*<OS_xpc_object> connection; 
@property (nonatomic,readonly) BOOL isValid; 
@property (nonatomic,readonly) BOOL wasInterrupted; 
@property (nonatomic,retain) NSArray * whitelistedClasses; 
+(void)initialize;
+(void)_registerIMLocalObject:(id)arg1 ;
+(void)_unregisterIMLocalObject:(id)arg1 ;
+(id)_imLocalObjectQueue;
+(void)_setExceptionHandlingDisabled:(BOOL)arg1 ;
+(id)_registeredIMLocalObjectForPort:(unsigned)arg1 ;
-(void)dealloc;
-(id)description;
-(void)invalidate;
-(BOOL)isValid;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(NSString *)processName;
-(void)setProcessName:(NSString *)arg1 ;
-(id)initWithTarget:(id)arg1 protocol:(id)arg2 ;
-(NSObject*<OS_xpc_object>)connection;
-(NSString *)portName;
-(NSProtocolChecker *)protocolChecker;
-(void)_portDidBecomeInvalid;
-(void)_portInterrupted;
-(NSArray *)whitelistedClasses;
-(void)_enqueueInvocation:(id)arg1 ;
-(id)_currentMessageContext;
-(id)initWithTarget:(id)arg1 portName:(id)arg2 protocol:(id)arg3 ;
-(id)initWithTarget:(id)arg1 connection:(id)arg2 protocol:(id)arg3 forceSecureCoding:(BOOL)arg4 ;
-(id)initWithTarget:(id)arg1 connection:(id)arg2 protocol:(id)arg3 forceSecureCoding:(BOOL)arg4 offMainThread:(BOOL)arg5 ;
-(void)_handleNewInvocations;
-(void)_cancelHandlerCompleted;
-(void)_clearPort:(BOOL)arg1 signalRunLoopIfNeeded:(BOOL)arg2 ;
-(void)_clearPort:(BOOL)arg1 ;
-(BOOL)isValidSelector:(SEL)arg1 ;
-(void)terminated;
-(BOOL)_handleInvocation:(id)arg1 ;
-(id)_peekInvocation;
-(void)_popInvocation;
-(BOOL)handleInvocation:(id)arg1 ;
-(void)_noteNewInvocation;
-(void)_enqueueInvocation:(id)arg1 xpcMessage:(id)arg2 ;
-(void)_enqueueInvocationWithPriority:(id)arg1 xpcMessage:(id)arg2 priority:(int)arg3 ;
-(void)_handleInvocationForSendMessage:(id)arg1 ;
-(id)initWithTarget:(id)arg1 connection:(id)arg2 protocol:(id)arg3 ;
-(BOOL)wasInterrupted;
-(void)_systemShutdown:(id)arg1 ;
-(void)setPortName:(NSString *)arg1 ;
-(void)_enqueueInvocationWithPriority:(id)arg1 priority:(int)arg2 ;
-(void)setWhitelistedClasses:(NSArray *)arg1 ;
@end

