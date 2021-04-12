/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setTarget:(id)arg1 ;
-(id)errorHandler;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(void)setErrorHandler:(id)arg1 ;
-(BOOL)_invocationHasBlock:(id)arg1 ;
-(void)setTimeout:(double)arg1 ;
-(double)timeout;
-(IDSXPCConnection *)connection;
-(id)initWithTarget:(id)arg1 connection:(id)arg2 timeoutInSeconds:(double)arg3 errorHandler:(/*^block*/id)arg4 ;
-(id)target;
-(void)setConnection:(IDSXPCConnection *)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)dealloc;
-(void)forwardInvocation:(id)arg1 ;
@end

