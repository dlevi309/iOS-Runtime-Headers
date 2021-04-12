/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(void)_unregisterIMRemoteObject:(id)arg1 ;
+(id)_remoteObjects;
-(void)dealloc;
-(id)description;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(void)invalidate;
-(id)_queue;
-(BOOL)isValid;
-(NSString *)processName;
-(void)setProcessName:(NSString *)arg1 ;
-(NSObject*<OS_xpc_object>)connection;
-(NSString *)portName;
-(void)setPid:(int)arg1 ;
-(int)pid;
-(id)initWithConnection:(id)arg1 protocol:(id)arg2 alreadyConfigured:(BOOL)arg3 ;
-(void)_portDidBecomeInvalid;
-(void)_systemShutdown:(id)arg1 ;
-(void)setPortName:(NSString *)arg1 ;
-(id)_initWithConnection:(id)arg1 portName:(id)arg2 protocol:(id)arg3 alreadyConfigured:(BOOL)arg4 forceSecureCoding:(BOOL)arg5 ;
-(void)_cleanupMachBitsCanPost:(BOOL)arg1 ;
-(unsigned long long)forwardXPCObject:(id)arg1 messageContext:(id)arg2 ;
-(id)initWithConnection:(id)arg1 protocol:(id)arg2 ;
-(id)initWithPortName:(id)arg1 protocol:(id)arg2 ;
-(id)initWithConnection:(id)arg1 protocol:(id)arg2 alreadyConfigured:(BOOL)arg3 forceSecureCoding:(BOOL)arg4 ;
@end

