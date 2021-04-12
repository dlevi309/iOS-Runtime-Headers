/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/NEExtensionProviderProtocol.h>
#import <libobjc.A.dylib/NEExtensionProviderHostProtocol.h>

@protocol NEExtensionProviderHostProtocol, OS_os_transaction;
@class NSString, NEConfiguration, NSXPCConnection, NEProvider, NSObject;

@interface NEExtensionProviderContext : NSExtensionContext <NEExtensionProviderProtocol, NEExtensionProviderHostProtocol> {

	id<NEExtensionProviderHostProtocol> _hostContext;
	NSString* _description;
	BOOL _isDisposed;
	BOOL _started;
	NEConfiguration* _configuration;
	/*^block*/id _stopCompletionHandler;
	NSXPCConnection* _hostConnection;
	NEProvider* _provider;
	NSObject*<OS_os_transaction> _transaction;

}

@property (copy) id stopCompletionHandler;                                          //@synthesize stopCompletionHandler=_stopCompletionHandler - In the implementation block
@property (readonly) NSXPCConnection * hostConnection;                              //@synthesize hostConnection=_hostConnection - In the implementation block
@property (assign,nonatomic) BOOL isDisposed;                                       //@synthesize isDisposed=_isDisposed - In the implementation block
@property (nonatomic,readonly) NEProvider * provider;                               //@synthesize provider=_provider - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_transaction> transaction;              //@synthesize transaction=_transaction - In the implementation block
@property (retain) NEConfiguration * configuration;                                 //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) NSString * extensionPoint; 
@property (assign,nonatomic) BOOL started;                                          //@synthesize started=_started - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(void)dealloc;
-(NSString *)description;
-(id)_principalObject;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithConnection:(id)arg1 ;
-(NSString *)extensionPoint;
-(void)setConfiguration:(NEConfiguration *)arg1 ;
-(NEConfiguration *)configuration;
-(NSObject*<OS_os_transaction>)transaction;
-(void)setTransaction:(NSObject*<OS_os_transaction>)arg1 ;
-(BOOL)started;
-(void)cancelWithError:(id)arg1 ;
-(NEProvider *)provider;
-(void)setDescription:(NSString *)arg1 ;
-(id)initWithProvider:(id)arg1 ;
-(void)setStarted:(BOOL)arg1 ;
-(id)hostContext;
-(void)dispose;
-(void)sleepWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)wake;
-(void)setStopCompletionHandler:(id)arg1 ;
-(id)stopCompletionHandler;
-(void)startWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)createWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setConfiguration:(id)arg1 extensionIdentifier:(id)arg2 ;
-(void)stopWithReason:(int)arg1 ;
-(void)startedWithError:(id)arg1 ;
-(void)displayMessage:(id)arg1 message:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(long long)neStopReasonToProviderStopReason:(int)arg1 ;
-(void)completeSession;
-(NSXPCConnection *)hostConnection;
-(BOOL)isDisposed;
-(void)setIsDisposed:(BOOL)arg1 ;
-(void)dropProvider;
@end

