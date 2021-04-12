/*
* Generated on Thursday, January 14, 2021 at 2:24:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
*/

#import <CallKit/CallKit-Structs.h>
#import <libobjc.A.dylib/CXNetworkExtensionMessageControllerDataSource.h>

@class NSXPCConnection, NSString;

@interface CXNetworkExtensionMessageControllerXPCClient : NSObject <CXNetworkExtensionMessageControllerDataSource> {

	os_unfair_lock_s _accessorLock;
	NSXPCConnection* _connection;

}

@property (nonatomic,readonly) os_unfair_lock_s accessorLock;              //@synthesize accessorLock=_accessorLock - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                 //@synthesize connection=_connection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSXPCConnection *)connection;
-(os_unfair_lock_s)accessorLock;
-(void)invalidate;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)dealloc;
-(void)sendNetworkExtensionMessage:(id)arg1 forBundleIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

