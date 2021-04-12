/*
* Generated on Thursday, January 14, 2021 at 2:24:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
*/

#import <CallKit/CallKit-Structs.h>
#import <libobjc.A.dylib/CXNetworkExtensionMessageControllerHostProtocol.h>

@protocol CXNetworkExtensionMessageControllerHostConnectionDelegate;
@class NSString, NSSet, NSXPCConnection;

@interface CXNetworkExtensionMessageControllerHostConnection : NSObject <CXNetworkExtensionMessageControllerHostProtocol> {

	os_unfair_lock_s _accessorLock;
	id<CXNetworkExtensionMessageControllerHostConnectionDelegate> _delegate;
	NSString* _applicationIdentifier;
	NSSet* _capabilities;
	NSXPCConnection* _connection;

}

@property (nonatomic,readonly) os_unfair_lock_s accessorLock;                                                            //@synthesize accessorLock=_accessorLock - In the implementation block
@property (nonatomic,copy,readonly) NSSet * capabilities;                                                                //@synthesize capabilities=_capabilities - In the implementation block
@property (nonatomic,readonly) NSXPCConnection * connection;                                                             //@synthesize connection=_connection - In the implementation block
@property (nonatomic,copy,readonly) NSString * applicationIdentifier;                                                    //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (assign,nonatomic,__weak) id<CXNetworkExtensionMessageControllerHostConnectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSSet *)capabilities;
-(id)initWithConnection:(id)arg1 ;
-(id<CXNetworkExtensionMessageControllerHostConnectionDelegate>)delegate;
-(NSString *)applicationIdentifier;
-(void)setDelegate:(id<CXNetworkExtensionMessageControllerHostConnectionDelegate>)arg1 ;
-(NSString *)description;
-(NSXPCConnection *)connection;
-(os_unfair_lock_s)accessorLock;
-(void)invalidate;
-(void)dealloc;
-(void)sendNetworkExtensionMessage:(id)arg1 forBundleIdentifier:(id)arg2 reply:(/*^block*/id)arg3 ;
@end

