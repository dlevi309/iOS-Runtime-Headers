/*
* Generated on Thursday, January 14, 2021 at 2:24:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <PencilKit/PKStroke.h>

@interface _PKClippedStroke : PKStroke {

	vector<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> >, std::__1::allocator<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> > > >* _maskPaths;
	vector<_PKFloatRange, std::__1::allocator<_PKFloatRange> >* _centerlineSlices;

}
+(id)sliceWithEraser:(const vector<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> >, std::__1::allocator<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> > > >*)arg1 toClip:(id)arg2 clipType:(int)arg3 ;
+(id)sliceWithEraser:(const vector<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> >, std::__1::allocator<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> > > >*)arg1 toClip:(id)arg2 ;
-(id)mask;
-(CGRect)_calculateBounds;
-(id)initWithStroke:(id)arg1 ;
-(id)sliceWithEraser:(const vector<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> >, std::__1::allocator<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> > > >*)arg1 ;
-(id)sliceWithMask:(const vector<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> >, std::__1::allocator<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> > > >*)arg1 ;
-(BOOL)intersectsPoint:(CGPoint)arg1 boundsOutset:(double)arg2 minimumStrokeThreshold:(double)arg3 ;
-(vector<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> >, std::__1::allocator<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> > > >*)maskPaths;
-(CGPathRef)selectionPathRepresentationWithPointsCount:(int*)arg1 ;
-(id)initWithStroke:(id)arg1 hidden:(BOOL)arg2 version:(PKStrokeID)arg3 ink:(id)arg4 transform:(CGAffineTransform)arg5 ;
-(id)initWithInk:(id)arg1 strokePath:(id)arg2 transform:(CGAffineTransform)arg3 mask:(id)arg4 ;
-(CGPathRef)newPathRepresentation;
-(void)_appendPointsOfInterestForSelection:(vector<CGPoint, std::__1::allocator<CGPoint> >*)arg1 ;
-(id)maskedPathRanges;
-(vector<_PKFloatRange, std::__1::allocator<_PKFloatRange> >*)centerlineSlices;
-(void)debugRender:(CGContextRef)arg1 ;
-(BOOL)intersectsPoint:(CGPoint)arg1 ;
-(BOOL)intersectsLineFrom:(CGPoint)arg1 to:(CGPoint)arg2 minThreshold:(double)arg3 ;
-(BOOL)intersectsClosedStroke:(id)arg1 ;
-(void)generatePolyHull;
-(void)calculateCenterlineSlices;
-(id)initWithArchive:(const Stroke*)arg1 sortedUUIDs:(id)arg2 inks:(id)arg3 parent:(id)arg4 isHidden:(BOOL)arg5 transientArchiveDictionary:(id)arg6 ;
-(unsigned)saveToArchive:(Stroke*)arg1 sortedUUIDs:(id)arg2 inks:(id)arg3 withPathData:(BOOL)arg4 parent:(id)arg5 transient:(BOOL)arg6 ;
@end

