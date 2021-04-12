/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContinuousDialogManagerService.framework/ContinuousDialogManagerService
*/

#import <libobjc.A.dylib/CDMXPCListenerServiceDelegate.h>
#import <libobjc.A.dylib/CDMXPCListenerService.h>

@protocol CDMXPCClientDelegate;
@class NSXPCConnection, NSString;

@interface CDMXPCClient : NSObject <CDMXPCListenerServiceDelegate, CDMXPCListenerService> {

	NSXPCConnection* _connection;
	id<CDMXPCClientDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)disconnect;
-(void)connect;
-(id)initWithDelegate:(id)arg1 ;
-(id)_remoteObjectProxy;
-(id)_connection;
-(void)_clearConnectionWithError:(id)arg1 ;
-(void)handleClientAceUpdate:(id)arg1 ;
-(void)handleServiceAceUpdate:(id)arg1 ;
@end

