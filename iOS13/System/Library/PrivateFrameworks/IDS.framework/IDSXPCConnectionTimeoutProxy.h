/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
*/


@class IDSXPCConnection;

@interface IDSXPCConnectionTimeoutProxy : NSObject {

	id _target;
	IDSXPCConnection* _connection;
	double _timeout;
	/*^block*/id _errorHandler;

}

@property (nonatomic,retain) id target;                                  //@synthesize target=_target - In the implementation block
@property (nonatomic,retain) IDSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) double timeout;                             //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,copy) id errorHandler;                              //@synthesize errorHandler=_errorHandler - In the implementation block
-(void)dealloc;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(void)setErrorHandler:(id)arg1 ;
-(id)errorHandler;
-(IDSXPCConnection *)connection;
-(void)setConnection:(IDSXPCConnection *)arg1 ;
-(double)timeout;
-(void)setTimeout:(double)arg1 ;
-(id)initWithTarget:(id)arg1 connection:(id)arg2 timeoutInSeconds:(double)arg3 errorHandler:(/*^block*/id)arg4 ;
-(BOOL)_invocationHasBlock:(id)arg1 ;
@end

