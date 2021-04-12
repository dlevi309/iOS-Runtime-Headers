/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVContentKeyRequestInternal, NSError, NSData, NSDictionary;

@interface AVContentKeyRequest : NSObject {

	AVContentKeyRequestInternal* _contentKeyRequest;

}

@property (readonly) long long status; 
@property (readonly) NSError * error; 
@property (readonly) id identifier; 
@property (nonatomic,readonly) NSData * initializationData; 
@property (copy,readonly) NSDictionary * options; 
@property (readonly) BOOL canProvidePersistableContentKey; 
+(void)_validateProtocolVersionList:(id)arg1 ;
+(void)_validateHLSEncryptionMethod:(id)arg1 ;
+(int)_prepareCryptor:(OpaqueFigCPECryptorRef)arg1 forRenewal:(BOOL)arg2 andReturnKeyRequestID:(unsigned long long*)arg3 ;
+(id)_ensureProtocolVersionList:(id)arg1 ;
+(void)_validateServerChallenge:(id)arg1 ;
+(id)_mergePreloadingRequestOptions:(id)arg1 withCreateKeyRequestOptions:(id)arg2 ;
+(id)_createKeyRequestDictionaryForApp:(id)arg1 persistentKey:(id)arg2 serverChallenge:(id)arg3 cryptorKeyRequestID:(unsigned long long)arg4 purpose:(int)arg5 ;
-(void)dealloc;
-(id)description;
-(NSDictionary *)options;
-(id)identifier;
-(NSError *)error;
-(void)_setError:(id)arg1 ;
-(long long)status;
-(void)_clearContext;
-(void)processContentKeyResponse:(id)arg1 ;
-(void)makeStreamingContentKeyRequestDataForApp:(id)arg1 contentIdentifier:(id)arg2 options:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)renewsExpiringResponseData;
-(void)processContentKeyResponseError:(id)arg1 ;
-(NSData *)initializationData;
-(id)contentKeyRequestDataForApp:(id)arg1 contentIdentifier:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(void)processContentKeyResponseData:(id)arg1 ;
-(OpaqueFigCPECryptorRef)figCryptor;
-(int)_extractAndStoreKeyIDFromInitializationData:(id)arg1 ;
-(id)_keySystem;
-(id)initWithContentKeySession:(id)arg1 reportGroup:(id)arg2 identifier:(id)arg3 initializationData:(id)arg4 preloadingRequestOptions:(id)arg5 providesPersistableKey:(BOOL)arg6 ;
-(void)_copyAndStoreCryptorUUID;
-(void)_setStatus:(long long)arg1 ;
-(void)_finishLoadingCustomURLRequestWithError:(id)arg1 ;
-(id)_getRetryReasonForError:(int)arg1 ;
-(OpaqueFigCPECryptorRef)_setCryptorWithFormatDescription:(opaqueCMFormatDescriptionRef)arg1 error:(id*)arg2 ;
-(void)processContentKeyResponseData:(id)arg1 renewalDate:(id)arg2 ;
-(void)_finishLoadingCustomURLRequestWithResponseData:(id)arg1 renewalDate:(id)arg2 ;
-(void)_handleKeyResponseError:(id)arg1 ;
-(BOOL)_canRespondByRequestingPersistableContentKeyRequest;
-(BOOL)respondByRequestingPersistableContentKeyRequestAndReturnError:(id*)arg1 ;
-(void)_sendResponseInfoToCustomURLHandlerWithRenewalDate:(id)arg1 ;
-(id)initWithContentKeySession:(id)arg1 reportGroup:(id)arg2 customURLHandler:(OpaqueFigCustomURLHandlerRef)arg3 identifier:(id)arg4 requestInfo:(CFDictionaryRef)arg5 requestID:(unsigned long long)arg6 providesPersistableKey:(BOOL)arg7 isRenewalRequest:(BOOL)arg8 ;
-(int)_prepareForKeyRenewal;
-(BOOL)canProvidePersistableContentKey;
-(void)_handleKeyResponseSuccess;
-(void)renewExpiringContentKeyResponseData;
-(void)respondByRequestingPersistableContentKeyRequest;
-(BOOL)setReportGroup:(id)arg1 ;
@end

