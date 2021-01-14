/*
* Generated on Thursday, January 14, 2021 at 2:26:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class TRIXPCInternalServiceWrapper, NSXPCInterface, NSString;

@interface TRIXPCInternalServiceListener : NSObject <NSXPCListenerDelegate> {

	TRIXPCInternalServiceWrapper* _wrapper;
	NSXPCInterface* _interface;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id)initWithServerContext:(id)arg1 taskQueue:(id)arg2 ;
@end

