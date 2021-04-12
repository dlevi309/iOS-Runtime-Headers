/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDShapeLayout.h>

@class TSDBezierPath, TSDConnectionLinePathSource, TSDInfoGeometry, TSDLayout;

@interface TSDConnectionLineAbstractLayout : TSDShapeLayout {

	TSDBezierPath* mClippedBezierPath;
	TSDConnectionLinePathSource* mOriginalPathSource;
	TSDConnectionLinePathSource* mConnectedPathSource;
	TSDInfoGeometry* mConnectedInfoGeometry;
	TSDLayout* mConnectedFrom;
	TSDLayout* mConnectedTo;
	TSDBezierPath* mCachedFromWrapPath;
	TSDBezierPath* mCachedToWrapPath;
	double mCachedFromOutset;
	double mCachedToOutset;
	TSDBezierPath* mCachedFromOutsetWrapPath;
	TSDBezierPath* mCachedToOutsetWrapPath;
	TSDLayout* mOldConnectedFrom;
	TSDLayout* mOldConnectedTo;
	BOOL mValidConnections;
	BOOL mVisibleLine;
	BOOL mValidLine;
	CGPoint mLooseEndPosition;
	CGPoint mAcumulatedDrag;
	BOOL mUseResizePoints[3];
	CGPoint mResizeControlPoints[3];
	BOOL mUseDynamicOutsets;
	double mDynamicOutsetFrom;
	double mDynamicOutsetTo;

}

@property (assign,nonatomic) TSDLayout * connectedFrom; 
@property (assign,nonatomic) TSDLayout * connectedTo; 
@property (nonatomic,readonly) BOOL validLine; 
@property (nonatomic,readonly) TSDConnectionLinePathSource * connectedPathSource; 
@property (assign,nonatomic) BOOL useDynamicOutsets; 
@property (assign,nonatomic) double dynamicOutsetFrom; 
@property (assign,nonatomic) double dynamicOutsetTo; 
@property (nonatomic,readonly) double outsetFrom; 
@property (nonatomic,readonly) double outsetTo; 
-(void)dealloc;
-(id)path;
-(BOOL)isInvisible;
-(void)validate;
-(BOOL)canFlip;
-(void)invalidatePath;
-(void)invalidatePosition;
-(int)wrapType;
-(BOOL)shouldDisplayGuides;
-(void)processChangedProperty:(int)arg1 ;
-(void)parentDidChange;
-(void)beginDynamicOperation;
-(void)endDynamicOperation;
-(CGRect)boundsForStandardKnobs;
-(BOOL)supportsRotation;
-(void)connectedLayoutInvalidated:(id)arg1 ;
-(BOOL)shouldValidate;
-(void)pauseDynamicTransformation;
-(id)reliedOnLayouts;
-(id)additionalLayoutsForRepCreation;
-(BOOL)supportsResize;
-(BOOL)supportsFlipping;
-(CGPoint)getControlKnobPosition:(unsigned long long)arg1 ;
-(id)pathSource;
-(BOOL)pathIsOpen;
-(BOOL)pathIsLineSegment;
-(id)layoutInfoGeometry;
-(BOOL)canBeIntersected;
-(BOOL)canResetTextAndObjectHandles;
-(CGPoint)unclippedHeadPoint;
-(CGPoint)unclippedTailPoint;
-(TSDLayout *)connectedFrom;
-(TSDLayout *)connectedTo;
-(void)setConnectedFrom:(TSDLayout *)arg1 ;
-(void)setConnectedTo:(TSDLayout *)arg1 ;
-(void)invalidateConnections;
-(double)outsetFrom;
-(id)clipPath:(id)arg1 onLayout:(id)arg2 outset:(double)arg3 reversed:(BOOL)arg4 isValid:(BOOL*)arg5 ;
-(double)outsetTo;
-(TSDConnectionLinePathSource *)connectedPathSource;
-(BOOL)isStraightLine;
-(id)createConnectedPathFrom:(id)arg1 to:(id)arg2 withControlPoints:(CGPoint)arg3 ;
-(CGPoint)controlPointForPointA:(CGPoint)arg1 pointB:(CGPoint)arg2 andOriginalA:(CGPoint)arg3 originalB:(CGPoint)arg4 ;
-(BOOL)validLine;
-(CGPoint)i_accumulatedDrag;
-(void)checkConnections;
-(void)removeConnections;
-(void)updateRepPath;
-(id)connectionLineInfo;
-(id)p_infoForConnectingToInfo:(id)arg1 ;
-(BOOL)canEndpointsCoincide;
-(void)updateConnectedPath;
-(BOOL)useDynamicOutsets;
-(void)setUseDynamicOutsets:(BOOL)arg1 ;
-(double)dynamicOutsetFrom;
-(void)setDynamicOutsetFrom:(double)arg1 ;
-(double)dynamicOutsetTo;
-(void)setDynamicOutsetTo:(double)arg1 ;
@end

