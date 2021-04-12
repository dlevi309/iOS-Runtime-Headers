/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	id<NEExtensionProviderHostDelegate> _delegate;
	NSXPCConnection* _vendorConnection;

}

@property (assign,nonatomic) BOOL stopped;                                      //@synthesize stopped=_stopped - In the implementation block
@property (nonatomic,readonly) NSXPCConnection * vendorConnection;              //@synthesize vendorConnection=_vendorConnection - In the implementation block
@property (__weak) id<NEExtensionProviderHostDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (readonly) int pid; 
@property (readonly) NSUUID * uuid; 
@property (readonly) NSData * auditTokenData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(NSString *)description;
-(id<NEExtensionProviderHostDelegate>)delegate;
-(void)setDelegate:(id<NEExtensionProviderHostDelegate>)arg1 ;
-(NSUUID *)uuid;
-(BOOL)stopped;
-(void)setStopped:(BOOL)arg1 ;
-(int)pid;
-(void)setDescription:(NSString *)arg1 ;
-(void)dispose;
-(NSData *)auditTokenData;
-(void)sleepWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)wake;
-(void)startWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)createWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setConfiguration:(id)arg1 extensionIdentifier:(id)arg2 ;
-(void)stopWithReason:(int)arg1 ;
-(void)startedWithError:(id)arg1 ;
-(void)displayMessage:(id)arg1 message:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)vendorContext;
-(NSXPCConnection *)vendorConnection;
-(id)initWithVendorEndpoint:(id)arg1 delegate:(id)arg2 ;
-(id)copyValueForEntitlement:(id)arg1 ;
@end

