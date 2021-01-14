/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

