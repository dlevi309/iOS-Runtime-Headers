/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKViewController.h>
#import <libobjc.A.dylib/HKGraphViewDelegate.h>

@protocol HKGraphViewDelegate, HKGraphViewControllerDelegate;
@class HKGraphView, NSString;

@interface HKGraphViewController : HKViewController <HKGraphViewDelegate> {

	HKGraphView* _graphView;
	id<HKGraphViewDelegate> _graphViewDelegateProxy;
	id<HKGraphViewControllerDelegate> _delegate;
	long long _dateZoom;

}

@property (nonatomic,readonly) HKGraphView * graphView;                                          //@synthesize graphView=_graphView - In the implementation block
@property (assign,nonatomic,__weak) id<HKGraphViewDelegate> graphViewDelegateProxy;              //@synthesize graphViewDelegateProxy=_graphViewDelegateProxy - In the implementation block
@property (assign,nonatomic,__weak) id<HKGraphViewControllerDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long dateZoom;                                               //@synthesize dateZoom=_dateZoom - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<HKGraphViewControllerDelegate>)delegate;
-(void)setDelegate:(id<HKGraphViewControllerDelegate>)arg1 ;
-(void)setDetailView:(id)arg1 ;
-(HKGraphView *)graphView;
-(void)graphViewDidBeginSelection:(id)arg1 ;
-(void)graphView:(id)arg1 didUpdateSelectedPoint:(id)arg2 ;
-(void)graphViewDidEndSelection:(id)arg1 ;
-(void)graphView:(id)arg1 didUpdateFromDateZoom:(long long)arg2 toDateZoom:(long long)arg3 newVisibleRange:(id)arg4 ;
-(void)graphView:(id)arg1 didUpdateVisibleValueRange:(id)arg2 changeContext:(long long)arg3 ;
-(void)graphView:(id)arg1 didFinishUserScrollingToValueRange:(id)arg2 ;
-(long long)stackCountForGraphView:(id)arg1 ;
-(id)graphView:(id)arg1 graphSeriesForZoom:(long long)arg2 stackOffset:(long long)arg3 ;
-(void)graphViewSizeChanged:(id)arg1 ;
-(void)graphView:(id)arg1 didUpdateYAxisWidth:(double)arg2 toWidth:(double)arg3 ;
-(void)graphView:(id)arg1 didUpdateSeries:(id)arg2 newDataArrived:(BOOL)arg3 ;
-(id)seriesSelectionLineColorForGraphView:(id)arg1 ;
-(void)graphView:(id)arg1 didUpdateLegendViewsWithTopLegendFrame:(CGRect)arg2 ;
-(void)graphViewDidTapYAxis:(id)arg1 ;
-(void)graphView:(id)arg1 startupTime:(long long)arg2 ;
-(id)initWithGraphView:(id)arg1 dateZoom:(long long)arg2 ;
-(id<HKGraphViewDelegate>)graphViewDelegateProxy;
-(long long)dateZoom;
-(void)setGraphViewDelegateProxy:(id<HKGraphViewDelegate>)arg1 ;
@end

