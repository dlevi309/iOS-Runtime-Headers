/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


@protocol OS_dispatch_queue;
#import <AVFoundation/AVFoundation-Structs.h>
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
-(void)dealloc;
-(NSData *)contentProtectionSessionIdentifier;
-(void)processContentKeyRequestWithIdentifier:(id)arg1 initializationData:(id)arg2 options:(id)arg3 ;
-(void)expire;
-(const OpaqueFigContentKeySessionRef)_figContentKeySession;
-(const OpaqueFigCPECryptorRef)createCryptorIfNecessaryForIdentifier:(id)arg1 initializationData:(id)arg2 formatDescription:(opaqueCMFormatDescriptionRef)arg3 hlsMethod:(id)arg4 error:(id*)arg5 ;
-(int)configureAppIdentifier:(id)arg1 ;
-(void)createProtectorSessionIdentifierIfNecessary;
-(BOOL)_setAuthorizationToken:(id)arg1 forIdentifier:(id)arg2 error:(id*)arg3 ;
-(id)initWithKeySystem:(id)arg1 keySession:(id)arg2 storageDirectoryAtURL:(id)arg3 ;
-(BOOL)hasProtector;
-(const OpaqueFigCPECryptorRef)copyCryptorForIdentifier:(id)arg1 initializationData:(id)arg2 ;
-(OpaqueFigCPECryptorRef)copyCryptorForCryptKeyAttributes:(id)arg1 ;
-(id)_contentKeySession;
-(void)failProcessingContentKeyRequestWithIdentifier:(id)arg1 initializationData:(id)arg2 error:(id)arg3 ;
-(id)_extractCryptKeyIdentifiersFromInitializationData:(id)arg1 ;
-(id)_processContentKeyRequestWithIdentifier:(id)arg1 initializationData:(id)arg2 options:(id)arg3 ;
-(id)cryptorOptionsForIdentifier:(id)arg1 initializationData:(id)arg2 formatDescription:(opaqueCMFormatDescriptionRef)arg3 hlsMethod:(id)arg4 ;
-(BOOL)associateContentKeyRequest:(id)arg1 ;
@end

