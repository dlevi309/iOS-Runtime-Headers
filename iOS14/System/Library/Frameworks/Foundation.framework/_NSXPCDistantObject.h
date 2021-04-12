/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <libobjc.A.dylib/NSXPCProxyCreating.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSXPCConnection, NSXPCInterface, NSDictionary;

@interface _NSXPCDistantObject : NSObject <NSXPCProxyCreating, NSSecureCoding> {

	NSXPCConnection* _connection;
	NSXPCInterface* _remoteInterface;
	NSDictionary* _userInfo;
	/*^block*/id _errorBlock;
	unsigned long long _proxyNumber;
	unsigned long long _generationCount;
	unsigned long long _flags;
	double _timeout;

}

@property (retain,readonly) NSXPCConnection * _connection;              //@synthesize connection=_connection - In the implementation block
@property (copy) NSDictionary * _userInfo;                              //@synthesize userInfo=_userInfo - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)remoteObjectProxy;
-(id)_unboostingRemoteObjectProxy;
-(id)remoteObjectProxyWithTimeout:(double)arg1 errorHandler:(/*^block*/id)arg2 ;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)remoteObjectProxyWithUserInfo:(id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)_forwardStackInvocation:(id)arg1 ;
-(id)_initWithConnection:(id)arg1 proxyNumber:(unsigned long long)arg2 generationCount:(unsigned long long)arg3 interface:(id)arg4 options:(unsigned long long)arg5 error:(/*^block*/id)arg6 ;
-(id)_initWithConnection:(id)arg1 exportedObject:(id)arg2 interface:(id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)_userInfo;
-(NSXPCConnection *)_connection;
-(void)set_userInfo:(NSDictionary *)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)dealloc;
-(void)forwardInvocation:(id)arg1 ;
@end

