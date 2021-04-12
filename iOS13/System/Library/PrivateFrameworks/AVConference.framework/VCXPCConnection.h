/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@protocol OS_xpc_object, OS_os_transaction, OS_dispatch_source, OS_dispatch_queue;
#import <AVConference/AVConference-Structs.h>
@class NSObject, NSData, NSString;

@interface VCXPCConnection : NSObject {

	NSObject*<OS_xpc_object> _connection;
	int _pid;
	id context;
	NSData* tokenData;
	NSObject*<OS_os_transaction> _transaction;
	BOOL _isPersistent;
	NSObject*<OS_dispatch_source> _timeoutTimer;
	NSObject*<OS_dispatch_queue> _timeoutTimerQueue;
	OpaqueFigCFWeakReferenceHolderRef _timeoutTimerContext;
	NSString* _lastCalledApiName;
	BOOL _timeoutTimerStarted;

}

@property (nonatomic,retain) NSObject*<OS_xpc_object> connection; 
@property (assign) int pid; 
@property (nonatomic,retain) id context; 
@property (nonatomic,retain) NSData * tokenData; 
@property (nonatomic,retain) NSString * lastCalledApiName;                     //@synthesize lastCalledApiName=_lastCalledApiName - In the implementation block
@property (getter=isPersistent) BOOL persistent; 
+(void)selfTerminateDueToTimeout:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)context;
-(NSObject*<OS_xpc_object>)connection;
-(void)setConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(void)setContext:(id)arg1 ;
-(void)setPid:(int)arg1 ;
-(int)pid;
-(BOOL)isPersistent;
-(void)setPersistent:(BOOL)arg1 ;
-(NSData *)tokenData;
-(void)setTokenData:(NSData *)arg1 ;
-(void)destroyTimeoutTimer;
-(NSString *)lastCalledApiName;
-(void)startTimeoutTimer;
-(void)stopTimeoutTimer;
-(void)createTimeoutTimer;
-(void)setLastCalledApiName:(NSString *)arg1 ;
@end

