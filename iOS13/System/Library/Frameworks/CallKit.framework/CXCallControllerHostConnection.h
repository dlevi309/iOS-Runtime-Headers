/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
*/

#import <libobjc.A.dylib/CXCallControllerHostProtocol.h>
#import <libobjc.A.dylib/CXCallControllerVendorProtocol.h>

@protocol CXCallControllerHostConnectionDelegate, OS_dispatch_queue;
@class NSString, NSURL, NSObject, NSXPCConnection, NSSet;

@interface CXCallControllerHostConnection : NSObject <CXCallControllerHostProtocol, CXCallControllerVendorProtocol> {

	BOOL _hasVoIPBackgroundMode;
	NSString* _applicationIdentifier;
	NSURL* _bundleURL;
	id<CXCallControllerHostConnectionDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSXPCConnection* _connection;
	NSSet* _capabilities;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialQueue;                                    //@synthesize serialQueue=_serialQueue - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                                                //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) BOOL hasVoIPBackgroundMode;                                                  //@synthesize hasVoIPBackgroundMode=_hasVoIPBackgroundMode - In the implementation block
@property (nonatomic,copy) NSString * applicationIdentifier;                                              //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (nonatomic,copy) NSURL * bundleURL;                                                             //@synthesize bundleURL=_bundleURL - In the implementation block
@property (nonatomic,copy) NSSet * capabilities;                                                          //@synthesize capabilities=_capabilities - In the implementation block
@property (nonatomic,readonly) id<CXCallControllerVendorProtocol> remoteObjectProxy; 
@property (getter=isPermittedToUsePublicAPI,nonatomic,readonly) BOOL entitledForPublicAPI; 
@property (getter=isPermittedToUsePrivateAPI,nonatomic,readonly) BOOL entitledForPrivateAPI; 
@property (assign,nonatomic,__weak) id<CXCallControllerHostConnectionDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(id<CXCallControllerHostConnectionDelegate>)delegate;
-(void)setDelegate:(id<CXCallControllerHostConnectionDelegate>)arg1 ;
-(NSURL *)bundleURL;
-(id<CXCallControllerVendorProtocol>)remoteObjectProxy;
-(NSXPCConnection *)connection;
-(void)setBundleURL:(NSURL *)arg1 ;
-(NSString *)applicationIdentifier;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(void)setApplicationIdentifier:(NSString *)arg1 ;
-(NSSet *)capabilities;
-(void)setCapabilities:(NSSet *)arg1 ;
-(void)setSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)isPermittedToUsePublicAPI;
-(BOOL)isPermittedToUsePrivateAPI;
-(oneway void)requestTransaction:(id)arg1 reply:(/*^block*/id)arg2 ;
-(oneway void)addOrUpdateCall:(id)arg1 ;
-(oneway void)removeCall:(id)arg1 ;
-(id)initWithConnection:(id)arg1 serialQueue:(id)arg2 ;
-(BOOL)hasVoIPBackgroundMode;
-(void)setHasVoIPBackgroundMode:(BOOL)arg1 ;
-(oneway void)requestCalls:(/*^block*/id)arg1 ;
@end

