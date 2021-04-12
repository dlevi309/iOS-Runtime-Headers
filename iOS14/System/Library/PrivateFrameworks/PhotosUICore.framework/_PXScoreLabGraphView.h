/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>

@protocol OS_dispatch_queue, _PXScoreLabGraphViewDelegate;
@class NSArray, NSObject, NSPredicate;

@interface _PXScoreLabGraphView : UIView {

	double _leftMargin;
	double _rightMargin;
	double _topMargin;
	double _bottomMargin;
	double _graphWidth;
	double _graphHeight;
	double _minXValue;
	double _maxXValue;
	double _minYValue;
	double _maxYValue;
	double _baseMinXValue;
	double _baseMaxXValue;
	double _baseMinYValue;
	double _baseMaxYValue;
	double _minXValueAtBeginningOfGesture;
	double _maxXValueAtBeginningOfGesture;
	double _minYValueAtBeginningOfGesture;
	double _maxYValueAtBeginningOfGesture;
	CGPoint _locationAtBeginningOfGesture;
	NSArray* _allXValues;
	NSArray* _allYValues;
	double _Ex;
	double _Ex2;
	double _Ey;
	double _Ey2;
	double _Exy;
	unsigned long long _numberOfIgnoredAssets;
	NSObject*<OS_dispatch_queue> _serialQueue;
	/*^block*/id _xScoreValueGetter;
	/*^block*/id _yScoreValueGetter;
	unsigned long long _graphType;
	NSPredicate* _assetPredicate;
	id<_PXScoreLabGraphViewDelegate> _delegate;

}

@property (copy) id xScoreValueGetter;                                     //@synthesize xScoreValueGetter=_xScoreValueGetter - In the implementation block
@property (copy) id yScoreValueGetter;                                     //@synthesize yScoreValueGetter=_yScoreValueGetter - In the implementation block
@property (assign) unsigned long long graphType;                           //@synthesize graphType=_graphType - In the implementation block
@property (retain) NSPredicate * assetPredicate;                           //@synthesize assetPredicate=_assetPredicate - In the implementation block
@property (__weak) id<_PXScoreLabGraphViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id<_PXScoreLabGraphViewDelegate>)delegate;
-(void)setYScoreValueGetter:(id)arg1 ;
-(void)setXScoreValueGetter:(id)arg1 ;
-(void)setAssetPredicate:(NSPredicate *)arg1 ;
-(void)setGraphType:(unsigned long long)arg1 ;
-(void)startGestureAtLocation:(CGPoint)arg1 ;
-(void)cancelGesture;
-(void)updateGestureWithLocation:(CGPoint)arg1 scale:(double)arg2 ;
-(void)loadDistributionData;
-(void)loadCorrelationData;
-(void)drawAxisInContext:(CGContextRef)arg1 minXValue:(double)arg2 maxXValue:(double)arg3 minYValue:(double)arg4 maxYValue:(double)arg5 ;
-(void)drawXMean:(double)arg1 andStddev:(double)arg2 inContext:(CGContextRef)arg3 ;
-(void)drawYMean:(double)arg1 andStddev:(double)arg2 inContext:(CGContextRef)arg3 ;
-(void)drawTextPanelWithNumberOfAssets:(long long)arg1 numberOfIgnoredAssets:(unsigned long long)arg2 rho:(double)arg3 inContext:(CGContextRef)arg4 ;
-(void)drawDistributionInContext:(CGContextRef)arg1 ;
-(void)drawCorrelationInContext:(CGContextRef)arg1 ;
-(id)xScoreValueGetter;
-(id)yScoreValueGetter;
-(NSPredicate *)assetPredicate;
-(void)panned:(id)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setDelegate:(id<_PXScoreLabGraphViewDelegate>)arg1 ;
-(void)reloadData;
-(void)pinched:(id)arg1 ;
-(void)enumerateAssetsUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)graphType;
@end

