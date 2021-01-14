/*
* Generated on Thursday, January 14, 2021 at 2:28:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
*/

#import <Stocks/Stocks-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/ChartUpdaterDelegate.h>
#import <libobjc.A.dylib/ChartIntervalButtonRowDelegate.h>
#import <Stocks/StockGraphViewContainer.h>
#import <Stocks/StockUpdateObserver.h>

@protocol StockChartViewDelegate;
@class LoadingLabel, ChartUpdater, ChartIntervalButtonRow, Stock, NSMutableArray, DashedLineView, UILabel, ChartTitleLabel, ChartHUDView, UIView, NSMutableDictionary, StocksViewController, StockChartData, NSError, StockChartDisplayMode, NSArray, NSString;

@interface StockChartView : UIView <ChartUpdaterDelegate, ChartIntervalButtonRowDelegate, StockGraphViewContainer, StockUpdateObserver> {

	LoadingLabel* _loadingLabel;
	ChartUpdater* _chartUpdater;
	ChartIntervalButtonRow* _intervalButtonRow;
	Stock* _stock;
	NSMutableArray* _axisViews;
	NSMutableArray* _xLabelViews;
	NSMutableArray* _yLabelViews;
	DashedLineView* _previousCloseLine;
	UILabel* _previousCloseLabel;
	ChartTitleLabel* _titleView;
	ChartHUDView* _HUDView;
	BOOL _animating;
	BOOL _layoutPending;
	UIView* _chartTopKeyline;
	UIView* _chartBottomKeyline;
	UIView* _xAxisKeyline;
	NSMutableArray* _displayModes;
	NSMutableDictionary* _graphViews;
	BOOL _drawsBottomLine;
	StocksViewController* _controller;
	StockChartData* _chartData;
	NSError* _error;
	StockChartDisplayMode* _currentDisplayMode;
	long long _selectedInterval;
	id<StockChartViewDelegate> _chartViewDelegate;
	long long _preferredInterval;

}

@property (nonatomic,retain) StockChartDisplayMode * currentDisplayMode;                       //@synthesize currentDisplayMode=_currentDisplayMode - In the implementation block
@property (assign,nonatomic,__weak) id<StockChartViewDelegate> chartViewDelegate;              //@synthesize chartViewDelegate=_chartViewDelegate - In the implementation block
@property (assign,nonatomic) long long preferredInterval;                                      //@synthesize preferredInterval=_preferredInterval - In the implementation block
@property (assign,nonatomic,__weak) StocksViewController * controller;                         //@synthesize controller=_controller - In the implementation block
@property (nonatomic,retain) Stock * stock;                                                    //@synthesize stock=_stock - In the implementation block
@property (nonatomic,retain) StockChartData * chartData;                                       //@synthesize chartData=_chartData - In the implementation block
@property (nonatomic,retain) NSError * error;                                                  //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) NSArray * alternateDisplayModes; 
@property (assign,nonatomic) BOOL drawsBottomLine;                                             //@synthesize drawsBottomLine=_drawsBottomLine - In the implementation block
@property (assign,nonatomic) long long selectedInterval;                                       //@synthesize selectedInterval=_selectedInterval - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGGradientRef)LineBackgroundGradient;
-(BOOL)isLoading;
-(void)_layoutSubviews;
-(StockChartData *)chartData;
-(void)setChartData:(StockChartData *)arg1 ;
-(BOOL)isLandscape;
-(Stock *)stock;
-(void)setError:(NSError *)arg1 ;
-(double)horizontalPadding;
-(NSError *)error;
-(void)chartUpdater:(id)arg1 didReceiveStockChartData:(id)arg2 ;
-(void)chartUpdater:(id)arg1 didFailWithError:(id)arg2 ;
-(id)chartUpdater;
-(void)layoutIfNeeded;
-(void)setController:(StocksViewController *)arg1 ;
-(NSString *)description;
-(void)layoutSubviews;
-(void)setFrame:(CGRect)arg1 ;
-(void)forceLayout;
-(void)reloadData;
-(void)resetLocale;
-(void)clearData;
-(double)lineGraphBottomPadding;
-(CGRect)lineGraphFrame;
-(StocksViewController *)controller;
-(void)setNeedsLayout;
-(id)HUDView;
-(void)dealloc;
-(long long)preferredInterval;
-(void)setChartViewDelegate:(id<StockChartViewDelegate>)arg1 ;
-(void)_prepareXAxisLabelsAndPositions;
-(void)_setHourLabels;
-(void)_setDayLabelsWithInterval:(unsigned)arg1 realTimePositions:(BOOL)arg2 ;
-(void)_setMonthAndYearLabels;
-(StockChartDisplayMode *)currentDisplayMode;
-(CGRect)graphViewFrameForMode:(id)arg1 ;
-(double)widestYLabelWidthForMode:(id)arg1 ;
-(void)stockGraphViewReadyForDisplay:(id)arg1 ;
-(void)setStock:(Stock *)arg1 ;
-(BOOL)hadError;
-(id)initWithInitialDisplayMode:(id)arg1 preferredChartInterval:(long long)arg2 stockChartViewDelegate:(id)arg3 ;
-(void)setShowingHUD:(BOOL)arg1 ;
-(void)chartIntervalButtonRow:(id)arg1 didSelectChartInterval:(long long)arg2 ;
-(id<StockChartViewDelegate>)chartViewDelegate;
-(void)createYLabelsForMode:(id)arg1 ;
-(void)addDisplayMode:(id)arg1 ;
-(void)setCurrentDisplayMode:(StockChartDisplayMode *)arg1 ;
-(long long)maxSupportedIntervalFromDesiredInterval:(long long)arg1 ;
-(void)_prepareYAxisLabelsAndPositionsForDisplayMode:(id)arg1 ;
-(id)graphViewForMode:(id)arg1 ;
-(void)enumerateGraphsAndDisplayModesUsingBlock:(/*^block*/id)arg1 ;
-(id)currentGraphView;
-(void)_layoutTopLabelsHidden:(BOOL)arg1 ;
-(void)hideLabelsAxesAndGraphs;
-(void)_setShowingLoadingStatus:(BOOL)arg1 ;
-(void)layoutGraphViews;
-(void)_layoutIntervalButtonRow;
-(BOOL)shouldShowLoadingStatus;
-(void)_layoutVolumeSeparatorLineForGraphRect:(CGRect)arg1 ;
-(void)_layoutYLabels;
-(void)_layoutAxesAndXLabels;
-(void)layoutPreviousClose;
-(BOOL)drawsBottomLine;
-(BOOL)isCurrentChart;
-(void)renderGraphDataIfNeeded;
-(void)updateHUDView;
-(void)renderGraphDataIfNeededForMode:(id)arg1 ;
-(void)hideOtherGraphViews;
-(void)setLabelsAndAxesAlpha:(double)arg1 ;
-(void)layoutLoadingStatus;
-(void)setSelectedInterval:(long long)arg1 ;
-(void)updateChartViewForSelectedInterval;
-(long long)selectedInterval;
-(void)setDrawsBottomLine:(BOOL)arg1 ;
-(NSArray *)alternateDisplayModes;
-(void)reloadDataIfStale;
-(double)_evennessOfValue:(double)arg1 inRange:(double)arg2 ;
-(void)prepareForTransitionToDisplayMode:(id)arg1 ;
-(void)animateTransitionToDisplayMode:(id)arg1 ;
-(void)didTransitionToDisplayMode:(id)arg1 ;
-(void)setPreferredInterval:(long long)arg1 ;
@end

