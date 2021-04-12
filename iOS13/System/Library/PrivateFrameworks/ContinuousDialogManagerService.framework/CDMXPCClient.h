/*
* Generated on Monday, March 1, 2021 at 2:34:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)_connection;
-(void)disconnect;
-(id)initWithDelegate:(id)arg1 ;
-(void)connect;
-(id)_remoteObjectProxy;
-(void)_clearConnectionWithError:(id)arg1 ;
-(void)handleClientAceUpdate:(id)arg1 ;
-(void)handleServiceAceUpdate:(id)arg1 ;
@end

