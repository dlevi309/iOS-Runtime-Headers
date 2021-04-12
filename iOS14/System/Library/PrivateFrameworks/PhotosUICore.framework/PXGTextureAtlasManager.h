/*
* Generated on Thursday, January 14, 2021 at 2:22:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

@class NSIndexSet, NSArray;


@protocol PXGTextureAtlasManager <NSObject>
@property (assign,nonatomic,__weak) id<PXGTextureConverter> textureConverter; 
@property (assign,nonatomic,__weak) id<PXGTextureAtlasManagerDelegate> delegate; 
@property (nonatomic,readonly) CGSize thumbnailSize; 
@property (nonatomic,readonly) unsigned long long pixelFormat; 
@property (nonatomic,retain) NSIndexSet * skipRenderSpriteIndexes; 
@property (nonatomic,copy,readonly) NSArray * textures; 
@required
-(NSArray *)textures;
-(id<PXGTextureConverter>)textureConverter;
-(id<PXGTextureAtlasManagerDelegate>)delegate;
-(unsigned long long)pixelFormat;
-(void)setSkipRenderSpriteIndexes:(id)arg1;
-(NSIndexSet *)skipRenderSpriteIndexes;
-(void)applyChangeDetails:(id)arg1;
-(CGSize)thumbnailSize;
-(void)setDelegate:(id)arg1;
-(void)pruneUnusedTextures;
-(void)removeSpriteIndex:(unsigned)arg1 atThumbnailIndex:(unsigned)arg2;
-(void)processPendingThumbnailRequestIDsWithHandler:(/*^block*/id)arg1;
-(unsigned)addSpriteWithTextureRequestID:(int)arg1 thumbnailData:(id)arg2 bytesPerRow:(unsigned long long)arg3 contentsRect:(CGRect)arg4;
-(void)setTextureConverter:(id)arg1;

@end

