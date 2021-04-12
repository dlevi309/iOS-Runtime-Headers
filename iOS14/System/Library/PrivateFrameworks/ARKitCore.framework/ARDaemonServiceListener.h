/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue, ARDaemonServiceListenerDelegate;
@class NSMutableDictionary, NSObject, NSDictionary, NSString;

@interface ARDaemonServiceListener : NSObject <NSXPCListenerDelegate> {

	NSMutableDictionary* _xpcListeners;
	NSMutableDictionary* _serviceClasses;
	NSObject*<OS_dispatch_queue> _serviceQueue;
	BOOL _anonymousListenerEnabled;
	id<ARDaemonServiceListenerDelegate> _delegate;

}

@property (nonatomic,readonly) NSDictionary * listeners; 
@property (nonatomic,__weak,readonly) id<ARDaemonServiceListenerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)getARDaemonServiceSubClasses;
-(NSDictionary *)listeners;
-(id<ARDaemonServiceListenerDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id)initWithDelegate:(id)arg1 enableAnonymousListeners:(BOOL)arg2 ;
-(BOOL)addServiceByName:(id)arg1 serviceClass:(Class)arg2 ;
-(BOOL)createService:(id)arg1 ;
@end

