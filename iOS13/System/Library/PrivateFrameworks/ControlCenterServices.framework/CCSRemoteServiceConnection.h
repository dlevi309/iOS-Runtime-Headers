/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterServices.framework/ControlCenterServices
*/

#import <libobjc.A.dylib/CCSRemoteServiceServerProtocol.h>

@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection, NSString;

@interface CCSRemoteServiceConnection : NSObject <CCSRemoteServiceServerProtocol> {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _callOutQueue;
	NSXPCConnection* _connection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(id)init;
-(void)requestEnableModuleWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)requestAvailableModuleIdentifiersWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getEnabledStateOfModuleWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)presentModuleWithIdentifier:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

