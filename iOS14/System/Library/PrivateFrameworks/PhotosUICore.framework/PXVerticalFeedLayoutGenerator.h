/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXFeedLayoutGenerator.h>

@interface PXVerticalFeedLayoutGenerator : PXFeedLayoutGenerator {

	CGPoint _origin;
	PXTileInfo _enqueuedCaptionTileInfo;
	PXTileInfo _enqueuedLikesTileInfo;
	PXTileInfo _enqueuedCommentsTileInfo;
	BOOL _shouldDisplayCaptionsBelowBatches;
	double _referenceWidth;

}

@property (assign,nonatomic) double referenceWidth;                               //@synthesize referenceWidth=_referenceWidth - In the implementation block
@property (assign,nonatomic) BOOL shouldDisplayCaptionsBelowBatches;              //@synthesize shouldDisplayCaptionsBelowBatches=_shouldDisplayCaptionsBelowBatches - In the implementation block
-(void)willParseTiles;
-(BOOL)_parseTileRequiringFullWidth;
-(BOOL)_parseSpecialSequence;
-(BOOL)_parseSpecialTileTriplet;
-(BOOL)_parseTileTriplet;
-(BOOL)_parseTilePair;
-(BOOL)_parseSingleTile;
-(void)didParseTiles;
-(BOOL)_dequeueCaption;
-(BOOL)_scanTilePair:(PXTileInfo*)arg1 ;
-(BOOL)_addRowWithContiguousTiles:(PXTileInfo*)arg1 count:(long long)arg2 ;
-(BOOL)_scanTileTriplet:(PXTileInfo*)arg1 ;
-(BOOL)_scanTileRequiringFullWidth:(PXTileInfo*)arg1 ;
-(BOOL)_scanTileRequiringNewRow:(PXTileInfo*)arg1 ;
-(BOOL)_hasLeftSuboptimalRow;
-(BOOL)_scanTripletWithRearrangment:(PXTileInfo*)arg1 ;
-(BOOL)_addRowWithTiles:(PXTileInfo*)arg1 imageFrames:(CGRect*)arg2 count:(long long)arg3 ;
-(BOOL)_scanTripletWithLargeLead:(PXTileInfo*)arg1 ;
-(BOOL)_parseSpecialSubsequenceWithRowRequired:(BOOL)arg1 rowParsed:(BOOL*)arg2 ;
-(BOOL)_scanSpecialSequenceBlock:(PXTileInfo*)arg1 ;
-(BOOL)_addSpecialSequenceBlock:(PXTileInfo*)arg1 ;
-(BOOL)_scanSpecialSequenceRow:(PXTileInfo*)arg1 count:(long long*)arg2 ;
-(BOOL)_scanNonPanoramaSequence:(PXTileInfo*)arg1 count:(long long)arg2 ;
-(BOOL)_isAtEndOfRow;
-(BOOL)_hasEnqueuedCaption;
-(void)_enumerateRowFramesWithContiguousTiles:(PXTileInfo*)arg1 count:(long long)arg2 useMagneticGuidelines:(BOOL)arg3 block:(/*^block*/id)arg4 ;
-(void)_enqueueCaptionWithTileInfo:(PXTileInfo)arg1 ;
-(BOOL)parseNextTiles;
-(double)referenceDistanceForMagneticGuidelines;
-(BOOL)_dequeueLikes;
-(void)_enqueueLikesWithTileInfo:(PXTileInfo)arg1 ;
-(BOOL)_hasEnqueuedLikes;
-(void)_enqueueCommentsWithTileInfo:(PXTileInfo)arg1 ;
-(BOOL)_hasEnqueuedComments;
-(BOOL)_dequeueComments;
-(void)_willAddCaptionRowWithFirstTileInfo:(PXTileInfo)arg1 ;
-(void)_willAddLikeRowWithFirstTileInfo:(PXTileInfo)arg1 ;
-(void)_willAddCommentRowsWithFirstTileInfo:(PXTileInfo)arg1 ;
-(double)referenceWidth;
-(void)setShouldDisplayCaptionsBelowBatches:(BOOL)arg1 ;
-(BOOL)shouldDisplayCaptionsBelowBatches;
-(void)setReferenceWidth:(double)arg1 ;
@end

