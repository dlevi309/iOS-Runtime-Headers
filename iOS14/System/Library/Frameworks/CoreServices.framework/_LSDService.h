/*
* Generated on Thursday, January 14, 2021 at 2:20:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(void)beginListeningWithAllServices;
+(unsigned short)connectionType;
+(id)XPCProxyWithErrorHandler:(/*^block*/id)arg1 ;
+(id)replacementObjectForXPCConnection:(id)arg1 encoder:(id)arg2 object:(id)arg3 ;
+(id)dispatchQueue;
+(id)XPCConnectionToService;
+(id)synchronousXPCProxyWithErrorHandler:(/*^block*/id)arg1 ;
+(BOOL)isEnabled;
+(id)XPCInterface;
+(Class)clientClass;
+(BOOL)XPCConnectionIsAlwaysPrivileged;
+(id)allServiceClasses;
-(id)initWithXPCListener:(id)arg1 ;
-(NSXPCListener *)XPCListener;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
@end

