/*
* Generated on Thursday, January 14, 2021 at 2:20:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, ABRequestHandler, NSString;

@interface AuthBrokerAgentXPCListenerDelegate : NSObject <NSXPCListenerDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	ABRequestHandler* _requestHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)dealloc;
@end

