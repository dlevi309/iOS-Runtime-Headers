/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDLayout.h>

@class TSDInfoGeometry, TSDPathSource, TSDImageLayout;

@interface TSDMaskLayout : TSDLayout {

	struct {
		unsigned path : 1;
		unsigned tightPathBounds : 1;
	}  mMaskInvalidFlags;
	CGPathRef mCachedPath;
	CGPathRef mCachedPathNoScale;
	CGRect mCachedTightPathBounds;
	CGRect mCachedTightPathBoundsNoScale;
	double mPathScale;
	TSDInfoGeometry* mDynamicInfoGeometry;
	TSDPathSource* mDynamicPathSource;
	TSDPathSource* mPathSourceWithProvidedSize;
	BOOL mScalingInMaskMode;

}

@property (assign,nonatomic) double pathScale; 
@property (nonatomic,readonly) BOOL hasSmartPath; 
@property (nonatomic,readonly) TSDImageLayout * imageLayout; 
-(void)dealloc;
-(void)invalidate;
-(CGPathRef)path;
-(id)initWithInfo:(id)arg1 ;
-(void)invalidatePath;
-(CGRect)pathBounds;
-(id)computeLayoutGeometry;
-(BOOL)shouldDisplayGuides;
-(void)dragBy:(CGPoint)arg1 ;
-(void)processChangedProperty:(int)arg1 ;
-(id)infoGeometry;
-(void)beginDynamicOperation;
-(void)endDynamicOperation;
-(id)dependentLayouts;
-(CGRect)alignmentFrame;
-(CGAffineTransform)originalTransformForProvidingGuides;
-(CGAffineTransform)layoutTransformInInfoSpace:(CGAffineTransform)arg1 ;
-(void)resizeWithTransform:(CGAffineTransform)arg1 asChild:(BOOL)arg2 ;
-(CGRect)alignmentFrameForProvidingGuidesInRoot;
-(BOOL)shouldSnapWhileResizing;
-(void)setControlKnobPosition:(unsigned long long)arg1 toPoint:(CGPoint)arg2 ;
-(CGPoint)getControlKnobPosition:(unsigned long long)arg1 ;
-(unsigned long long)numberOfControlKnobs;
-(id)pathSource;
-(CGPathRef)p_cachedPath;
-(id)maskInfo;
-(TSDImageLayout *)imageLayout;
-(CGAffineTransform)affineTransformForTightPathBounds;
-(BOOL)hasSmartPath;
-(void)setPathScale:(double)arg1 ;
-(void)p_createDynamicCopies;
-(void)p_destroyDynamicCopies;
-(void)p_setDynamicInfoGeometry:(id)arg1 ;
-(void)maskModeScaleDidBegin;
-(void)maskModeScaleDidEnd;
-(CGRect)p_cachedTightPathBoundsNoScale;
-(CGRect)p_cachedTightPathBounds;
-(double)pathScale;
-(void)p_calculateCachedPathIfNecessary;
-(CGPathRef)p_cachedPathNoScale;
-(void)p_calculateTightPathBoundsIfNecessary;
-(void)takeScaledMaskGeometry:(id)arg1 ;
-(void)dynamicMovePathKnobDidBegin;
-(void)dynamicallyMovedSmartShapeKnobTo:(CGPoint)arg1 withTracker:(id)arg2 ;
@end

