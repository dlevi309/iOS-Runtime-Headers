/*
* Generated on Thursday, January 14, 2021 at 2:27:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
*/

#import <ATFoundation/ATMessageLinkListener.h>

@protocol OS_tcp_listener, OS_dispatch_queue;
@class NSString, NSObject;

@interface ATNetServiceListener : ATMessageLinkListener {

	NSString* _serviceName;
	NSString* _serviceType;
	NSString* _serviceDomain;
	NSObject*<OS_tcp_listener> _tcpListener;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _enableTLS;
	NSString* _interfaceName;

}

@property (nonatomic,copy) NSString * interfaceName;              //@synthesize interfaceName=_interfaceName - In the implementation block
@property (assign,nonatomic) BOOL enableTLS;                      //@synthesize enableTLS=_enableTLS - In the implementation block
-(BOOL)start;
-(BOOL)enableTLS;
-(void)stop;
-(NSString *)interfaceName;
-(void)setEnableTLS:(BOOL)arg1 ;
-(void)setInterfaceName:(NSString *)arg1 ;
-(id)initWithServiceName:(id)arg1 type:(id)arg2 domain:(id)arg3 ;
@end

