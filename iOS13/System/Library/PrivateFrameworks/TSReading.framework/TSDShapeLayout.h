/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDStyledLayout.h>

@class TSDBezierPath, TSDPathSource, TSDEditableBezierPathSource, TSDInfoGeometry, TSDMutableStroke, TSDFill;

@interface TSDShapeLayout : TSDStyledLayout {

	struct {
		unsigned path : 1;
		unsigned pathBounds : 1;
		unsigned pathBoundsWithoutStroke : 1;
		unsigned pathIsOpen : 1;
		unsigned pathIsLineSegment : 1;
		unsigned alignmentFrame : 1;
		unsigned headAndTail : 1;
		unsigned headLineEnd : 1;
		unsigned tailLineEnd : 1;
		unsigned clippedPath : 1;
	}  mShapeInvalidFlags;
	TSDBezierPath* mCachedPath;
	CGRect mCachedPathBounds;
	CGRect mCachedPathBoundsWithoutStroke;
	BOOL mCachedPathIsOpen;
	BOOL mCachedPathIsLineSegment;
	CGRect mCachedAlignmentFrame;
	CGPoint mHeadPoint;
	CGPoint mTailPoint;
	CGPoint mHeadLineEndPoint;
	CGPoint mTailLineEndPoint;
	double mHeadLineEndAngle;
	double mTailLineEndAngle;
	long long mHeadCutSegment;
	long long mTailCutSegment;
	double mHeadCutT;
	double mTailCutT;
	TSDBezierPath* mCachedClippedPath;
	TSDPathSource* mShrunkenPathSource;
	TSDEditableBezierPathSource* mCachedEditableBezierPathSource;
	TSDPathSource* mCachedPathSource;
	TSDPathSource* mResizePathSource;
	TSDInfoGeometry* mResizeInfoGeometry;
	TSDInfoGeometry* mInitialInfoGeometry;
	TSDPathSource* mProvidedPathSource;
	TSDMutableStroke* mDynamicStroke;
	TSDFill* mDynamicFill;

}

@property (nonatomic,readonly) TSDFill * fill; 
@property (nonatomic,retain) TSDFill * dynamicFill; 
-(void)dealloc;
-(id)path;
-(CGSize)minimumSize;
-(id)initWithInfo:(id)arg1 ;
-(id)stroke;
-(TSDFill *)fill;
-(void)setGeometry:(id)arg1 ;
-(BOOL)isInvisible;
-(void)invalidatePath;
-(CGRect)pathBounds;
-(id)clippedPathForLineEnds;
-(id)strokeHeadLineEnd;
-(id)strokeTailLineEnd;
-(CGPoint)headLineEndPoint;
-(CGPoint)tailLineEndPoint;
-(double)headLineEndAngle;
-(double)tailLineEndAngle;
-(double)lineEndScale;
-(void)p_validateHeadLineEnd;
-(void)p_validateTailLineEnd;
-(void)p_invalidateClippedPath;
-(void)p_validateHeadAndTail;
-(void)p_computeAngle:(double*)arg1 point:(CGPoint*)arg2 cutSegment:(long long*)arg3 cutT:(double*)arg4 forLineEndAtHead:(BOOL)arg5 ;
-(void)p_invalidateHead;
-(void)p_invalidateTail;
-(BOOL)isBeingManipulated;
-(void)invalidateFrame;
-(id)computeLayoutGeometry;
-(id)layoutGeometryFromInfo;
-(id)i_computeWrapPath;
-(void)processChangedProperty:(int)arg1 ;
-(id)i_computeWrapPathClosed:(BOOL)arg1 ;
-(void)beginDynamicOperation;
-(void)endDynamicOperation;
-(CGRect)boundsForStandardKnobs;
-(BOOL)supportsRotation;
-(CGRect)alignmentFrame;
-(BOOL)shouldBeDisplayedInShowMode;
-(BOOL)isStrokeBeingManipulated;
-(void)dynamicStrokeWidthChangeDidBegin;
-(void)dynamicStrokeWidthUpdateToValue:(double)arg1 ;
-(void)dynamicStrokeWidthChangeDidEnd;
-(id)initialInfoGeometry;
-(CGPoint)centerForConnecting;
-(CGRect)alignmentFrameInRoot;
-(BOOL)supportsResize;
-(void)setControlKnobPosition:(unsigned long long)arg1 toPoint:(CGPoint)arg2 ;
-(CGPoint)getControlKnobPosition:(unsigned long long)arg1 ;
-(unsigned long long)numberOfControlKnobs;
-(id)pathSource;
-(id)shapeInfo;
-(CGRect)shapeFrameWithTransform:(CGAffineTransform)arg1 ;
-(void)aliasPathForScale:(double)arg1 adjustedStroke:(id*)arg2 adjustedPath:(id*)arg3 startDelta:(CGPoint*)arg4 endDelta:(CGPoint*)arg5 ;
-(BOOL)pathIsOpen;
-(CGRect)pathBoundsWithoutStroke;
-(BOOL)pathIsLineSegment;
-(CGPoint)headPoint;
-(CGPoint)tailPoint;
-(id)editablePathSource;
-(void)invalidatePathBounds;
-(id)layoutInfoGeometry;
-(CGAffineTransform)computeLayoutTransform;
-(id)p_cachedPath;
-(CGRect)p_cachedPathBounds;
-(CGRect)p_cachedPathBoundsWithoutStroke;
-(BOOL)p_cachedPathIsOpen;
-(BOOL)p_cachedPathIsLineSegment;
-(id)p_createClippedPath;
-(CGRect)p_boundsOfLineEndForHead:(BOOL)arg1 transform:(CGAffineTransform)arg2 ;
-(BOOL)isInvisibleAutosizingShape;
-(void)aliasPathForScale:(double)arg1 originalStroke:(id)arg2 adjustedStroke:(id*)arg3 adjustedPath:(id*)arg4 startDelta:(CGPoint*)arg5 endDelta:(CGPoint*)arg6 ;
-(id)p_unitePath:(id)arg1 withLineEndForHead:(BOOL)arg2 stroke:(id)arg3 ;
-(id)smartPathSource;
-(BOOL)isTailEndOnLeft;
-(CGRect)aliasedAlignmentFrameForScale:(double)arg1 ;
-(BOOL)canBeIntersected;
-(BOOL)canResetTextAndObjectHandles;
-(CGPoint)unclippedHeadPoint;
-(CGPoint)unclippedTailPoint;
-(void)p_updateResizeInfoGeometryFromResizePathSource;
-(TSDFill *)dynamicFill;
-(void)setDynamicFill:(TSDFill *)arg1 ;
@end

