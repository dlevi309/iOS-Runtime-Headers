/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVContentKeySessionInternal, AVContentKeyReportGroup, NSURL, NSString, NSData;

@interface AVContentKeySession : NSObject {

	AVContentKeySessionInternal* _session;

}

@property (getter=isInternal,nonatomic,readonly) BOOL internal; 
@property (readonly) AVContentKeyReportGroup * defaultContentKeyGroup; 
@property (__weak,readonly) id<AVContentKeySessionDelegate> delegate; 
@property (readonly) NSObject*<OS_dispatch_queue> delegateQueue; 
@property (readonly) NSURL * storageURL; 
@property (readonly) NSString * keySystem; 
@property (readonly) NSData * contentProtectionSessionIdentifier; 
+(void)initialize;
+(id)contentKeySessionWithKeySystem:(id)arg1 ;
+(id)contentKeySessionWithKeySystem:(id)arg1 storageDirectoryAtURL:(id)arg2 ;
+(id)pendingExpiredSessionReportsWithAppIdentifier:(id)arg1 storageDirectoryAtURL:(id)arg2 ;
+(void)removePendingExpiredSessionReports:(id)arg1 withAppIdentifier:(id)arg2 storageDirectoryAtURL:(id)arg3 ;
+(OpaqueFigSecureStopManagerRef)copyDefaultSecureStopManagerForAppIdentifier:(id)arg1 storageDirectoryAtURL:(id)arg2 ;
+(id)_uniqueIDForCyptorUUID:(id)arg1 cryptorKeyRequestID:(unsigned long long)arg2 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(id<AVContentKeySessionDelegate>)delegate;
-(void)setDelegate:(id<AVContentKeySessionDelegate>)arg1 ;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(id)_internalQueue;
-(BOOL)isInternal;
-(int)setAppIdentifier:(id)arg1 ;
-(NSData *)contentProtectionSessionIdentifier;
-(void)processContentKeyRequestWithIdentifier:(id)arg1 initializationData:(id)arg2 options:(id)arg3 ;
-(void)renewExpiringResponseDataForContentKeyRequest:(id)arg1 ;
-(void)expire;
-(id)makeContentKeyGroup;
-(void)addContentKeyRecipient:(id)arg1 ;
-(void)removeContentKeyRecipient:(id)arg1 ;
-(id)initWithStorageDirectoryAtURL:(id)arg1 ;
-(id)_weakReference;
-(id)_contentKeyGroups;
-(int)createAndInstallCustomURLHandlerForAsset:(id)arg1 outHandler:(OpaqueFigCustomURLHandler*)arg2 ;
-(void)_willDeallocOrFinalize;
-(NSString *)keySystem;
-(void)_invokeDelegateCallbackWithBlock:(/*^block*/id)arg1 synchronouslyWhenDelegateQueueIsNULL:(BOOL)arg2 ;
-(void)_setContentKeyRequest:(id)arg1 forCryptorUUID:(id)arg2 cryptorKeyRequestID:(unsigned long long)arg3 ;
-(BOOL)clientCanReceivePersistableContentKeyRequest;
-(void)issueContentKeyRequestWithCustomURLHandler:(OpaqueFigCustomURLHandlerRef)arg1 identifier:(id)arg2 requestInfo:(CFDictionaryRef)arg3 requestID:(unsigned long long)arg4 providesPersistableKey:(BOOL)arg5 ;
-(void)issueContentKeyRequestWithPreloadingRequestOptions:(id)arg1 identifier:(id)arg2 initializationData:(id)arg3 providesPersistableKey:(BOOL)arg4 ;
-(id)initWithKeySystem:(id)arg1 storageDirectoryAtURL:(id)arg2 ;
-(NSURL *)storageURL;
-(id)contentKeyRecipients;
-(void)makeSecureTokenForExpirationDateOfPersistableContentKey:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)invalidatePersistableContentKey:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)invalidateAllPersistableContentKeysForApp:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_handleSecureStopDidFinalizeRecordCallback;
-(id)_contentKeyRequestForCryptorUUID:(id)arg1 cryptorKeyRequestID:(unsigned long long)arg2 ;
-(void)_removeContentKeyRequestForCryptorUUID:(id)arg1 cryptorKeyRequestID:(unsigned long long)arg2 ;
-(void)_handleKeyResponseError:(id)arg1 forCryptorUUID:(id)arg2 andCryptorKeyRequestID:(unsigned long long)arg3 ;
-(void)_handleKeyResponseSuccessfullyProcessedForCryptorUUID:(id)arg1 andCryptorKeyRequestID:(unsigned long long)arg2 ;
-(void)_handleUpdateToPersistentKey:(id)arg1 forKeyIdentifier:(id)arg2 ;
-(void)_handleContentProtectionSessionIdentifierDidChange:(id)arg1 ;
-(void)issueContentKeyRequests:(id)arg1 forInitializationData:(id)arg2 ;
-(void)issueContentKeyRequest:(id)arg1 toDelegateWithCallbackSelector:(SEL)arg2 ;
-(void)issuePersistableContentKeyRequest:(id)arg1 ;
-(void)issueRenewableContentKeyRequest:(id)arg1 ;
-(void)issueContentKeyRequest:(id)arg1 ;
-(BOOL)hasProtector;
-(const OpaqueFigCPECryptorRef)copyCryptorForInitializationData:(id)arg1 ;
-(OpaqueFigCPECryptorRef)copyCryptorForCryptKeyAttributes:(id)arg1 ;
-(void)_sendFinishLoadingForPreloadedKeyRequest:(CFDictionaryRef)arg1 withRequestID:(unsigned long long)arg2 fromHandler:(OpaqueFigCustomURLHandlerRef)arg3 ;
-(id)initWithKeySystem:(id)arg1 storageDirectoryAtURL:(id)arg2 internal:(BOOL)arg3 ;
-(id)issueContentKeyRequestForInitializationData:(id)arg1 ;
-(OpaqueFigCPECryptorRef)createCryptorIfNecessaryForInitializationData:(id)arg1 formatDescription:(opaqueCMFormatDescriptionRef)arg2 error:(id*)arg3 ;
-(void)_handleRequest:(CFDictionaryRef)arg1 withRequestID:(unsigned long long)arg2 fromHandler:(OpaqueFigCustomURLHandlerRef)arg3 willHandleRequest:(BOOL*)arg4 ;
-(AVContentKeyReportGroup *)defaultContentKeyGroup;
@end

