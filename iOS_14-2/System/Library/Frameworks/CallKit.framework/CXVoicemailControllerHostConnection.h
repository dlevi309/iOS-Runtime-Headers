/*
* Generated on Thursday, January 14, 2021 at 2:24:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
*/

#import <libobjc.A.dylib/CXVoicemailControllerHostProtocol.h>
#import <libobjc.A.dylib/CXVoicemailControllerVendorProtocol.h>

@protocol CXVoicemailControllerHostConnectionDelegate, OS_dispatch_queue;
@class NSString, NSURL, NSObject, NSXPCConnection, NSSet;

@interface CXVoicemailControllerHostConnection : NSObject <CXVoicemailControllerHostProtocol, CXVoicemailControllerVendorProtocol> {

	NSString* _applicationIdentifier;
	NSURL* _bundleURL;
	id<CXVoicemailControllerHostConnectionDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSXPCConnection* _connection;
	NSSet* _capabilities;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialQueue;                                       //@synthesize serialQueue=_serialQueue - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                                                   //@synthesize connection=_connection - In the implementation block
@property (nonatomic,copy) NSString * applicationIdentifier;                                                 //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (nonatomic,copy) NSURL * bundleURL;                                                                //@synthesize bundleURL=_bundleURL - In the implementation block
@property (nonatomic,copy) NSSet * capabilities;                                                             //@synthesize capabilities=_capabilities - In the implementation block
@property (nonatomic,readonly) id<CXVoicemailControllerVendorProtocol> remoteObjectProxy; 
@property (getter=isPermittedToUsePrivateAPI,nonatomic,readonly) BOOL permittedToUsePrivateAPI; 
@property (assign,nonatomic,__weak) id<CXVoicemailControllerHostConnectionDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setApplicationIdentifier:(NSString *)arg1 ;
-(NSURL *)bundleURL;
-(void)setBundleURL:(NSURL *)arg1 ;
-(NSSet *)capabilities;
-(void)setCapabilities:(NSSet *)arg1 ;
-(id<CXVoicemailControllerVendorProtocol>)remoteObjectProxy;
-(id)init;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(id<CXVoicemailControllerHostConnectionDelegate>)delegate;
-(BOOL)isPermittedToUsePrivateAPI;
-(NSString *)applicationIdentifier;
-(void)setSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDelegate:(id<CXVoicemailControllerHostConnectionDelegate>)arg1 ;
-(NSString *)description;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)dealloc;
-(oneway void)requestTransaction:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)initWithConnection:(id)arg1 serialQueue:(id)arg2 ;
-(oneway void)requestVoicemails:(/*^block*/id)arg1 ;
-(oneway void)addOrUpdateVoicemails:(id)arg1 ;
-(oneway void)removeVoicemails:(id)arg1 ;
@end

