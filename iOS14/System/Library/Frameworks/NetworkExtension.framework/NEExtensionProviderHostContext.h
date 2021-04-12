/*
* Generated on Thursday, January 14, 2021 at 2:22:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/NEExtensionProviderProtocol.h>
#import <libobjc.A.dylib/NEExtensionProviderHostProtocol.h>

@protocol NEExtensionProviderProtocol, NEExtensionProviderHostDelegate;
@class NSString, NEUserNotification, NSXPCConnection, NSUUID, NSData;

@interface NEExtensionProviderHostContext : NSExtensionContext <NEExtensionProviderProtocol, NEExtensionProviderHostProtocol> {

	id<NEExtensionProviderProtocol> _vendorContext;
	NSString* _description;
	NEUserNotification* _notification;
	BOOL _stopped;
	BOOL _isHostingSystemExtension;
	id<NEExtensionProviderHostDelegate> _delegate;
	NSXPCConnection* _vendorConnection;

}

@property (assign,nonatomic) BOOL stopped;                                      //@synthesize stopped=_stopped - In the implementation block
@property (nonatomic,readonly) NSXPCConnection * vendorConnection;              //@synthesize vendorConnection=_vendorConnection - In the implementation block
@property (nonatomic,readonly) BOOL isHostingSystemExtension;                   //@synthesize isHostingSystemExtension=_isHostingSystemExtension - In the implementation block
@property (__weak) id<NEExtensionProviderHostDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (readonly) int pid; 
@property (readonly) NSUUID * uuid; 
@property (readonly) NSData * auditTokenData; 
@property (readonly) int requiredEntitlement; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryVendorProtocol;
+(id)_extensionAuxiliaryHostProtocol;
-(int)requiredEntitlement;
-(NSUUID *)uuid;
-(int)pid;
-(id<NEExtensionProviderHostDelegate>)delegate;
-(BOOL)stopped;
-(void)dispose;
-(void)setDelegate:(id<NEExtensionProviderHostDelegate>)arg1 ;
-(NSString *)description;
-(void)stopWithReason:(int)arg1 ;
-(void)sleepWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)createWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)startedWithError:(id)arg1 ;
-(void)setConfiguration:(id)arg1 extensionIdentifier:(id)arg2 ;
-(void)validateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)displayMessage:(id)arg1 message:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSXPCConnection *)vendorConnection;
-(id)copyValueForEntitlement:(id)arg1 ;
-(BOOL)isHostingSystemExtension;
-(BOOL)isSignedWithDeveloperID;
-(id)initWithVendorEndpoint:(id)arg1 delegate:(id)arg2 ;
-(void)setStopped:(BOOL)arg1 ;
-(void)wake;
-(id)vendorContext;
-(NSData *)auditTokenData;
-(void)setDescription:(NSString *)arg1 ;
-(void)startWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

