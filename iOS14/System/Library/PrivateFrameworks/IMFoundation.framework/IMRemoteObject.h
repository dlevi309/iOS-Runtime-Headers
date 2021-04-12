/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
*/


@class NSString;

@interface IMRemoteObject : NSObject {

	id _internal;

}

@property (nonatomic,readonly) NSString * portName; 
@property (nonatomic,retain) NSString * processName; 
@property (assign,nonatomic) int pid; 
@property (nonatomic,readonly) NSObject*<OS_xpc_object> connection; 
@property (nonatomic,readonly) BOOL isValid; 
+(void)initialize;
+(void)_registerIMRemoteObject:(id)arg1 ;
+(id)_remoteObjects;
+(void)_unregisterIMRemoteObject:(id)arg1 ;
-(void)setProcessName:(NSString *)arg1 ;
-(void)blockUntilSendQueueIsEmpty;
-(id)_initWithConnection:(id)arg1 portName:(id)arg2 protocol:(id)arg3 alreadyConfigured:(BOOL)arg4 forceSecureCoding:(BOOL)arg5 ;
-(int)pid;
-(id)initWithConnection:(id)arg1 protocol:(id)arg2 alreadyConfigured:(BOOL)arg3 ;
-(id)_queue;
-(NSString *)processName;
-(void)_cleanupMachBitsCanPost:(BOOL)arg1 locked:(BOOL)arg2 ;
-(void)_portDidBecomeInvalid;
-(void)setPortName:(NSString *)arg1 ;
-(id)description;
-(BOOL)isValid;
-(NSObject*<OS_xpc_object>)connection;
-(id)initWithConnection:(id)arg1 protocol:(id)arg2 ;
-(void)_systemShutdown:(id)arg1 ;
-(void)invalidate;
-(id)initWithConnection:(id)arg1 protocol:(id)arg2 alreadyConfigured:(BOOL)arg3 forceSecureCoding:(BOOL)arg4 ;
-(unsigned long long)forwardXPCObject:(id)arg1 messageContext:(id)arg2 locked:(BOOL)arg3 ;
-(void)setPid:(int)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)initWithPortName:(id)arg1 protocol:(id)arg2 ;
-(NSString *)portName;
-(void)dealloc;
-(void)forwardInvocation:(id)arg1 ;
@end

