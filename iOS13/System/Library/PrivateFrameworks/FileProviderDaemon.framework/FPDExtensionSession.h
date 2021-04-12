/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
*/

#import <FileProviderDaemon/FileProviderDaemon-Structs.h>
#import <libobjc.A.dylib/FPDProcessMonitorDelegate.h>
#import <libobjc.A.dylib/FPDExtensionSessionProtocol.h>

@protocol OS_dispatch_queue;
@class NSExtension, NSObject, NSXPCConnection, NSUUID, NSCountedSet, NSMutableDictionary, NSHashTable, FPDExtension, FPDDomain, FPGracePeriodTimer, FPDProcessMonitor, BKSAssertion, NSString;

@interface FPDExtensionSession : NSObject <FPDProcessMonitorDelegate, FPDExtensionSessionProtocol> {

	NSExtension* _extension;
	NSObject*<OS_dispatch_queue> _sessionQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSXPCConnection* _connection;
	NSUUID* _requestIdentifier;
	NSCountedSet* _observingBundleIDs;
	NSMutableDictionary* _inflightProxies;
	NSHashTable* _lifetimeExtenders;
	FPDExtension* _fpdExtension;
	FPDDomain* _domain;
	FPGracePeriodTimer* _gracePeriodTimer;
	FPGracePeriodTimer* _networkingGracePeriodTimer;
	FPDProcessMonitor* _processMonitor;
	int _notifyTokenForFramework;
	BOOL _invalidated;
	BOOL _isForeground;
	int _pid;
	BKSAssertion* _foregroundAssertion;
	BKSAssertion* _backgroundAssertion;
	BOOL _hasFileProviderPresenceTCCAccess;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL hasFileProviderPresenceTCCAccess;              //@synthesize hasFileProviderPresenceTCCAccess=_hasFileProviderPresenceTCCAccess - In the implementation block
-(void)dealloc;
-(NSString *)description;
-(void)invalidate;
-(void)start;
-(void)dumpStateTo:(id)arg1 ;
-(id)newFileProviderProxyWithPID:(int)arg1 ;
-(id)newFileProviderProxyWithoutPID;
-(id)newFileProviderProxyWithoutPIDWithTimeout:(BOOL)arg1 ;
-(void)asyncUnregisterLifetimeExtensionForObject:(id)arg1 ;
-(void)registerLifetimeExtensionForObject:(id)arg1 ;
-(void)unregisterLifetimeExtensionForObject:(id)arg1 ;
-(id)newFileProviderProxyWithTimeout:(BOOL)arg1 pid:(int)arg2 ;
-(void)processMonitor:(id)arg1 didBecomeForeground:(BOOL)arg2 ;
-(id)initWithDomain:(id)arg1 extension:(id)arg2 queue:(id)arg3 ;
-(id)existingFileProviderProxyWithTimeout:(BOOL)arg1 pid:(int)arg2 ;
-(BOOL)hasFileProviderPresenceTCCAccess;
-(void)__invalidateWithCancellation:(BOOL)arg1 ;
-(void)_networkingGracePeriodOver;
-(BOOL)_setUpConnectionWithAttemptNumber:(long long)arg1 error:(id*)arg2 ;
-(void)_evaluateExtensionForegroundness;
-(void)_invalidateWithCancellation:(BOOL)arg1 ;
-(id)_alternateContentsDictionary;
-(void)updatePresenceTCCWithAuditToken:(SCD_Struct_FP2)arg1 ;
-(id)newFileProviderProxyWithTimeout:(BOOL)arg1 pid:(int)arg2 createIfNeeded:(BOOL)arg3 ;
-(id)_connectionWithError:(id*)arg1 ;
-(void)_invalidateExtensionIfPossible;
-(void)_unregisterLifetimeExtensionForObject:(id)arg1 ;
-(void)_notifyNetworkingProviderMonitorWithState:(BOOL)arg1 ;
-(id)newAssertionWithFlags:(unsigned)arg1 reason:(id)arg2 ;
-(id)newForegroundAssertion;
-(id)newBackgroundAssertion;
-(void)setHasFileProviderPresenceTCCAccess:(BOOL)arg1 ;
@end

