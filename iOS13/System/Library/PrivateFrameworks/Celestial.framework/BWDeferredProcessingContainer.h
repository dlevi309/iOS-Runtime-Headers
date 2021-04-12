/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWDeferredContainerBase.h>

@class BWPhotoManifest;

@interface BWDeferredProcessingContainer : BWDeferredContainerBase {

	unsigned long long _sizeBytes;
	unsigned _ageSeconds;
	BOOL _isRemote;
	BWPhotoManifest* _photoManifest;

}

@property (nonatomic,readonly) unsigned ageSeconds;                          //@synthesize ageSeconds=_ageSeconds - In the implementation block
@property (nonatomic,readonly) unsigned long long sizeBytes;                 //@synthesize sizeBytes=_sizeBytes - In the implementation block
@property (nonatomic,readonly) BOOL isRemote;                                //@synthesize isRemote=_isRemote - In the implementation block
@property (nonatomic,readonly) BWPhotoManifest * photoManifest; 
+(int)verifyManifestURLSize:(id)arg1 ;
+(int)verifyPhotos:(id)arg1 ;
-(void)dealloc;
-(BOOL)isRemote;
-(BWPhotoManifest *)photoManifest;
-(id)dictionaryForTag:(id)arg1 err:(int*)arg2 ;
-(CVBufferRef)bufferForType:(unsigned long long)arg1 portType:(id)arg2 metadata:(id*)arg3 err:(int*)arg4 ;
-(BOOL)hasBufferForType:(unsigned long long)arg1 portType:(id)arg2 ;
-(id)arrayForTag:(id)arg1 classes:(id)arg2 err:(int*)arg3 ;
-(int)_buildFolderStatistics;
-(int)_buildRemoteStatistics;
-(int)_createCVPixelBufferFromAttributes:(id)arg1 pixelBuffer:(_CVBuffer*)arg2 ;
-(CVBufferRef)_bufferForURL:(id)arg1 attributesIndex:(unsigned)arg2 err:(int*)arg3 ;
-(id)metadataForTag:(id)arg1 err:(int*)arg2 ;
-(id)_intermediateForTag:(id)arg1 type:(int)arg2 classes:(id)arg3 err:(int*)arg4 ;
-(CVBufferRef)bufferForTag:(id)arg1 err:(int*)arg2 ;
-(id)initWithApplicationID:(id)arg1 captureRequestIdentifier:(id)arg2 baseFolder:(id)arg3 err:(int*)arg4 ;
-(id)initWithXPCEncoding:(id)arg1 applicationID:(id)arg2 captureRequestIdentifier:(id)arg3 baseFolder:(id)arg4 err:(int*)arg5 ;
-(unsigned long long)bufferTypeForTag:(id)arg1 err:(int*)arg2 ;
-(id)metadataForBufferTag:(id)arg1 err:(int*)arg2 ;
-(id)bufferAttributesForType:(unsigned long long)arg1 portType:(id)arg2 err:(int*)arg3 ;
-(unsigned long long)sizeBytes;
-(unsigned)ageSeconds;
@end

