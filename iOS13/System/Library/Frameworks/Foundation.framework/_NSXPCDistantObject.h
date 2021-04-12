/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (readonly) unsigned long long _proxyNumber;                   //@synthesize proxyNumber=_proxyNumber - In the implementation block
@property (readonly) unsigned long long _generationCount;               //@synthesize generationCount=_generationCount - In the implementation block
@property (retain,readonly) NSXPCConnection * _connection;              //@synthesize connection=_connection - In the implementation block
@property (readonly) BOOL _exported; 
@property (readonly) BOOL _noImportance; 
@property (readonly) BOOL _sync; 
@property (copy,readonly) id _errorBlock;                               //@synthesize errorBlock=_errorBlock - In the implementation block
@property (retain) NSXPCInterface * _remoteInterface;                   //@synthesize remoteInterface=_remoteInterface - In the implementation block
@property (copy) NSDictionary * _userInfo;                              //@synthesize userInfo=_userInfo - In the implementation block
@property (assign) double _timeout;                                     //@synthesize timeout=_timeout - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(NSXPCConnection *)_connection;
-(NSDictionary *)_userInfo;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_forwardStackInvocation:(id)arg1 ;
-(unsigned long long)_generationCount;
-(id)_unboostingRemoteObjectProxy;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)remoteObjectProxy;
-(unsigned long long)_proxyNumber;
-(NSXPCInterface *)_remoteInterface;
-(double)_timeout;
-(id)_errorBlock;
-(BOOL)_noImportance;
-(id)_initWithConnection:(id)arg1 exportedObject:(id)arg2 interface:(id)arg3 ;
-(BOOL)_sync;
-(id)_initWithConnection:(id)arg1 proxyNumber:(unsigned long long)arg2 generationCount:(unsigned long long)arg3 interface:(id)arg4 options:(unsigned long long)arg5 error:(/*^block*/id)arg6 ;
-(void)set_userInfo:(NSDictionary *)arg1 ;
-(void)set_timeout:(double)arg1 ;
-(id)remoteObjectProxyWithUserInfo:(id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(id)remoteObjectProxyWithTimeout:(double)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)set_remoteInterface:(NSXPCInterface *)arg1 ;
-(BOOL)_exported;
@end

