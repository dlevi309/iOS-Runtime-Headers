/*
* Generated on Thursday, January 14, 2021 at 2:24:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setApplicationIdentifier:(NSString *)arg1 ;
-(NSURL *)bundleURL;
-(void)setBundleURL:(NSURL *)arg1 ;
-(NSSet *)capabilities;
-(void)setCapabilities:(NSSet *)arg1 ;
-(id<CXCallControllerVendorProtocol>)remoteObjectProxy;
-(id)init;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(id<CXCallControllerHostConnectionDelegate>)delegate;
-(BOOL)isPermittedToUsePublicAPI;
-(oneway void)addOrUpdateCall:(id)arg1 ;
-(BOOL)isPermittedToUsePrivateAPI;
-(NSString *)applicationIdentifier;
-(void)setSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDelegate:(id<CXCallControllerHostConnectionDelegate>)arg1 ;
-(NSString *)description;
-(NSXPCConnection *)connection;
-(BOOL)hasVoIPBackgroundMode;
-(oneway void)removeCall:(id)arg1 ;
-(void)setHasVoIPBackgroundMode:(BOOL)arg1 ;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)dealloc;
-(oneway void)requestTransaction:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)initWithConnection:(id)arg1 serialQueue:(id)arg2 ;
-(oneway void)requestCalls:(/*^block*/id)arg1 ;
@end

