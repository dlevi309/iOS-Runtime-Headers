/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/_LTClientConnectionDelegate.h>

@protocol OS_dispatch_queue;
@class NSXPCListener, NSObject, NSMutableArray, _LTTranslationServer, NSString;

@interface _LTDaemon : NSObject <NSXPCListenerDelegate, _LTClientConnectionDelegate> {

	NSXPCListener* _translationListener;
	NSObject*<OS_dispatch_queue> _listenerQueue;
	NSMutableArray* _connections;
	_LTTranslationServer* _server;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)run;
-(id)init;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)_setupMemoryWarningListener;
-(void)clientConnectionClosed:(id)arg1 ;
@end

