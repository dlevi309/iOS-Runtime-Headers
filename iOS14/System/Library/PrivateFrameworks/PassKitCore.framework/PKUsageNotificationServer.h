/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/PKUsageNotificationServerExportedInterface.h>

@class NSXPCListener, NSMutableSet, NSString;

@interface PKUsageNotificationServer : NSObject <NSXPCListenerDelegate, PKUsageNotificationServerExportedInterface> {

	os_unfair_lock_s _lock;
	NSXPCListener* _listener;
	NSMutableSet* _connections;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)serviceResumed;
-(id)init;
-(void)notifyPassUsed:(id)arg1 fromSource:(long long)arg2 ;
-(void)notifyPaymentPassIdentifierUsed:(id)arg1 withTransactionInfo:(id)arg2 ;
-(void)initializeUsageNotificationServer;
-(void)serviceSuspended;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)dealloc;
@end

