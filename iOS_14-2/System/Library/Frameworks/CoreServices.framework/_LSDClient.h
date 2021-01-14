/*
* Generated on Thursday, January 14, 2021 at 2:20:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/

#import <libobjc.A.dylib/NSXPCConnectionDelegate.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject, NSString;

@interface _LSDClient : NSObject <NSXPCConnectionDelegate> {

	NSXPCConnection* _XPCConnection;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (retain,readonly) NSXPCConnection * XPCConnection;              //@synthesize XPCConnection=_XPCConnection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSXPCConnection *)XPCConnection;
-(void)didHandleInvocation:(id)arg1 isReply:(BOOL)arg2 ;
-(id)initWithXPCConnection:(id)arg1 ;
-(void)willHandleInvocation:(id)arg1 isReply:(BOOL)arg2 ;
-(id)replacementObjectForXPCConnection:(id)arg1 encoder:(id)arg2 object:(id)arg3 ;
-(void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(BOOL)arg3 ;
-(id)initWithXPCConnection:(id)arg1 queue:(id)arg2 ;
@end

