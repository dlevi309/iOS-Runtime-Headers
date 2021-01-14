/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <libobjc.A.dylib/NSFileAccessClientLocalArbiterInterface.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/NSXPCConnectionDelegate.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject, NSMutableDictionary, NSMutableSet, NSMapTable, NSString;

@interface NSFileAccessArbiterProxy : NSObject <NSFileAccessClientLocalArbiterInterface, NSXPCListenerDelegate, NSXPCConnectionDelegate> {

	NSXPCConnection* _server;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _presentersByID;
	NSMutableDictionary* _presenterMessengersByID;
	NSMutableSet* _providers;
	NSMapTable* _providerMessengersByID;
	BOOL _disableFileProviderReregistration;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_idForReactor:(id)arg1 ;
+(id)_willBeginOperationForReactor:(id)arg1 withDescription:(id)arg2 ;
+(id)_fileReactorDebuggingInformation;
+(void)_accessPresenterOperationRecordsUsingBlock:(/*^block*/id)arg1 ;
-(id)fileProviders;
-(oneway void)writerWithPurposeID:(id)arg1 didReconnectItemAtURL:(id)arg2 ;
-(void)performBarrier;
-(void)removeFilePresenter:(id)arg1 ;
-(id)_onqueue_filePresenters;
-(id)idForFileReactor:(id)arg1 ;
-(id)replacementObjectForXPCConnection:(id)arg1 encoder:(id)arg2 object:(id)arg3 ;
-(void)removeFileProvider:(id)arg1 ;
-(oneway void)writerWithPurposeID:(id)arg1 didMoveItemAtURL:(id)arg2 toURL:(id)arg3 ;
-(void)setAutomaticFileProviderReregistrationDisabled:(BOOL)arg1 ;
-(oneway void)cancelAccessClaimForID:(id)arg1 ;
-(oneway void)revokeSubarbitrationClaimForID:(id)arg1 ;
-(id)initWithServer:(id)arg1 queue:(id)arg2 ;
-(void)performBarrierAsync:(/*^block*/id)arg1 ;
-(oneway void)tiePresenterForID:(id)arg1 toItemAtURL:(id)arg2 ;
-(id)grantAccessClaim:(id)arg1 synchronouslyIfPossible:(BOOL)arg2 ;
-(oneway void)writerWithPurposeID:(id)arg1 didMakeItemDisappearAtURL:(id)arg2 ;
-(void)grantSubarbitrationClaim:(id)arg1 withServer:(id)arg2 ;
-(oneway void)writerWithPurposeID:(id)arg1 didDisconnectItemAtURL:(id)arg2 ;
-(id)filePresenters;
-(BOOL)itemHasPresentersAtURL:(id)arg1 ;
-(void)handleCanceledServer;
-(oneway void)revokeAccessClaimForID:(id)arg1 ;
-(id)_onqueue_fileProviders;
-(void)addFileProvider:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(oneway void)writerWithPurposeID:(id)arg1 didChangeUbiquityOfItemAtURL:(id)arg2 ;
-(oneway void)writerWithPurposeID:(id)arg1 didVersionChangeOfKind:(id)arg2 toItemAtURL:(id)arg3 withClientID:(id)arg4 name:(id)arg5 ;
-(void)addFilePresenter:(id)arg1 ;
-(oneway void)writerWithPurposeID:(id)arg1 didChangeSharingOfItemAtURL:(id)arg2 ;
-(void)dealloc;
-(oneway void)writerWithPurposeID:(id)arg1 didChangeItemAtURL:(id)arg2 ;
-(void)getDebugInfoWithCompletionHandler:(/*^block*/id)arg1 ;
-(oneway void)writerWithPurposeID:(id)arg1 didChangeUbiquityAttributes:(id)arg2 ofItemAtURL:(id)arg3 ;
@end

