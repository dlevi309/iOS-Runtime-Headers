/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(void)_unregisterIMLocalObject:(id)arg1 ;
+(void)_setExceptionHandlingDisabled:(BOOL)arg1 ;
+(void)_registerIMLocalObject:(id)arg1 ;
+(id)_imLocalObjectQueue;
+(id)_registeredIMLocalObjectForPort:(unsigned)arg1 ;
-(void)setProcessName:(NSString *)arg1 ;
-(void)setTarget:(id)arg1 ;
-(NSProtocolChecker *)protocolChecker;
-(void)_enqueueInvocation:(id)arg1 ;
-(BOOL)_handleInvocation:(id)arg1 processingComponentQueue:(BOOL)arg2 ;
-(void)_portInterrupted;
-(NSString *)processName;
-(BOOL)isValidSelector:(SEL)arg1 ;
-(void)_handleNewInvocations;
-(void)terminated;
-(void)_noteNewInvocation:(BOOL)arg1 ;
-(void)_portDidBecomeInvalid;
-(void)setPortName:(NSString *)arg1 ;
-(void)_popInvocation;
-(id)description;
-(BOOL)isValid;
-(NSObject*<OS_xpc_object>)connection;
-(BOOL)isSameConnection:(id)arg1 ;
-(BOOL)handleInvocation:(id)arg1 ;
-(BOOL)wasInterrupted;
-(void)setWhitelistedClasses:(NSArray *)arg1 ;
-(void)_systemShutdown:(id)arg1 ;
-(id)initWithTarget:(id)arg1 connection:(id)arg2 protocol:(id)arg3 forceSecureCoding:(BOOL)arg4 ;
-(id)initWithTarget:(id)arg1 connection:(id)arg2 protocol:(id)arg3 forceSecureCoding:(BOOL)arg4 offMainThread:(BOOL)arg5 ;
-(void)invalidate;
-(void)_enqueueInvocationWithPriority:(id)arg1 xpcMessage:(id)arg2 priority:(int)arg3 ;
-(id)initWithTarget:(id)arg1 protocol:(id)arg2 ;
-(void)_enqueueInvocationWithPriority:(id)arg1 priority:(int)arg2 ;
-(void)_enqueueInvocationWithSync:(id)arg1 xpcMessage:(id)arg2 ;
-(id)target;
-(void)_enqueueInvocation:(id)arg1 xpcMessage:(id)arg2 ;
-(void)_enqueueInvocation:(id)arg1 xpcMessage:(id)arg2 submitToComponentQueue:(BOOL)arg3 isSync:(BOOL)arg4 ;
-(void)_enqueueInvocationWithSync:(id)arg1 xpcMessage:(id)arg2 submitToComponentQueue:(BOOL)arg3 ;
-(BOOL)_handleInvocation:(id)arg1 ;
-(id)_peekInvocation;
-(NSArray *)whitelistedClasses;
-(id)initWithTarget:(id)arg1 portName:(id)arg2 protocol:(id)arg3 ;
-(void)_enqueueInvocationWithSync:(id)arg1 ;
-(void)_clearPort:(BOOL)arg1 signalRunLoopIfNeeded:(BOOL)arg2 ;
-(id)_currentMessageContext;
-(id)initWithTarget:(id)arg1 connection:(id)arg2 protocol:(id)arg3 ;
-(NSString *)portName;
-(void)dealloc;
-(void)_clearPort:(BOOL)arg1 ;
@end

