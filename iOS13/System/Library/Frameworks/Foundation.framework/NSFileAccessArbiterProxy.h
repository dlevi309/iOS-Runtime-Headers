/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <libobjc.A.dylib/NSFileAccessClientLocalArbiterInterface.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/NSXPCConnectionDelegate.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject, NSMutableDictionary, NSMutableSet, NSMapTable, NSMutableArray, NSString;

@interface NSFileAccessArbiterProxy : NSObject <NSFileAccessClientLocalArbiterInterface, NSXPCListenerDelegate, NSXPCConnectionDelegate> {

	NSXPCConnection* _server;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _presentersByID;
	NSMutableDictionary* _presenterMessengersByID;
	NSMutableSet* _providers;
	NSMapTable* _providerMessengersByID;
	NSMutableArray* _providerListeners;
	BOOL _disableFileProviderReregistration;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_idForReactor:(id)arg1 ;
+(id)_fetchProviderMessengerForListener:(id)arg1 ;
+(void)_setProviderMessenger:(id)arg1 forListener:(id)arg2 ;
+(id)_fileReactorDebuggingInformation;
+(void)_accessPresenterOperationRecordsUsingBlock:(/*^block*/id)arg1 ;
+(id)_willBeginOperationForReactor:(id)arg1 withDescription:(id)arg2 ;
-(void)dealloc;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(oneway void)revokeAccessClaimForID:(id)arg1 ;
-(oneway void)writerWithPurposeID:(id)arg1 didMoveItemAtURL:(id)arg2 toURL:(id)arg3 ;
-(oneway void)cancelAccessClaimForID:(id)arg1 ;
-(oneway void)tiePresenterForID:(id)arg1 toItemAtURL:(id)arg2 ;
-(oneway void)revokeSubarbitrationClaimForID:(id)arg1 ;
-(oneway void)writerWithPurposeID:(id)arg1 didDisconnectItemAtURL:(id)arg2 ;
-(oneway void)writerWithPurposeID:(id)arg1 didReconnectItemAtURL:(id)arg2 ;
-(oneway void)writerWithPurposeID:(id)arg1 didChangeUbiquityOfItemAtURL:(id)arg2 ;
-(oneway void)writerWithPurposeID:(id)arg1 didChangeSharingOfItemAtURL:(id)arg2 ;
-(oneway void)writerWithPurposeID:(id)arg1 didChangeUbiquityAttributes:(id)arg2 ofItemAtURL:(id)arg3 ;
-(oneway void)writerWithPurposeID:(id)arg1 didMakeItemDisappearAtURL:(id)arg2 ;
-(oneway void)writerWithPurposeID:(id)arg1 didChangeItemAtURL:(id)arg2 ;
-(oneway void)writerWithPurposeID:(id)arg1 didVersionChangeOfKind:(id)arg2 toItemAtURL:(id)arg3 withClientID:(id)arg4 name:(id)arg5 ;
-(id)grantAccessClaim:(id)arg1 synchronouslyIfPossible:(BOOL)arg2 ;
-(void)grantSubarbitrationClaim:(id)arg1 withServer:(id)arg2 ;
-(id)_onqueue_filePresenters;
-(void)addFilePresenter:(id)arg1 ;
-(id)_onqueue_fileProviders;
-(void)addFileProvider:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)performBarrierAsync:(/*^block*/id)arg1 ;
-(id)replacementObjectForXPCConnection:(id)arg1 encoder:(id)arg2 object:(id)arg3 ;
-(id)initWithServer:(id)arg1 queue:(id)arg2 ;
-(void)removeFilePresenter:(id)arg1 ;
-(id)filePresenters;
-(void)removeFileProvider:(id)arg1 ;
-(id)fileProviders;
-(id)idForFileReactor:(id)arg1 ;
-(void)getDebugInfoWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)itemHasPresentersAtURL:(id)arg1 ;
-(void)setAutomaticFileProviderReregistrationDisabled:(BOOL)arg1 ;
-(void)performBarrier;
-(void)handleCanceledServer;
@end

