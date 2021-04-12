/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDAbstractLayout.h>
#import <TSReading/TSKSearchTarget.h>
#import <TSReading/TSDAttachmentLayout.h>

@protocol TSDInfo;
@class NSObject, TSDLayoutGeometry, NSMutableSet, NSSet, NSString;

@interface TSDLayout : TSDAbstractLayout <TSKSearchTarget, TSDAttachmentLayout> {

	NSObject*<TSDInfo> mInfo;
	int mLayoutState;
	CGPoint mBaseAlignmentFrameOriginForFixingInterimPosition;
	CGPoint mBaseCapturedAlignmentFrameOriginForInline;
	CGRect mDirtyRect;
	struct {
		unsigned position : 1;
		unsigned size : 1;
	}  mInvalidFlags;
	TSDLayoutGeometry* mBaseGeometry;
	CGRect mInitialBoundsForStandardKnobs;
	CGPoint mCapturedInfoGeometryPositionForInline;
	CGPoint mCapturedAlignmentFrameOriginForInline;
	NSMutableSet* mConnectedLayouts;
	BOOL mHasFinishedIterativePositioning;
	id mIterativePositioningState;

}

@property (nonatomic,readonly) NSObject*<TSDInfo> info; 
@property (nonatomic,copy) TSDLayoutGeometry * dynamicGeometry; 
@property (nonatomic,readonly) TSDLayoutGeometry * originalGeometry; 
@property (nonatomic,readonly) int layoutState; 
@property (nonatomic,readonly) NSSet * connectedLayouts; 
@property (nonatomic,readonly) BOOL invalidGeometry; 
@property (nonatomic,retain) id iterativePositioningState; 
@property (nonatomic,readonly) BOOL hasFinishedIterativePositioning; 
@property (nonatomic,readonly) BOOL isStrokeBeingManipulated; 
@property (nonatomic,readonly) BOOL canAspectRatioLockBeChangedByUser; 
@property (nonatomic,readonly) BOOL resizeMayChangeAspectRatio; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL attachmentLayoutDisplacedByDropCap; 
+(id)descendentWrappablesOfLayout:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(void)setParent:(id)arg1 ;
-(NSObject*<TSDInfo>)info;
-(CGSize)minimumSize;
-(id)initWithInfo:(id)arg1 ;
-(void)setNeedsDisplayInRect:(CGRect)arg1 ;
-(void)setNeedsDisplay;
-(id)stroke;
-(int)layoutState;
-(void)validate;
-(CGRect)rectForSelection:(id)arg1 ;
-(BOOL)canFlip;
-(BOOL)isBeingManipulated;
-(id)rootLayout;
-(void)invalidateFrame;
-(Class)repClassOverride;
-(id)computeLayoutGeometry;
-(id)layoutController;
-(void)invalidateSize;
-(void)invalidatePosition;
-(BOOL)invalidGeometry;
-(void)updateChildrenFromInfo;
-(void)invalidateChildren;
-(CGPoint)capturedInfoPositionForAttachment;
-(id)layoutGeometryFromInfo;
-(BOOL)shouldDisplayGuides;
-(BOOL)shouldProvideSizingGuides;
-(id)i_wrapPath;
-(void)dragBy:(CGPoint)arg1 ;
-(void)invalidateExteriorWrap;
-(void)processChangedProperty:(int)arg1 ;
-(void)parentDidChange;
-(id)i_externalWrapPath;
-(BOOL)allowsConnections;
-(id)childSearchTargets;
-(void)layoutSearchForAnnotationWithHitBlock:(/*^block*/id)arg1 ;
-(BOOL)orderedBefore:(id)arg1 ;
-(void)processChanges:(id)arg1 ;
-(void)beginDynamicOperation;
-(void)endDynamicOperation;
-(CGRect)boundsForStandardKnobs;
-(NSSet *)connectedLayouts;
-(BOOL)isInTopLevelContainerForEditing;
-(CGRect)i_takeDirtyRect;
-(CGAffineTransform)originalPureTransformInRoot;
-(CGAffineTransform)pureTransformInRoot;
-(CGAffineTransform)originalTransformInRoot;
-(TSDLayoutGeometry *)dynamicGeometry;
-(TSDLayoutGeometry *)originalGeometry;
-(void)beginRotate;
-(CGPoint)centerForRotation;
-(BOOL)isInGroup;
-(id)dependentLayouts;
-(void)p_invalidateConnectedLayouts;
-(BOOL)dependentsRelyOnSize;
-(void)p_unregisterWithLayoutController:(id)arg1 ;
-(void)parentWillChangeTo:(id)arg1 ;
-(void)p_registerWithLayoutController:(id)arg1 ;
-(void)p_recursiveInvalidate;
-(id)i_layoutGeometryProvider;
-(BOOL)i_useBaseCapturedAlignmentFrameOriginForInline;
-(CGPoint)alignmentFrameOriginForFixingInterimPosition;
-(void)setDynamicGeometry:(TSDLayoutGeometry *)arg1 ;
-(id)originalPureGeometry;
-(void)i_setBaseCapturedAlignmentFrameOriginForInline;
-(CGRect)initialBoundsForStandardKnobs;
-(id)pureGeometry;
-(id)layoutGeometryFromProvider;
-(double)scaleForInlineClampingUnrotatedSize:(CGSize)arg1 withGeometry:(id)arg2 ;
-(CGSize)maximumFrameSizeForChild:(id)arg1 ;
-(id)additionalDependenciesForChildLayout:(id)arg1 ;
-(CGPoint)calculatePointFromSearchReference:(id)arg1 ;
-(BOOL)attachmentLayoutDisplacedByDropCap;
-(BOOL)shouldValidate;
-(void)finishIterativePositioning;
-(void)unregisterFromLayoutController;
-(void)willBeAddedToLayoutController:(id)arg1 ;
-(void)wasAddedToLayoutController:(id)arg1 ;
-(void)willBeRemovedFromLayoutController:(id)arg1 ;
-(void)wasRemovedFromLayoutController:(id)arg1 ;
-(id)computeInfoGeometryFromLayoutGeometry:(id)arg1 ;
-(CGPoint)infoGeometryPositionForCurrentAttachedLayoutGeometry;
-(BOOL)shouldBeDisplayedInShowMode;
-(BOOL)isStrokeBeingManipulated;
-(void)dynamicStrokeWidthChangeDidBegin;
-(void)dynamicStrokeWidthUpdateToValue:(double)arg1 ;
-(void)dynamicStrokeWidthChangeDidEnd;
-(void)pauseDynamicTransformation;
-(BOOL)isBeingTransformed;
-(void)beginDrag;
-(void)dragByUnscaled:(CGPoint)arg1 ;
-(void)endDrag;
-(CGAffineTransform)originalTransformForProvidingGuides;
-(CGAffineTransform)layoutTransformInInfoSpace:(CGAffineTransform)arg1 ;
-(BOOL)shouldProvideGuidesDuringExclusiveAlignmentOperation;
-(void)takeRotationFromTracker:(id)arg1 ;
-(void)endRotate;
-(BOOL)resizeMayChangeAspectRatio;
-(BOOL)canAspectRatioLockBeChangedByUser;
-(void)beginResize;
-(CGSize)maximumSizeForChildLayout:(id)arg1 ;
-(void)resizeWithTransform:(CGAffineTransform)arg1 asChild:(BOOL)arg2 ;
-(id)initialInfoGeometry;
-(id)pureGeometryInRoot;
-(id)inspectorGeometry;
-(void)validateFromLastInterimPosition;
-(CGPoint)centerForConnecting;
-(id)computeInfoGeometryDuringResize;
-(id)searchTarget;
-(id)reliedOnLayouts;
-(id)additionalLayoutsForRepCreation;
-(id)additionalGuides;
-(double)inlineVerticalOffset;
-(double)inlineCenteredAlignmentOffset;
-(void)willLayoutInlineWithTextAttributes:(CFDictionaryRef)arg1 columnWidth:(double)arg2 ;
-(BOOL)wantsRoundedInlinePosition;
-(void)i_accumulateLayoutsIntoSet:(id)arg1 ;
-(CGRect)rectForPresentingAnnotationPopoverForSelection:(id)arg1 ;
-(void)addConnectedLayout:(id)arg1 ;
-(void)removeConnectedLayout:(id)arg1 ;
-(id)iterativePositioningState;
-(void)setIterativePositioningState:(id)arg1 ;
-(BOOL)hasFinishedIterativePositioning;
-(void)setAdjustedInterimPositionX:(double)arg1 ;
-(void)setAdjustedInterimPositionY:(double)arg1 ;
@end

