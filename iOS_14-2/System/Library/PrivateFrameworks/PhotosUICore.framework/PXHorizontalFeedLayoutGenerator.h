/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXFeedLayoutGenerator.h>

@interface PXHorizontalFeedLayoutGenerator : PXFeedLayoutGenerator {

	CGPoint _origin;
	double _referenceHeight;

}

@property (assign,nonatomic) double referenceHeight;              //@synthesize referenceHeight=_referenceHeight - In the implementation block
-(void)willParseTiles;
-(BOOL)_parseSpecialSequence;
-(BOOL)_parseSpecialTileTriplet;
-(BOOL)_parseTileTriplet;
-(BOOL)_parseTilePair;
-(BOOL)_parseSingleTile;
-(BOOL)_scanTripletWithLargeLead:(PXTileInfo*)arg1 ;
-(BOOL)_scanSpecialSequenceBlock:(PXTileInfo*)arg1 ;
-(BOOL)_addSpecialSequenceBlock:(PXTileInfo*)arg1 ;
-(BOOL)_scanNonPanoramaSequence:(PXTileInfo*)arg1 count:(long long)arg2 ;
-(BOOL)parseNextTiles;
-(double)referenceDistanceForMagneticGuidelines;
-(double)referenceHeight;
-(BOOL)_hasLeftSuboptimalColumn;
-(BOOL)_addColumnWithTiles:(PXTileInfo*)arg1 imageFrames:(CGRect*)arg2 count:(long long)arg3 ;
-(BOOL)_addColumnWithContiguousTiles:(PXTileInfo*)arg1 count:(long long)arg2 ;
-(BOOL)_scanSpecialSequenceColumn:(PXTileInfo*)arg1 count:(long long*)arg2 ;
-(BOOL)_parseSpecialSubsequenceWithColumnRequired:(BOOL)arg1 columnParsed:(BOOL*)arg2 ;
-(BOOL)_isAtEndOfColumn;
-(void)_enumerateColumnFramesWithContiguousTiles:(PXTileInfo*)arg1 count:(long long)arg2 useMagneticGuidelines:(BOOL)arg3 block:(/*^block*/id)arg4 ;
-(void)setReferenceHeight:(double)arg1 ;
@end

