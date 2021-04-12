/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AutoBugCaptureCore.framework/AutoBugCaptureCore
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, DiagnosticExtensionController, ABCAdministrator, NSString;

@interface DiagCollectionServiceImpl : NSObject <NSXPCListenerDelegate> {

	NSObject*<OS_dispatch_queue> queue;
	DiagnosticExtensionController* deController;
	ABCAdministrator* _administrator;

}

@property (assign,nonatomic,__weak) ABCAdministrator * administrator;              //@synthesize administrator=_administrator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithQueue:(id)arg1 ;
-(void)shutdown;
-(void)setAdministrator:(ABCAdministrator *)arg1 ;
-(ABCAdministrator *)administrator;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)collectPayloadsWithIdentifier:(id)arg1 diagnosticExtensions:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)collectPayloadsWithIdentifier:(id)arg1 diagnosticExtensionsWithParameters:(id)arg2 reply:(/*^block*/id)arg3 ;
-(id)diagnosticExtensionController;
-(BOOL)assertEntitlement:(id)arg1 entitlement:(id)arg2 ;
@end

