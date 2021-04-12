/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


#import <PhotosUICore/PhotosUICore-Structs.h>
@class PXMagazineGrid, PXMagazineRectArray, NSMutableArray;

@interface PXMagazineLayoutTileMaker : NSObject {

	PXMagazineGrid* _tileGrid;
	PXMagazineRectArray* _cachedTileRects;
	NSMutableArray* _allFrames;
	double _lastTileWidthPadding;
	double _maxFrameAspectRatio;
	double _minFrameAspectRatio;
	BOOL _startLastPadding;
	NSMutableArray* _sharedTempArray;
	double* _normalizedWeights;
	BOOL _layoutFromRightToLeft;
	unsigned long long _numberOfColumns;
	double _tileAspectRatio;
	double _height;
	double _interTileSpacing;
	unsigned long long _maxTilesInFrame;
	CGSize _referenceSize;
	CGSize _defaultTileSize;

}

@property (nonatomic,readonly) CGSize referenceSize;                            //@synthesize referenceSize=_referenceSize - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfColumns;              //@synthesize numberOfColumns=_numberOfColumns - In the implementation block
@property (nonatomic,readonly) double height;                                   //@synthesize height=_height - In the implementation block
@property (nonatomic,readonly) CGSize defaultTileSize;                          //@synthesize defaultTileSize=_defaultTileSize - In the implementation block
@property (nonatomic,readonly) double tileAspectRatio;                          //@synthesize tileAspectRatio=_tileAspectRatio - In the implementation block
@property (assign,nonatomic) double interTileSpacing;                           //@synthesize interTileSpacing=_interTileSpacing - In the implementation block
@property (assign,nonatomic) unsigned long long maxTilesInFrame;                //@synthesize maxTilesInFrame=_maxTilesInFrame - In the implementation block
@property (assign,nonatomic) BOOL layoutFromRightToLeft;                        //@synthesize layoutFromRightToLeft=_layoutFromRightToLeft - In the implementation block
+(void)printInputs:(id)arg1 ;
+(void)printPossibleFrames:(unsigned long long)arg1 cellAspectRatio:(double)arg2 maxAspectRatio:(double)arg3 minAspectRato:(double)arg4 ;
+(void)printLayout:(id)arg1 numOfColumns:(unsigned long long)arg2 ;
-(double)height;
-(double)tileAspectRatio;
-(CGSize)referenceSize;
-(unsigned long long)numberOfColumns;
-(id)description;
-(void)setInterTileSpacing:(double)arg1 ;
-(id)initWithReferenceSize:(CGSize)arg1 numberOfColumns:(unsigned long long)arg2 ;
-(double)_aspectRatioOfInput:(id)arg1 ;
-(unsigned long long)getMagazineRects:(PXMagazineRect*)arg1 withInputs:(id)arg2 ;
-(CGSize)defaultTileSize;
-(void)getFrames:(CGRect*)arg1 withInputs:(id)arg2 ;
-(void)_getFrames:(CGRect*)arg1 magazineRects:(PXMagazineRect*)arg2 withInputs:(id)arg3 ;
-(double*)_normalizeWeightsByInputs:(id)arg1 ;
-(void)_setRandomSeedWithInputs:(id)arg1 ;
-(void)_updateDimensionInfos;
-(void)_resetWithNumberOfAssets:(unsigned long long)arg1 ;
-(id)_generateTilesWithInputs:(id)arg1 ;
-(unsigned long long)_numberOfInputsForLastPadding;
-(void)_findNextChunkWithInputs:(id)arg1 fromIndex:(unsigned long long)arg2 outArray:(id)arg3 ;
-(BOOL)_generateTilesWithInputs:(id)arg1 atIndex:(unsigned long long)arg2 forMaxY:(unsigned long long)arg3 reserveNumberForPadding:(unsigned long long)arg4 outArray:(id)arg5 ;
-(id)_generateLastTilesWithInputs:(id)arg1 baseIndex:(unsigned long long)arg2 returnFallback:(BOOL)arg3 ;
-(CGRect)_frameFromTileFrame:(PXMagazineRect)arg1 ;
-(id)_getAllFramesInOrder;
-(BOOL)_findNextTileWithInputs:(id)arg1 atIndex:(unsigned long long)arg2 baseIndex:(unsigned long long)arg3 coordinator:(id)arg4 ;
-(long long)_availableFrames:(id*)arg1 maxReturnCount:(unsigned long long)arg2 forAspectRatio:(double)arg3 weight:(double)arg4 maxWidth:(unsigned long long)arg5 ;
-(BOOL)checkAndPrintResults:(BOOL)arg1 ;
-(unsigned long long)maxTilesInFrame;
-(void)setMaxTilesInFrame:(unsigned long long)arg1 ;
-(BOOL)layoutFromRightToLeft;
-(void)setLayoutFromRightToLeft:(BOOL)arg1 ;
-(double)interTileSpacing;
-(void)dealloc;
@end

