/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/

#import <libobjc.A.dylib/FPXPCAutomaticErrorProxy.h>

@protocol FPXPCAutomaticErrorProxy
@required
-(id)remoteObjectProxy;
-(id)synchronousRemoteObjectProxy;

@end


@protocol NSXPCProxyCreating;
@class NSObject, Protocol, NSError, NSString;

@interface FPXPCAutomaticErrorProxy : NSObject <FPXPCAutomaticErrorProxy> {

	NSObject*<NSXPCProxyCreating> _target;
	Protocol* _protocol;
	NSError* _error;
	/*^block*/id _requestWillBeginBlock;
	NSString* _name;
	id _retainSelfWhileMessageIsPending;
	BOOL _isSynchronous;
	AQ _retainCounter;
	int _pid;

}

@property (assign,nonatomic) int requestEffectivePid;              //@synthesize pid=_pid - In the implementation block
+(BOOL)sanitizeErrors;
-(id)remoteObjectProxy;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)description;
-(id)initWithConnection:(id)arg1 protocol:(id)arg2 orError:(id)arg3 name:(id)arg4 requestPid:(int)arg5 requestWillBegin:(/*^block*/id)arg6 ;
-(id)synchronousRemoteObjectProxy;
-(/*^block*/id)_requestWillBegin:(SEL)arg1 requestID:(id)arg2 ;
-(int)requestEffectivePid;
-(id)initWithRemoteObjectProxy:(id)arg1 protocol:(id)arg2 orError:(id)arg3 name:(id)arg4 requestPid:(int)arg5 requestWillBegin:(/*^block*/id)arg6 ;
-(void)_requestDidFinish:(id)arg1 requestDidFinishBlock:(/*^block*/id)arg2 ;
-(id)initWithConnection:(id)arg1 protocol:(id)arg2 orError:(id)arg3 name:(id)arg4 requestPid:(int)arg5 ;
-(void)setRequestEffectivePid:(int)arg1 ;
-(id)initWithConnection:(id)arg1 protocol:(id)arg2 orError:(id)arg3 name:(id)arg4 requestPid:(int)arg5 requestWillBegin:(/*^block*/id)arg6 requestDidFinish:(/*^block*/id)arg7 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
@end

