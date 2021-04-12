/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVContentKeySessionDelegate.h>
#import <AVFoundation/AVContentKeyRecipient.h>

@class AVStreamDataParserInternal, NSString, NSData, NSError, AVAsset;

@interface AVStreamDataParser : NSObject <AVContentKeySessionDelegate, AVContentKeyRecipient> {

	AVStreamDataParserInternal* _parser;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSData * contentProtectionSessionIdentifier; 
@property (nonatomic,readonly) BOOL mayRequireContentKeysForMediaDataProcessing; 
@property (nonatomic,readonly) id<AVStreamDataParserOutputHandling> delegate; 
@property (readonly) long long status; 
@property (readonly) long long status2; 
@property (readonly) NSError * error; 
@property (nonatomic,readonly) AVAsset * asset; 
+(id)audiovisualMIMETypes;
+(id)outputMIMECodecParameterForInputMIMECodecParameter:(id)arg1 ;
+(BOOL)canParseExtendedMIMEType:(id)arg1 ;
+(OpaqueCMBlockBufferRef)_createBlockBufferUsingNSData:(id)arg1 withOffset:(unsigned long long)arg2 withLength:(unsigned long long)arg3 ;
+(OpaqueCMBlockBufferRef)_createBlockBufferUsingNSData:(id)arg1 ;
+(id)_createNSDataWithBlockBuffer:(OpaqueCMBlockBufferRef)arg1 ;
-(id)init;
-(void)dealloc;
-(id<AVStreamDataParserOutputHandling>)delegate;
-(void)setDelegate:(id<AVStreamDataParserOutputHandling>)arg1 ;
-(NSError *)error;
-(void)_setError:(id)arg1 ;
-(long long)status;
-(void)setSession:(id)arg1 ;
-(void)setStatus:(long long)arg1 ;
-(AVAsset *)asset;
-(NSData *)contentProtectionSessionIdentifier;
-(void)contentKeySession:(id)arg1 didProvideContentKeyRequest:(id)arg2 ;
-(void)contentKeySessionContentProtectionSessionIdentifierDidChange:(id)arg1 ;
-(void)expire;
-(void)setShouldProvideMediaData:(BOOL)arg1 forTrackID:(int)arg2 ;
-(void)appendStreamData:(id)arg1 withFlags:(unsigned long long)arg2 ;
-(void)appendStreamData:(id)arg1 ;
-(BOOL)mayRequireContentKeysForMediaDataProcessing;
-(int)_attachToContentKeySession:(id)arg1 failedSinceAlreadyAttachedToAnotherSession:(BOOL*)arg2 ;
-(id)contentKeySession;
-(BOOL)_attachedToExternalContentKeySession;
-(void)_willDeallocOrFinalize;
-(BOOL)hasProtector;
-(int)_unregisterForFigManifoldCallbacksForTrackID:(int)arg1 ;
-(long long)status2;
-(int)_createFigManifoldWithBlockBuffer:(OpaqueCMBlockBufferRef)arg1 manifold:(OpaqueFigManifold*)arg2 ;
-(void)providePendingMediaData;
-(void)_appendStreamData:(OpaqueCMBlockBufferRef)arg1 withFlags:(unsigned long long)arg2 ;
-(int)_figManifold:(OpaqueFigManifoldRef)arg1 pushedSampleBuffer:(opaqueCMSampleBufferRef)arg2 trackID:(int)arg3 flags:(unsigned)arg4 ;
-(BOOL)shouldProvideMediaDataForTrackID:(int)arg1 ;
-(void)_createAssetIfNecessary;
-(int)_registerForFigManifoldCallbacksForTrackID:(int)arg1 ;
-(int)_figManifold:(OpaqueFigManifoldRef)arg1 trackDidEnd:(int)arg2 ;
-(int)_figManifold:(OpaqueFigManifoldRef)arg1 formatDescription:(opaqueCMFormatDescriptionRef)arg2 orDecryptorDidChange:(void*)arg3 forTrackID:(int)arg4 ;
-(void)_figManifoldAllNewTracksReady:(OpaqueFigManifoldRef)arg1 ;
-(int)_figManifold:(OpaqueFigManifoldRef)arg1 discoveredNewTrackID:(int)arg2 mediaType:(id)arg3 ;
-(void)contentKeySession:(id)arg1 didProvideContentKeyRenewalRequest:(id)arg2 ;
-(void)processContentKeyResponseData:(id)arg1 forTrackID:(int)arg2 ;
-(void)processContentKeyResponseError:(id)arg1 forTrackID:(int)arg2 ;
-(void)renewExpiringContentKeyResponseDataForTrackID:(int)arg1 ;
-(id)streamingContentKeyRequestDataForApp:(id)arg1 contentIdentifier:(id)arg2 trackID:(int)arg3 options:(id)arg4 error:(id*)arg5 ;
@end

