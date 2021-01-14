/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PDXPCService.h>
#import <libobjc.A.dylib/PDAssertionRequestDelegate.h>
#import <libobjc.A.dylib/PDAssertionCoordinatorExportedInterface.h>

@protocol OS_dispatch_queue, PDAssertionCoordinatorDelegate;
@class NSMutableDictionary, NSObject, PKEntitlementWhitelist, NSMutableArray, NSString;

@interface PDAssertionCoordinator : PDXPCService <PDAssertionRequestDelegate, PDAssertionCoordinatorExportedInterface> {

	NSMutableDictionary* _assertionsByType;
	NSObject*<OS_dispatch_queue> _coordinatorSerialQueue;
	PKEntitlementWhitelist* _whitelist;
	long long _suppressionPermissionState;
	NSMutableArray* _pendingAssertionRequests;
	BOOL _isForegroundApplication;
	id<PDAssertionCoordinatorDelegate> _delegate;
	NSString* _bundleIdentifier;

}

@property (assign,nonatomic,__weak) id<PDAssertionCoordinatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * bundleIdentifier;                                     //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (assign,nonatomic) BOOL isForegroundApplication;                                    //@synthesize isForegroundApplication=_isForegroundApplication - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)suppressionApplicationRegistry;
-(void)assertionOfType:(unsigned long long)arg1 withIdentifier:(id)arg2 isValid:(/*^block*/id)arg3 ;
-(id)initWithConnection:(id)arg1 ;
-(id<PDAssertionCoordinatorDelegate>)delegate;
-(NSString *)bundleIdentifier;
-(void)processPendingAssertionRequests;
-(void)assertionRequestDidTimeout:(id)arg1 ;
-(BOOL)isForegroundApplication;
-(void)invalidateAllAssertions;
-(void)setDelegate:(id<PDAssertionCoordinatorDelegate>)arg1 ;
-(void)invalidateAssertionsForBackgroundApplicationState;
-(void)_acquireAssertion:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_acquireContactlessInterfaceSuppressionAssertion:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_processPendingAssertionRequests;
-(void)_cancelPendingAssertionRequest:(id)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)cancelPendingAssertionRequests;
-(void)invalidateAssertionOfType:(unsigned long long)arg1 withIdentifier:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_showAlertForContactlessInterfaceSuppression;
-(id)assertionsOfType:(unsigned long long)arg1 ;
-(void)acquireAssertionOfType:(unsigned long long)arg1 withIdentifier:(id)arg2 reason:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)_addRequestForAssertion:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)assertionOfType:(unsigned long long)arg1 withIdentifier:(id)arg2 shouldInvalidateWhenBackgrounded:(BOOL)arg3 ;
-(void)setIsForegroundApplication:(BOOL)arg1 ;
@end

