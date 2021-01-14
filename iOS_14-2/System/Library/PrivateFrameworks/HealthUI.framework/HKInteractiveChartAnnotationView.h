/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol HKInteractiveChartAnnotationViewDataSource, HKInteractiveChartAnnotationViewDelegate;
@class _HKAnnotationColumnLayout, _HKDateContentLayout, _HKBodyMarginsLayout, UIButton, NSLayoutConstraint, NSTimer;

@interface HKInteractiveChartAnnotationView : UIView {

	BOOL _showsInfoButton;
	id<HKInteractiveChartAnnotationViewDataSource> _dataSource;
	id<HKInteractiveChartAnnotationViewDelegate> _delegate;
	_HKAnnotationColumnLayout* _columnLayout;
	_HKDateContentLayout* _dateContentLayout;
	_HKBodyMarginsLayout* _bodyMarginsLayout;
	UIButton* _infoButton;
	long long _context;
	NSLayoutConstraint* _leadingMarginConstraint;
	NSLayoutConstraint* _trailingMarginConstraint;
	NSTimer* _deferredNoDataTimer;

}

@property (nonatomic,retain) _HKAnnotationColumnLayout * columnLayout;                                      //@synthesize columnLayout=_columnLayout - In the implementation block
@property (nonatomic,retain) _HKDateContentLayout * dateContentLayout;                                      //@synthesize dateContentLayout=_dateContentLayout - In the implementation block
@property (nonatomic,retain) _HKBodyMarginsLayout * bodyMarginsLayout;                                      //@synthesize bodyMarginsLayout=_bodyMarginsLayout - In the implementation block
@property (nonatomic,retain) UIButton * infoButton;                                                         //@synthesize infoButton=_infoButton - In the implementation block
@property (assign,nonatomic) long long context;                                                             //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * leadingMarginConstraint;                                  //@synthesize leadingMarginConstraint=_leadingMarginConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * trailingMarginConstraint;                                 //@synthesize trailingMarginConstraint=_trailingMarginConstraint - In the implementation block
@property (assign,nonatomic,__weak) NSTimer * deferredNoDataTimer;                                          //@synthesize deferredNoDataTimer=_deferredNoDataTimer - In the implementation block
@property (assign,nonatomic,__weak) id<HKInteractiveChartAnnotationViewDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<HKInteractiveChartAnnotationViewDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL showsInfoButton;                                                          //@synthesize showsInfoButton=_showsInfoButton - In the implementation block
-(CGSize)intrinsicContentSize;
-(void)infoButtonPressed:(id)arg1 ;
-(id<HKInteractiveChartAnnotationViewDelegate>)delegate;
-(id)initWithContext:(long long)arg1 ;
-(id<HKInteractiveChartAnnotationViewDataSource>)dataSource;
-(long long)context;
-(void)setInfoButton:(UIButton *)arg1 ;
-(void)setDelegate:(id<HKInteractiveChartAnnotationViewDelegate>)arg1 ;
-(void)setDataSource:(id<HKInteractiveChartAnnotationViewDataSource>)arg1 ;
-(void)layoutSubviews;
-(void)reloadData;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIButton *)infoButton;
-(id)initWithCoder:(id)arg1 ;
-(double)_leadingMargin;
-(double)_trailingMargin;
-(void)_invalidateLayout;
-(void)setContext:(long long)arg1 ;
-(_HKAnnotationColumnLayout *)columnLayout;
-(void)setShowsInfoButton:(BOOL)arg1 ;
-(id)_buildInfoButton;
-(void)setDeferredNoDataTimer:(NSTimer *)arg1 ;
-(void)_configureLayout;
-(void)setColumnLayout:(_HKAnnotationColumnLayout *)arg1 ;
-(void)setDateContentLayout:(_HKDateContentLayout *)arg1 ;
-(_HKDateContentLayout *)dateContentLayout;
-(void)setBodyMarginsLayout:(_HKBodyMarginsLayout *)arg1 ;
-(_HKBodyMarginsLayout *)bodyMarginsLayout;
-(void)_cancelDeferredDataReload;
-(void)_removeViewsForRebuild;
-(BOOL)_dataSourceHasNoData;
-(void)showNoDataStatus;
-(void)_buildStandardAnnotationViews;
-(void)handleCurrentTimeGesture:(id)arg1 ;
-(NSTimer *)deferredNoDataTimer;
-(void)scheduleDeferredDataReload;
-(BOOL)showsInfoButton;
-(NSLayoutConstraint *)leadingMarginConstraint;
-(void)setLeadingMarginConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)trailingMarginConstraint;
-(void)setTrailingMarginConstraint:(NSLayoutConstraint *)arg1 ;
@end

