/*
* Generated on Thursday, January 14, 2021 at 2:27:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
*/

#import <ATFoundation/ATSocket.h>
#import <libobjc.A.dylib/NSNetServiceDelegate.h>
#import <libobjc.A.dylib/NSStreamDelegate.h>

@protocol OS_tcp_connection, OS_dispatch_queue, OS_dispatch_semaphore, OS_dispatch_source;
@class NSString, NSObject;

@interface ATNetServiceSocket : ATSocket <NSNetServiceDelegate, NSStreamDelegate> {

	BOOL _connected;
	NSString* _serviceName;
	NSString* _serviceType;
	NSString* _serviceDomain;
	NSString* _hostname;
	unsigned short _port;
	NSObject*<OS_tcp_connection> _connection;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_semaphore> _sema;
	NSObject*<OS_dispatch_source> _source;
	char _readBuffer[65536];
	BOOL _enableTLS;
	NSString* _interfaceName;

}

@property (nonatomic,copy) NSString * interfaceName;                //@synthesize interfaceName=_interfaceName - In the implementation block
@property (assign,nonatomic) BOOL enableTLS;                        //@synthesize enableTLS=_enableTLS - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)_connect;
-(BOOL)open;
-(BOOL)enableTLS;
-(NSString *)interfaceName;
-(void)setEnableTLS:(BOOL)arg1 ;
-(void)setInterfaceName:(NSString *)arg1 ;
-(void)closeDescriptor;
-(id)initWithServiceName:(id)arg1 type:(id)arg2 domain:(id)arg3 ;
@end

