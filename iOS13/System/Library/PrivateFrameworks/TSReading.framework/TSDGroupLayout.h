/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDContainerLayout.h>
#import <TSReading/TSDWrappableParent.h>

@class TSDLayoutGeometry, TSDBezierPath;

@interface TSDGroupLayout : TSDContainerLayout <TSDWrappableParent> {

	TSDLayoutGeometry* mDynamicLayoutGeometry;
	CGRect mBoundsForStandardKnobs;
	TSDBezierPath* mCachedWrapPath;
	TSDBezierPath* mCachedExternalWrapPath;

}

@property (nonatomic,readonly) int wrapContainerMode; 
-(void)dealloc;
-(void)invalidate;
-(CGSize)minimumSize;
-(void)setGeometry:(id)arg1 ;
-(BOOL)canFlip;
-(id)computeLayoutGeometry;
-(id)layoutGeometryFromInfo;
-(id)descendentWrappables;
-(int)wrapContainerMode;
-(id)i_computeWrapPath;
-(id)i_wrapPath;
-(void)dragBy:(CGPoint)arg1 ;
-(void)invalidateExteriorWrap;
-(void)processChangedProperty:(int)arg1 ;
-(id)i_externalWrapPath;
-(BOOL)allowsConnections;
-(void)beginDynamicOperation;
-(void)endDynamicOperation;
-(CGRect)boundsForStandardKnobs;
-(BOOL)supportsRotation;
-(CGRect)alignmentFrame;
-(void)setDynamicGeometry:(id)arg1 ;
-(id)additionalDependenciesForChildLayout:(id)arg1 ;
-(void)takeRotationFromTracker:(id)arg1 ;
-(BOOL)resizeMayChangeAspectRatio;
-(BOOL)canAspectRatioLockBeChangedByUser;
-(id)computeInfoGeometryDuringResize;
-(id)reliedOnLayouts;
-(CGRect)rectForPresentingAnnotationPopoverForSelection:(id)arg1 ;
-(BOOL)providesGuidesForChildLayouts;
-(id)visibleGeometries;
-(id)layoutsForProvidingGuidesForChildLayouts;
-(BOOL)supportsParentRotation;
-(BOOL)supportsFlipping;
-(void)p_createDynamicCopies;
-(void)p_destroyDynamicCopies;
-(void)p_invalidateParentForWrap;
-(void)p_invalidateDescendentWrapPaths;
-(id)p_childWrapPathsFrom:(id)arg1 ;
-(void)wrappableChildInvalidated;
@end

