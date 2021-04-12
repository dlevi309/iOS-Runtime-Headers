/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/SBSStatusBarStyleOverridesAssertionClient.h>

@protocol OS_dispatch_queue;
@class NSMapTable, NSMutableDictionary, NSXPCConnection, NSObject, SBSStatusBarStyleOverridesCoordinator, NSString;

@interface SBSStatusBarStyleOverridesAssertionManager : NSObject <BSDescriptionProviding, SBSStatusBarStyleOverridesAssertionClient> {

	NSMapTable* _assertionsByIdentifier;
	NSMutableDictionary* _acquisitionHandlerEntriesByIdentifier;
	NSXPCConnection* _sbXPCConnection;
	NSObject*<OS_dispatch_queue> _internalQueue;
	SBSStatusBarStyleOverridesCoordinator* _internalQueue_styleOverrideCoordinator;
	NSObject*<OS_dispatch_queue> _coordinatorCalloutQueue;

}

@property (nonatomic,retain) NSMapTable * assertionsByIdentifier;                                                                //@synthesize assertionsByIdentifier=_assertionsByIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * acquisitionHandlerEntriesByIdentifier;                                        //@synthesize acquisitionHandlerEntriesByIdentifier=_acquisitionHandlerEntriesByIdentifier - In the implementation block
@property (nonatomic,retain) NSXPCConnection * sbXPCConnection;                                                                  //@synthesize sbXPCConnection=_sbXPCConnection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> internalQueue;                                                         //@synthesize internalQueue=_internalQueue - In the implementation block
@property (assign,nonatomic,__weak) SBSStatusBarStyleOverridesCoordinator * internalQueue_styleOverrideCoordinator;              //@synthesize internalQueue_styleOverrideCoordinator=_internalQueue_styleOverrideCoordinator - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> coordinatorCalloutQueue;                                               //@synthesize coordinatorCalloutQueue=_coordinatorCalloutQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)setInternalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)succinctDescription;
-(void)updateRegistrationForCoordinator:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)init;
-(void)setInternalQueue_styleOverrideCoordinator:(SBSStatusBarStyleOverridesCoordinator *)arg1 ;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(void)statusBarTappedWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(SBSStatusBarStyleOverridesCoordinator *)internalQueue_styleOverrideCoordinator;
-(NSObject*<OS_dispatch_queue>)coordinatorCalloutQueue;
-(void)_handleXPCConnectionInvalidation;
-(void)_reactivateAssertions;
-(void)_registerStyleOverrideCoordinatorAfterInterruption;
-(NSMutableDictionary *)acquisitionHandlerEntriesByIdentifier;
-(void)_internalQueue_updateRegistrationForCoordinator:(id)arg1 reply:(/*^block*/id)arg2 ;
-(NSString *)description;
-(void)setAcquisitionHandlerEntriesByIdentifier:(NSMutableDictionary *)arg1 ;
-(NSXPCConnection *)sbXPCConnection;
-(void)setAssertionsByIdentifier:(NSMapTable *)arg1 ;
-(void)setCoordinatorCalloutQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSMapTable *)assertionsByIdentifier;
-(void)setSbXPCConnection:(NSXPCConnection *)arg1 ;
-(void)removeStatusBarStyleOverridesAssertion:(id)arg1 ;
-(void)invalidateStatusBarStyleOverridesAssertionsWithIdentifiers:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(void)_internalQueue_removeStatusBarStyleOverridesAssertionWithIdentifier:(id)arg1 invalidate:(BOOL)arg2 ;
-(id)succinctDescriptionBuilder;
-(void)addStatusBarStyleOverridesAssertion:(id)arg1 withHandler:(/*^block*/id)arg2 onQueue:(id)arg3 ;
-(void)_internalQueue_setupXPCConnectionIfNecessary;
-(void)updateStatusStringForAssertion:(id)arg1 ;
-(void)unregisterCoordinator;
@end

