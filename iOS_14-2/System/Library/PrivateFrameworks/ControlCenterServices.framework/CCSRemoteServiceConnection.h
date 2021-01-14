/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setVisibility:(BOOL)arg1 forModuleWithIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)getEnabledStateOfModuleWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)requestAvailableModuleIdentifiersWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)requestEnableModuleWithIdentifier:(id)arg1 force:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)requestDisableModuleWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)presentModuleWithIdentifier:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

