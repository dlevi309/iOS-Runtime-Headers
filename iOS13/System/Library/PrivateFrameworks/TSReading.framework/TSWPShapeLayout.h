/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDShapeLayout.h>
#import <TSReading/TSWPLayoutParent.h>
#import <TSReading/TSWPColumnMetrics.h>
#import <TSReading/TSWPStorageObserver.h>

@protocol TSWPShapeLayoutDelegate;
@class TSWPPadding, TSWPLayout, TSDWrapPolygon;

@interface TSWPShapeLayout : TSDShapeLayout <TSWPLayoutParent, TSWPColumnMetrics, TSWPStorageObserver> {

	TSWPLayout* _containedLayout;
	TSDWrapPolygon* _cachedInteriorWrapPolygon;
	id<TSWPShapeLayoutDelegate> _delegate;
	BOOL _observingStorage;

}

@property (nonatomic,readonly) TSWPLayout * containedLayout;                //@synthesize containedLayout=_containedLayout - In the implementation block
@property (nonatomic,readonly) BOOL autosizes; 
@property (assign) id<TSWPShapeLayoutDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) CGSize adjustedInsets; 
@property (nonatomic,readonly) TSWPPadding * layoutMargins; 
@property (nonatomic,readonly) unsigned long long columnCount; 
@property (nonatomic,readonly) BOOL alwaysStartsNewTarget; 
@property (nonatomic,readonly) BOOL shrinkTextToFit; 
@property (nonatomic,readonly) BOOL columnsAreLeftToRight; 
@property (nonatomic,readonly) double textScaleFactor; 
-(void)dealloc;
-(void)addChild:(id)arg1 ;
-(id<TSWPShapeLayoutDelegate>)delegate;
-(void)setDelegate:(id<TSWPShapeLayoutDelegate>)arg1 ;
-(unsigned long long)columnCount;
-(id)initWithInfo:(id)arg1 ;
-(id)children;
-(void)setChildren:(id)arg1 ;
-(TSWPPadding *)layoutMargins;
-(void)setGeometry:(id)arg1 ;
-(BOOL)autosizes;
-(void)insertChild:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)invalidatePath;
-(unsigned)autosizeFlagsForTextLayout:(id)arg1 ;
-(unsigned)verticalAlignmentForTextLayout:(id)arg1 ;
-(void)invalidateForAutosizingTextLayout:(id)arg1 ;
-(CGRect)nonAutosizedFrameForTextLayout:(id)arg1 ;
-(CGRect)autosizedFrameForTextLayout:(id)arg1 textSize:(CGSize)arg2 ;
-(id)dependentsOfTextLayout:(id)arg1 ;
-(Class)repClassForTextLayout:(id)arg1 ;
-(BOOL)textLayoutShouldWrapAroundExternalDrawables:(id)arg1 ;
-(BOOL)textLayoutShouldLayoutVertically:(id)arg1 ;
-(BOOL)allowsLastLineTruncation:(id)arg1 ;
-(unsigned)maxLineCountForTextLayout:(id)arg1 ;
-(double)widthForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 ;
-(double)gapForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 ;
-(double)positionForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 outWidth:(double*)arg3 outGap:(double*)arg4 ;
-(CGSize)adjustedInsets;
-(BOOL)alwaysStartsNewTarget;
-(BOOL)shrinkTextToFit;
-(BOOL)columnsAreLeftToRight;
-(id)textWrapper;
-(void)invalidateSize;
-(id)interiorWrapPolygon;
-(void)updateChildrenFromInfo;
-(id)interiorClippingPath;
-(void)processChangedProperty:(int)arg1 ;
-(id)childSearchTargets;
-(BOOL)supportsRotation;
-(id)dependentLayouts;
-(void)willBeAddedToLayoutController:(id)arg1 ;
-(void)willBeRemovedFromLayoutController:(id)arg1 ;
-(BOOL)resizeMayChangeAspectRatio;
-(BOOL)canAspectRatioLockBeChangedByUser;
-(void)replaceChild:(id)arg1 with:(id)arg2 ;
-(void)insertChild:(id)arg1 below:(id)arg2 ;
-(void)insertChild:(id)arg1 above:(id)arg2 ;
-(id)interiorWrapPath;
-(id)pathSource;
-(CGAffineTransform)computeLayoutTransform;
-(BOOL)isInvisibleAutosizingShape;
-(void)storage:(id)arg1 didChangeRange:(NSRange)arg2 delta:(long long)arg3 broadcastKind:(int)arg4 ;
-(TSWPLayout *)containedLayout;
-(void)createContainedLayoutForEditing;
-(void)createContainedLayoutForInstructionalText;
-(id)instructionalStorageForContainedStorage:(id)arg1 storageKind:(int)arg2 ;
-(void)destroyContainedLayoutForInstructionalText;
-(CGAffineTransform)autosizedTransform;
-(CGAffineTransform)autosizedTransformForInfoGeometry:(id)arg1 ;
-(CGPoint)autosizePositionOffsetForFixedWidth:(BOOL)arg1 height:(BOOL)arg2 ;
-(unsigned)cropLine:(CGRect)arg1 lineSegmentRects:(CGRect)arg2 ;
-(CGPoint)autosizePositionOffset;
@end

