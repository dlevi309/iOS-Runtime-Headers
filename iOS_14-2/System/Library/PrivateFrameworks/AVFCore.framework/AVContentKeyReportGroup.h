/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


@protocol OS_dispatch_queue;
#import <AVFCore/AVFCore-Structs.h>
@class AVWeakReference, NSData, NSMutableArray, NSObject, NSString;

@interface AVContentKeyReportGroup : NSObject {

	AVWeakReference* _contentKeySessionWeakReference;
	OpaqueFigContentKeySessionRef _figContentKeySession;
	NSData* _protectorSessionIdentifier;
	NSMutableArray* _cryptorsList;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSString* _keySystem;
	BOOL _isExpired;

}

@property (readonly) NSData * contentProtectionSessionIdentifier; 
-(id)initWithKeySystem:(id)arg1 keySession:(id)arg2 storageDirectoryAtURL:(id)arg3 ;
-(id)cryptorOptionsForIdentifier:(id)arg1 initializationData:(id)arg2 formatDescription:(opaqueCMFormatDescriptionRef)arg3 hlsMethod:(id)arg4 ;
-(BOOL)willOutputBeObscuredDueToInsufficientExternalProtectionForDisplays:(id)arg1 forCryptor:(OpaqueFigCPECryptorRef)arg2 ;
-(OpaqueFigCPECryptorRef)copyCryptorForCryptKeyAttributes:(id)arg1 ;
-(void)failProcessingContentKeyRequestWithIdentifier:(id)arg1 initializationData:(id)arg2 error:(id)arg3 ;
-(id)_extractCryptKeyIdentifiersFromInitializationData:(id)arg1 ;
-(void)processContentKeyRequestWithIdentifier:(id)arg1 initializationData:(id)arg2 options:(id)arg3 ;
-(const OpaqueFigContentKeySessionRef)_figContentKeySession;
-(const OpaqueFigCPECryptorRef)createCryptorIfNecessaryForIdentifier:(id)arg1 initializationData:(id)arg2 formatDescription:(opaqueCMFormatDescriptionRef)arg3 hlsMethod:(id)arg4 error:(id*)arg5 ;
-(int)configureAppIdentifier:(id)arg1 ;
-(const OpaqueFigCPECryptorRef)copyCryptorForIdentifier:(id)arg1 initializationData:(id)arg2 ;
-(void)createProtectorSessionIdentifierIfNecessary;
-(BOOL)hasProtector;
-(BOOL)associateContentKeyRequest:(id)arg1 ;
-(BOOL)_setAuthorizationToken:(id)arg1 forIdentifier:(id)arg2 error:(id*)arg3 ;
-(NSData *)contentProtectionSessionIdentifier;
-(id)_contentKeySession;
-(id)_processContentKeyRequestWithIdentifier:(id)arg1 initializationData:(id)arg2 options:(id)arg3 ;
-(void)dealloc;
-(void)expire;
@end

