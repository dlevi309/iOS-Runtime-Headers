/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <PencilKit/PKStroke.h>

@interface PKFatStroke : PKStroke {

	vector<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> >, std::__1::allocator<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> > > >* _maskPaths;
	vector<std::__1::pair<double, double>, std::__1::allocator<std::__1::pair<double, double> > >* _centerlineSlices;

}
+(id)sliceWithEraser:(vector<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> >, std::__1::allocator<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> > > >*)arg1 toClip:(id)arg2 clipType:(int)arg3 ;
+(id)sliceWithEraser:(vector<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> >, std::__1::allocator<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> > > >*)arg1 toClip:(id)arg2 ;
-(CGRect)_calculateBounds;
-(id)initWithStroke:(id)arg1 ;
-(id)sliceWithEraser:(vector<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> >, std::__1::allocator<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> > > >*)arg1 ;
-(id)sliceWithMask:(vector<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> >, std::__1::allocator<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> > > >*)arg1 ;
-(void)_appendPointsOfInterestForSelection:(vector<CGPoint, std::__1::allocator<CGPoint> >*)arg1 ;
-(id)initWithStroke:(id)arg1 hidden:(BOOL)arg2 version:(PKStrokeID)arg3 ink:(id)arg4 transform:(CGAffineTransform)arg5 tRange:(CGPoint)arg6 ;
-(BOOL)intersectsLineFrom:(CGPoint)arg1 to:(CGPoint)arg2 minThreshold:(double)arg3 ;
-(CGPathRef)newPathRepresentation;
-(vector<std::__1::pair<double, double>, std::__1::allocator<std::__1::pair<double, double> > >*)centerlineSlices;
-(BOOL)intersectsClosedStroke:(id)arg1 ;
-(void)debugRender:(CGContextRef)arg1 ;
-(void)generatePolyHull;
-(vector<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> >, std::__1::allocator<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> > > >*)maskPaths;
-(void)calculateCenterlineSlices;
-(id)initWithArchive:(const Stroke*)arg1 sortedUUIDs:(id)arg2 inks:(id)arg3 parent:(id)arg4 isHidden:(BOOL)arg5 ;
-(unsigned)saveToArchive:(Stroke*)arg1 sortedUUIDs:(id)arg2 inks:(id)arg3 withPathData:(BOOL)arg4 parent:(id)arg5 transient:(BOOL)arg6 ;
@end

