/*
* Generated on Thursday, January 14, 2021 at 2:27:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)_setUpConnectionWithAttemptNumber:(long long)arg1 error:(id*)arg2 ;
-(id)_connectionWithError:(id*)arg1 ;
-(id)newBackgroundAssertion;
-(void)start;
-(void)_unregisterLifetimeExtensionForObject:(id)arg1 ;
-(id)_alternateContentsDictionary;
-(void)_notifyNetworkingProviderMonitorWithState:(BOOL)arg1 ;
-(void)registerLifetimeExtensionForObject:(id)arg1 ;
-(void)__invalidateWithCancellation:(BOOL)arg1 ;
-(void)updatePresenceTCCWithAuditToken:(SCD_Struct_FP0)arg1 ;
-(id)initWithDomain:(id)arg1 extension:(id)arg2 queue:(id)arg3 ;
-(id)newFileProviderProxyWithTimeout:(BOOL)arg1 pid:(int)arg2 createIfNeeded:(BOOL)arg3 ;
-(BOOL)hasFileProviderPresenceTCCAccess;
-(void)setHasFileProviderPresenceTCCAccess:(BOOL)arg1 ;
-(NSString *)description;
-(id)newFileProviderProxyWithPID:(int)arg1 ;
-(void)dumpStateTo:(id)arg1 ;
-(id)newAssertionWithFlags:(unsigned)arg1 reason:(id)arg2 ;
-(void)processMonitor:(id)arg1 didBecomeForeground:(BOOL)arg2 ;
-(id)newFileProviderProxyWithTimeout:(BOOL)arg1 pid:(int)arg2 ;
-(void)_evaluateExtensionForegroundness;
-(void)asyncUnregisterLifetimeExtensionForObject:(id)arg1 ;
-(void)_networkingGracePeriodOver;
-(id)newFileProviderProxyWithoutPID;
-(void)invalidate;
-(void)_invalidateWithCancellation:(BOOL)arg1 ;
-(BOOL)terminateExtensionWithRetry:(long long)arg1 error:(id*)arg2 ;
-(id)newFileProviderProxyWithoutPIDWithTimeout:(BOOL)arg1 ;
-(void)dealloc;
-(id)newForegroundAssertion;
-(id)existingFileProviderProxyWithTimeout:(BOOL)arg1 onlyAlreadyLifetimeExtended:(BOOL)arg2 pid:(int)arg3 ;
-(void)unregisterLifetimeExtensionForObject:(id)arg1 ;
-(void)_invalidateExtensionIfPossible;
@end

