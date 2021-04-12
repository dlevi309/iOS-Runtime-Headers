/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class NSXPCListener, NSString;

@interface _LSDService : NSObject <NSXPCListenerDelegate> {

	NSXPCListener* _listener;

}

@property (__weak,readonly) NSXPCListener * XPCListener;              //@synthesize listener=_listener - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)replacementObjectForXPCConnection:(id)arg1 encoder:(id)arg2 object:(id)arg3 ;
+(BOOL)isEnabled;
+(id)allServiceClasses;
+(BOOL)XPCConnectionIsAlwaysPrivileged;
+(id)XPCConnectionToService;
+(id)synchronous:(BOOL)arg1 XPCProxyWithErrorHandler:(/*^block*/id)arg2 ;
+(id)synchronousXPCProxyWithErrorHandler:(/*^block*/id)arg1 ;
+(id)XPCProxyWithErrorHandler:(/*^block*/id)arg1 ;
+(unsigned short)connectionType;
+(Class)clientClass;
+(id)XPCInterface;
+(void)beginListeningWithAllServices;
+(id)dispatchQueue;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id)initWithXPCListener:(id)arg1 ;
-(NSXPCListener *)XPCListener;
@end

