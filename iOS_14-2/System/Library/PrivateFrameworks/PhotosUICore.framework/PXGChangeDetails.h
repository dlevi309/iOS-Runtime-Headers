/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/PXGDiagnosticsProvider.h>

@class NSIndexSet, PXArrayChangeDetails, NSString;

@interface PXGChangeDetails : NSObject <NSCopying, PXGDiagnosticsProvider> {

	unsigned* _nextSpriteIndexByPreviousSpriteIndex;
	long long _nextSpriteIndexByPreviousSpriteIndexCapacity;
	NSIndexSet* _spriteIndexesThatWereRemoved;
	NSIndexSet* _spriteIndexesThatWereInserted;
	NSIndexSet* _spriteIndexesThatWereModified;
	BOOL _hasMoves;
	char* _tempBuffer;
	long long _tempBufferCapacity;
	PXArrayChangeDetails* _cachedArrayChangeDetails;
	unsigned _numberOfSpritesAfterChange;
	unsigned _numberOfSpritesBeforeChange;
	long long _layoutVersionBeforeChange;
	long long _layoutVersionAfterChange;

}

@property (nonatomic,readonly) unsigned numberOfSpritesAfterChange;                                          //@synthesize numberOfSpritesAfterChange=_numberOfSpritesAfterChange - In the implementation block
@property (nonatomic,readonly) unsigned numberOfSpritesBeforeChange;                                         //@synthesize numberOfSpritesBeforeChange=_numberOfSpritesBeforeChange - In the implementation block
@property (nonatomic,readonly) PXGChangeDetails * inverse; 
@property (nonatomic,readonly) BOOL hasAnyInsertionsRemovalsOrMoves; 
@property (nonatomic,readonly) NSIndexSet * removedSpriteIndexes; 
@property (nonatomic,readonly) NSIndexSet * insertedSpriteIndexes; 
@property (nonatomic,readonly) NSIndexSet * modifiedSpriteIndexes; 
@property (nonatomic,readonly) const unsigned* spriteIndexAfterChangeBySpriteIndexBeforeChange; 
@property (nonatomic,readonly) PXArrayChangeDetails * arrayChangeDetails; 
@property (assign,nonatomic) long long layoutVersionBeforeChange;                                            //@synthesize layoutVersionBeforeChange=_layoutVersionBeforeChange - In the implementation block
@property (assign,nonatomic) long long layoutVersionAfterChange;                                             //@synthesize layoutVersionAfterChange=_layoutVersionAfterChange - In the implementation block
@property (nonatomic,copy,readonly) NSString * diagnosticDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)increaseNumberOfSpritesBy:(unsigned)arg1 ;
-(long long)layoutVersionAfterChange;
-(NSIndexSet *)modifiedSpriteIndexes;
-(PXGChangeDetails *)inverse;
-(void)_resizeStorageIfNeeded;
-(void)configureWithNumberOfSpritesAfterChange:(unsigned)arg1 changeDetails:(id)arg2 ;
-(BOOL)hasAnyInsertionsRemovalsOrMoves;
-(void)applyToSpriteIndexes:(unsigned*)arg1 atIndexes:(id)arg2 ;
-(const unsigned*)spriteIndexAfterChangeBySpriteIndexBeforeChange;
-(NSString *)description;
-(NSString *)diagnosticDescription;
-(NSIndexSet *)removedSpriteIndexes;
-(void)applyToArray:(void*)arg1 elementSize:(unsigned long long)arg2 countAfterChanges:(unsigned long long)arg3 insertionHandler:(/*^block*/id)arg4 modifiedHandler:(/*^block*/id)arg5 ;
-(void)_invalidateCachedArrayChangeDetails;
-(PXGSpriteIndexRange)replaceRemovalsWithMovesToEndForIndexes:(id)arg1 ;
-(long long)layoutVersionBeforeChange;
-(PXArrayChangeDetails *)arrayChangeDetails;
-(id)indexSetAfterApplyingChangeDetails:(id)arg1 ;
-(void)setLayoutVersionBeforeChange:(long long)arg1 ;
-(void)applyToDictionary:(id)arg1 removalHandler:(/*^block*/id)arg2 ;
-(void)_invalidateLayoutVersions;
-(void)applySpriteTransferMap:(const unsigned*)arg1 ;
-(void)removeSpritesAtIndexes:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)numberOfSpritesAfterChange;
-(PXGSpriteIndexRange)splitIndexesIntoMovesToEndAndReinsertions:(id)arg1 ;
-(void)setLayoutVersionAfterChange:(long long)arg1 ;
-(unsigned)numberOfSpritesBeforeChange;
-(void)dealloc;
-(NSIndexSet *)insertedSpriteIndexes;
@end

