/*
* Generated on Thursday, January 14, 2021 at 2:22:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXGImageTexture.h>
#import <libobjc.A.dylib/PXGMetalSpriteTexture.h>

@protocol MTLDevice, OS_dispatch_queue, MTLTexture, PXGMetalTextureAtlasDelegate;
@class NSObject, NSMutableIndexSet, NSIndexSet, NSMutableDictionary, PXGColorProgram, NSString;

@interface PXGMetalTextureAtlas : PXGImageTexture <PXGMetalSpriteTexture> {

	id<MTLDevice> _device;
	NSObject*<OS_dispatch_queue> _syncQueue;
	long long _cols;
	unsigned long long _bytesPerPixel;
	NSMutableIndexSet* _thumbnailIndexesUsedBySprites;
	NSMutableIndexSet* _spriteIndexesUsedBySprites;
	unsigned* _spriteIndexByThumbnailIndex;
	NSIndexSet* _renderedSpriteIndexes;
	As _count;
	NSMutableIndexSet* _thumbnailIndexesPendingCheckin;
	NSMutableIndexSet* _thumbnailIndexesBeingCheckedIn;
	AC _isPerformingThumbnailCheckin;
	char* _retainCountByThumbnailIndex;
	{?=}* _guarded_textureInfoByThumbnailIndex;
	NSMutableIndexSet* _syncQueue_availableThumbnailIndexes;
	NSMutableDictionary* _syncQueue_thumbnailsInUseByRenderPass;
	SCD_Struct_PX111* _syncQueue_pendingThumbnailRequestInfo;
	unsigned long long _syncQueue_pendingThumbnailRequestInfoCount;
	unsigned long long _syncQueue_pendingThumbnailRequestInfoCapacity;
	unsigned _capacity;
	id<MTLTexture> _texture;
	PXGColorProgram* _colorProgram;
	long long _renderPipelineIndex;
	NSIndexSet* _skipRenderSpriteIndexes;
	unsigned long long _pixelFormat;
	id<PXGMetalTextureAtlasDelegate> _delegate;
	CGSize _thumbnailSize;

}

@property (nonatomic,copy,readonly) NSIndexSet * thumbnailIndexesUsedBySprites; 
@property (nonatomic,readonly) NSIndexSet * renderedSpriteIndexes; 
@property (assign,nonatomic,__weak) id<PXGMetalTextureAtlasDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (readonly) BOOL isUnused; 
@property (nonatomic,readonly) unsigned long long pixelFormat;                               //@synthesize pixelFormat=_pixelFormat - In the implementation block
@property (nonatomic,readonly) CGSize thumbnailSize;                                         //@synthesize thumbnailSize=_thumbnailSize - In the implementation block
@property (nonatomic,readonly) unsigned capacity;                                            //@synthesize capacity=_capacity - In the implementation block
@property (nonatomic,readonly) unsigned count; 
@property (nonatomic,retain) NSIndexSet * skipRenderSpriteIndexes;                           //@synthesize skipRenderSpriteIndexes=_skipRenderSpriteIndexes - In the implementation block
@property (nonatomic,readonly) id<MTLTexture> texture;                                       //@synthesize texture=_texture - In the implementation block
@property (nonatomic,readonly) id<MTLTexture> chromaTexture; 
@property (nonatomic,readonly) PXGColorProgram * colorProgram;                               //@synthesize colorProgram=_colorProgram - In the implementation block
@property (assign,nonatomic) long long renderPipelineIndex;                                  //@synthesize renderPipelineIndex=_renderPipelineIndex - In the implementation block
@property (nonatomic,readonly) BOOL isAtlas; 
@property (nonatomic,readonly) BOOL isCaptureTexture; 
@property (nonatomic,readonly) int shaderFlags; 
@property (nonatomic,readonly) unsigned spriteCount; 
@property (nonatomic,readonly) NSIndexSet * spriteIndexes; 
@property (nonatomic,readonly) long long estimatedByteSize; 
@property (nonatomic,readonly) int presentationType; 
@property (nonatomic,readonly) CGImageRef imageRepresentation; 
@property (nonatomic,readonly) CGSize pixelSize; 
@property (nonatomic,readonly) BOOL isOpaque; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned)maxCapacityForThumbnailSize:(CGSize)arg1 pixelFormat:(unsigned long long)arg2 ;
-(long long)renderPipelineIndex;
-(void)prepareForRender:(long long)arg1 ;
-(id<MTLTexture>)texture;
-(void)cleanupAfterRender:(long long)arg1 ;
-(void)processPendingTextureRequestIDsWithHandler:(/*^block*/id)arg1 ;
-(void)getTextureInfos:({?=}*)arg1 forSpriteIndexes:(unsigned*)arg2 geometries:(const SCD_Struct_PX106*)arg3 spriteStyles:(const SCD_Struct_PX83*)arg4 spriteInfos:(const SCD_Struct_PX15*)arg5 screenScale:(double)arg6 count:(unsigned)arg7 ;
-(PXGColorProgram *)colorProgram;
-(NSIndexSet *)thumbnailIndexesUsedBySprites;
-(BOOL)isOpaque;
-(void)addSpriteWithTextureRequestID:(int)arg1 deliveryOrder:(unsigned)arg2 ;
-(id)init;
-(CGImageRef)imageRepresentation;
-(id<PXGMetalTextureAtlasDelegate>)delegate;
-(unsigned)spriteCount;
-(unsigned)capacity;
-(unsigned long long)pixelFormat;
-(BOOL)isUnused;
-(long long)estimatedByteSize;
-(NSIndexSet *)renderedSpriteIndexes;
-(void)setSkipRenderSpriteIndexes:(NSIndexSet *)arg1 ;
-(void)_syncQueue_checkinThumbnailIndex:(unsigned)arg1 ;
-(NSIndexSet *)skipRenderSpriteIndexes;
-(void)applyChangeDetails:(id)arg1 ;
-(BOOL)containsSpriteIndex:(unsigned)arg1 ;
-(unsigned)count;
-(CGSize)thumbnailSize;
-(void)removeSpriteIndex:(unsigned)arg1 ;
-(id)initWithThumbnailSize:(CGSize)arg1 pixelFormat:(unsigned long long)arg2 capacity:(unsigned)arg3 colorProgram:(id)arg4 device:(id)arg5 ;
-(void)setDelegate:(id<PXGMetalTextureAtlasDelegate>)arg1 ;
-(id<MTLTexture>)chromaTexture;
-(void)setRenderPipelineIndex:(long long)arg1 ;
-(NSString *)description;
-(NSIndexSet *)spriteIndexes;
-(int)presentationType;
-(void)getSpriteIndexes:(unsigned*)arg1 maxSpriteCount:(unsigned)arg2 ;
-(BOOL)isAtlas;
-(BOOL)isCaptureTexture;
-(void)_checkinPendingThumbnailIndexesIfNeeded;
-(void)_syncQueue_resizeStorageIfNeeded;
-(void)_invalidateRenderedSpriteIndexes;
-(void)_syncQueue_retainThumbnailsAtIndexes:(id)arg1 ;
-(int)shaderFlags;
-(void)removeSpriteIndex:(unsigned)arg1 atThumbnailIndex:(unsigned)arg2 ;
-(void)_syncQueue_releaseThumbnailAtIndex:(long long)arg1 ;
-(void)processPendingThumbnailRequestIDsWithHandler:(/*^block*/id)arg1 ;
-(void)_syncQueue_retainThumbnailAtIndex:(long long)arg1 ;
-(CGSize)pixelSize;
-(unsigned)addSpriteWithTextureRequestID:(int)arg1 thumbnailData:(id)arg2 bytesPerRow:(unsigned long long)arg3 contentsRect:(CGRect)arg4 ;
-(unsigned)_syncQueue_checkoutNextThumbnailIndex;
-(void)dealloc;
-(void)_syncQueue_releaseThumbnailsAtIndexes:(id)arg1 ;
@end

