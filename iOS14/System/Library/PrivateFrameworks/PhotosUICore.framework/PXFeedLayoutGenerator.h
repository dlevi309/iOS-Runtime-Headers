/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


#import <PhotosUICore/PhotosUICore-Structs.h>
@class PXFeedLayoutGeneratorScanState;

@interface PXFeedLayoutGenerator : NSObject {

	long long _cacheTailLocation;
	long long _cacheHeadLocation;
	PXTileInfo _cachedTileInfo[20];
	id _cachedBatchID[20];
	BOOL _scannedBatchHasCaption;
	BOOL _shouldStop;
	long long _tileCount;
	/*^block*/id _tileImageSizeBlock;
	/*^block*/id _tileMinimumSizeBlock;
	/*^block*/id _tileHasCaptionBlock;
	/*^block*/id _tileCaptionSizeBlock;
	/*^block*/id _tileHasLikesBlock;
	/*^block*/id _tileLikesSizeBlock;
	/*^block*/id _tileCommentCountBlock;
	/*^block*/id _tileCommentSizeBlock;
	/*^block*/id _tileBatchIDBlock;
	long long _numberOfMagneticGuidelines;
	double _roundingScale;
	/*^block*/id _parsedFrameBlock;
	long long _scanLocation;
	id _scannedBatchID;
	long long _scanSpecialSequenceCount;
	CGSize _interTileSpacing;
	CGSize _noCaptionSpacing;
	UIEdgeInsets _captionPadding;

}

@property (nonatomic,copy) id parsedFrameBlock;                                       //@synthesize parsedFrameBlock=_parsedFrameBlock - In the implementation block
@property (assign,nonatomic) PXFeedLayoutGeneratorScanState * scanState; 
@property (assign,nonatomic) long long scanLocation;                                  //@synthesize scanLocation=_scanLocation - In the implementation block
@property (nonatomic,retain) id scannedBatchID;                                       //@synthesize scannedBatchID=_scannedBatchID - In the implementation block
@property (assign,nonatomic) BOOL scannedBatchHasCaption;                             //@synthesize scannedBatchHasCaption=_scannedBatchHasCaption - In the implementation block
@property (assign,nonatomic) long long scanSpecialSequenceCount;                      //@synthesize scanSpecialSequenceCount=_scanSpecialSequenceCount - In the implementation block
@property (nonatomic,readonly) BOOL isAtEnd; 
@property (assign,nonatomic) BOOL shouldStop;                                         //@synthesize shouldStop=_shouldStop - In the implementation block
@property (assign,nonatomic) long long tileCount;                                     //@synthesize tileCount=_tileCount - In the implementation block
@property (assign,nonatomic) CGSize interTileSpacing;                                 //@synthesize interTileSpacing=_interTileSpacing - In the implementation block
@property (nonatomic,copy) id tileImageSizeBlock;                                     //@synthesize tileImageSizeBlock=_tileImageSizeBlock - In the implementation block
@property (nonatomic,copy) id tileMinimumSizeBlock;                                   //@synthesize tileMinimumSizeBlock=_tileMinimumSizeBlock - In the implementation block
@property (assign,nonatomic) UIEdgeInsets captionPadding;                             //@synthesize captionPadding=_captionPadding - In the implementation block
@property (assign,nonatomic) CGSize noCaptionSpacing;                                 //@synthesize noCaptionSpacing=_noCaptionSpacing - In the implementation block
@property (nonatomic,copy) id tileHasCaptionBlock;                                    //@synthesize tileHasCaptionBlock=_tileHasCaptionBlock - In the implementation block
@property (nonatomic,copy) id tileCaptionSizeBlock;                                   //@synthesize tileCaptionSizeBlock=_tileCaptionSizeBlock - In the implementation block
@property (nonatomic,copy) id tileHasLikesBlock;                                      //@synthesize tileHasLikesBlock=_tileHasLikesBlock - In the implementation block
@property (nonatomic,copy) id tileLikesSizeBlock;                                     //@synthesize tileLikesSizeBlock=_tileLikesSizeBlock - In the implementation block
@property (nonatomic,copy) id tileCommentCountBlock;                                  //@synthesize tileCommentCountBlock=_tileCommentCountBlock - In the implementation block
@property (nonatomic,copy) id tileCommentSizeBlock;                                   //@synthesize tileCommentSizeBlock=_tileCommentSizeBlock - In the implementation block
@property (nonatomic,copy) id tileBatchIDBlock;                                       //@synthesize tileBatchIDBlock=_tileBatchIDBlock - In the implementation block
@property (assign,nonatomic) long long numberOfMagneticGuidelines;                    //@synthesize numberOfMagneticGuidelines=_numberOfMagneticGuidelines - In the implementation block
@property (assign,nonatomic) double roundingScale;                                    //@synthesize roundingScale=_roundingScale - In the implementation block
-(PXFeedLayoutGeneratorScanState *)scanState;
-(id)init;
-(CGSize)likesSizeForTileAtIndex:(long long)arg1 proposedSize:(CGSize)arg2 ;
-(CGSize)commentSizeForTileAtIndex:(long long)arg1 commentIndex:(long long)arg2 proposedSize:(CGSize)arg3 ;
-(void)parsedFrame:(CGRect)arg1 type:(long long)arg2 forLikesAtIndex:(long long)arg3 ;
-(void)parsedFrame:(CGRect)arg1 type:(long long)arg2 forCommentAtIndex:(long long)arg3 ;
-(id)tileHasLikesBlock;
-(id)tileLikesSizeBlock;
-(id)tileCommentCountBlock;
-(id)tileCommentSizeBlock;
-(id)scannedBatchID;
-(void)setParsedFrameBlock:(id)arg1 ;
-(double)roundingScale;
-(void)setScannedBatchID:(id)arg1 ;
-(void)setScannedBatchHasCaption:(BOOL)arg1 ;
-(id)tileImageSizeBlock;
-(id)tileMinimumSizeBlock;
-(id)tileHasCaptionBlock;
-(id)tileBatchIDBlock;
-(BOOL)scanTile:(PXTileInfo*)arg1 passingTest:(/*^block*/id)arg2 ;
-(id)tileCaptionSizeBlock;
-(id)parsedFrameBlock;
-(BOOL)scanAnyTile:(PXTileInfo*)arg1 ;
-(void)willParseTiles;
-(void)didParseTiles;
-(BOOL)scanTileWithPortraitImage:(PXTileInfo*)arg1 ;
-(BOOL)scanTileWithLandscapeImage:(PXTileInfo*)arg1 ;
-(double)valueByRounding:(double)arg1 usingMagneticGuidelines:(BOOL)arg2 ;
-(BOOL)scanTileWithHorizontalPanorama:(PXTileInfo*)arg1 ;
-(BOOL)scannedBatchHasCaption;
-(BOOL)scanTile:(PXTileInfo*)arg1 type:(long long*)arg2 ;
-(BOOL)scanTile:(PXTileInfo*)arg1 ofType:(long long)arg2 ;
-(BOOL)scanTileWithSquareImage:(PXTileInfo*)arg1 ;
-(CGSize)captionSizeForTileAtIndex:(long long)arg1 proposedSize:(CGSize)arg2 ;
-(void)parsedFrame:(CGRect)arg1 type:(long long)arg2 forTileAtIndex:(long long)arg3 ;
-(long long)numberOfMagneticGuidelines;
-(long long)scanSpecialSequenceCount;
-(void)setScanSpecialSequenceCount:(long long)arg1 ;
-(BOOL)parseNextTiles;
-(BOOL)shouldStop;
-(void)setInterTileSpacing:(CGSize)arg1 ;
-(void)setCaptionPadding:(UIEdgeInsets)arg1 ;
-(void)setNoCaptionSpacing:(CGSize)arg1 ;
-(long long)tileCount;
-(void)setTileCommentSizeBlock:(id)arg1 ;
-(void)setTileCommentCountBlock:(id)arg1 ;
-(void)setTileLikesSizeBlock:(id)arg1 ;
-(void)setTileHasLikesBlock:(id)arg1 ;
-(void)setScanLocation:(long long)arg1 ;
-(void)enumerateFramesWithBlock:(/*^block*/id)arg1 ;
-(long long)scanLocation;
-(void)setShouldStop:(BOOL)arg1 ;
-(void)parseTiles;
-(void)setScanState:(PXFeedLayoutGeneratorScanState *)arg1 ;
-(BOOL)isAtEnd;
-(void)setTileCount:(long long)arg1 ;
-(void)setTileImageSizeBlock:(id)arg1 ;
-(void)setTileMinimumSizeBlock:(id)arg1 ;
-(void)setTileHasCaptionBlock:(id)arg1 ;
-(void)setTileCaptionSizeBlock:(id)arg1 ;
-(void)setTileBatchIDBlock:(id)arg1 ;
-(CGSize)interTileSpacing;
-(UIEdgeInsets)captionPadding;
-(CGSize)noCaptionSpacing;
-(void)setNumberOfMagneticGuidelines:(long long)arg1 ;
-(void)setRoundingScale:(double)arg1 ;
@end

