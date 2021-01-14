/*
* Generated on Thursday, January 14, 2021 at 2:22:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

@class NSIndexSet;


@protocol PXGSpriteTexture <NSObject>
@property (nonatomic,readonly) unsigned spriteCount; 
@property (nonatomic,readonly) NSIndexSet * spriteIndexes; 
@property (nonatomic,readonly) long long estimatedByteSize; 
@property (nonatomic,readonly) int presentationType; 
@property (nonatomic,readonly) CGImageRef imageRepresentation; 
@property (nonatomic,readonly) CGSize pixelSize; 
@property (nonatomic,readonly) BOOL isOpaque; 
@required
-(BOOL)isOpaque;
-(CGImageRef)imageRepresentation;
-(unsigned)spriteCount;
-(long long)estimatedByteSize;
-(BOOL)containsSpriteIndex:(unsigned)arg1;
-(NSIndexSet *)spriteIndexes;
-(int)presentationType;
-(void)getSpriteIndexes:(unsigned*)arg1 maxSpriteCount:(unsigned)arg2;
-(void)enumerateSpriteIndexes:(/*^block*/id)arg1;
-(CGSize)pixelSize;

@end

