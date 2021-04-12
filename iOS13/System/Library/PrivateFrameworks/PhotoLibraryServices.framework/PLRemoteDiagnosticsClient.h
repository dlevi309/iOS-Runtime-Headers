/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class NSXPCConnection, NSString;

@interface PLRemoteDiagnosticsClient : NSObject <NSXPCListenerDelegate> {

	NSXPCConnection* _connection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)diagnosticsAgentWithErrorHandler:(/*^block*/id)arg1 ;
+(id)_connectionForListenerEndpoint:(id)arg1 ;
@end

