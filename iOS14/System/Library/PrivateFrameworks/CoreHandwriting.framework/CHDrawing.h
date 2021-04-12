/*
* Generated on Thursday, January 14, 2021 at 2:26:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CHDrawing : NSObject <NSCopying, NSSecureCoding> {

	CHDrawingStrokes* _drawing;

}

@property (assign,nonatomic) CHDrawingStrokes drawing;              //@synthesize drawing=_drawing - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)debugQuickLookObject;
-(void)clear;
-(CGRect)bounds;
-(id)initWithContentsOfFile:(id)arg1 ;
-(void)addPoint:(CGPoint)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)strokeCount;
-(void)endStroke;
-(CHDrawingStrokes)drawing;
-(void)setLineHeight:(double)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)pointCount;
-(BOOL)isEqual:(id)arg1 ;
-(void)setDrawing:(CHDrawingStrokes)arg1 ;
-(unsigned long long)pointCountForStrokeIndex:(unsigned long long)arg1 ;
-(CGPoint)pointForStrokeIndex:(unsigned long long)arg1 pointIndex:(unsigned long long)arg2 ;
-(Matrix<float>*)bitmapRepresentationForSize:(CGSize)arg1 ;
-(id)xyRepresentation;
-(Matrix<float>*)orientationRepresentationForSampling:(unsigned long long)arg1 convolutionWidth:(unsigned long long)arg2 ;
-(float)cumulativePointToPointDistance;
-(float)distanceBetweenFirstAndLastPoint;
-(vector<long, std::__1::allocator<long> >*)strokeIndicesSortedByMinXCoordinate;
-(id)sortedDrawingUsingMinXCoordinate;
-(NSRange)matchingStrokePrefixRangeForDrawing:(id)arg1 ;
-(void)appendSegment:(id)arg1 fromDrawing:(id)arg2 ;
-(CGRect)strokeBoundsAtIndex:(unsigned long long)arg1 ;
-(id)indexesOfStrokesSmallerThanSize:(CGSize)arg1 ;
-(BOOL)isEqualToDrawing:(id)arg1 ;
-(id)drawingTransformedWithTranslation:(CGVector)arg1 scaleFactor:(double)arg2 ;
-(id)findLocalYMaximaWithWindowSize:(unsigned long long)arg1 excludingStrokes:(set<long, std::__1::less<long>, std::__1::allocator<long> >*)arg2 ;
-(id)initialSegmentationPointIndicesForDrawing;
-(id)filterPointsWithProximity:(double)arg1 fixedPoints:(id)arg2 points:(id)arg3 ;
-(id)initWithContentsOfXYString:(id)arg1 ;
-(id)drawingWithStrokesFromIndexSet:(id)arg1 ;
-(CGPoint)centroidForStrokeIndexes:(id)arg1 ;
-(BOOL)isPrefixForDrawing:(id)arg1 ;
-(id)drawingScaledByFactor:(double)arg1 ;
-(id)drawingSpatiallyResampled:(double)arg1 outputPointMap:(vector<std::__1::map<long, long, std::__1::less<long>, std::__1::allocator<std::__1::pair<const long, long> > >, std::__1::allocator<std::__1::map<long, long, std::__1::less<long>, std::__1::allocator<std::__1::pair<const long, long> > > > >*)arg2 ;
-(id)findSignalCutPointsExcludingStrokes:(set<long, std::__1::less<long>, std::__1::allocator<long> >*)arg1 ;
-(CGRect)boundingBoxForDrawingSegmentFromCutPoint:(id)arg1 toCutPoint:(id)arg2 ;
-(double)averageCharacterHeightEstimation:(double)arg1 minChunkHeight:(double)arg2 ;
@end

