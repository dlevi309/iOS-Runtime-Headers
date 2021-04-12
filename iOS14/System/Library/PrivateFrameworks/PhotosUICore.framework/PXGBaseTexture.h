/*
* Generated on Thursday, January 14, 2021 at 2:22:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXGSpriteTexture.h>
#import <libobjc.A.dylib/PXGMutableSpriteTexture.h>

@protocol OS_dispatch_queue;
@class NSIndexSet, NSMutableIndexSet, NSObject, NSString;

@interface PXGBaseTexture : NSObject <PXGSpriteTexture, PXGMutableSpriteTexture> {

	NSMutableIndexSet* _spriteIndexes;
	NSObject*<OS_dispatch_queue> _syncQueue;
	SCD_Struct_PX113* _syncQueue_pendingImageRequestInfo;
	unsigned long long _syncQueue_pendingImageRequestInfoCount;
	unsigned long long _syncQueue_pendingImageRequestInfoCapacity;

}

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
-(void)processPendingTextureRequestIDsWithHandler:(/*^block*/id)arg1 ;
-(BOOL)isOpaque;
-(void)addSpriteWithTextureRequestID:(int)arg1 deliveryOrder:(unsigned)arg2 ;
-(id)init;
-(CGImageRef)imageRepresentation;
-(unsigned)spriteCount;
-(long long)estimatedByteSize;
-(void)applyChangeDetails:(id)arg1 ;
-(BOOL)containsSpriteIndex:(unsigned)arg1 ;
-(void)removeSpriteIndex:(unsigned)arg1 ;
-(NSString *)description;
-(NSIndexSet *)spriteIndexes;
-(void)_addSpriteIndex:(unsigned)arg1 ;
-(void)addSpriteIndexRange:(NSRange)arg1 ;
-(void)removeAllSpriteIndexes;
-(int)presentationType;
-(void)getSpriteIndexes:(unsigned*)arg1 maxSpriteCount:(unsigned)arg2 ;
-(void)_syncQueue_resizeStorageIfNeeded;
-(void)enumerateSpriteIndexes:(/*^block*/id)arg1 ;
-(CGSize)pixelSize;
-(void)dealloc;
@end

