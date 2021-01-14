/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBHHomeScreenUsageMonitorObserver.h>

@protocol SBProactiveHomeScreenUsageObserverDelegate;
@class ATXHomeScreenPrediction, SBHIconManager, NSString;

@interface SBProactiveHomeScreenUsageObserver : NSObject <SBHHomeScreenUsageMonitorObserver> {

	ATXHomeScreenPrediction* _currentPrediction;
	id<SBProactiveHomeScreenUsageObserverDelegate> _delegate;
	SBHIconManager* _iconManager;

}

@property (nonatomic,readonly) SBHIconManager * iconManager;                                              //@synthesize iconManager=_iconManager - In the implementation block
@property (nonatomic,retain) ATXHomeScreenPrediction * currentPrediction;                                 //@synthesize currentPrediction=_currentPrediction - In the implementation block
@property (assign,nonatomic,__weak) id<SBProactiveHomeScreenUsageObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(ATXHomeScreenPrediction *)currentPrediction;
-(void)pushCurrentDockConfiguration;
-(id<SBProactiveHomeScreenUsageObserverDelegate>)delegate;
-(void)iconModelDidLayout:(id)arg1 ;
-(id)iconModel;
-(SBHIconManager *)iconManager;
-(id)rootFolder;
-(id)proactiveWidgetForWidget:(id)arg1 ofIcon:(id)arg2 ;
-(id)proactiveStackForWidgetIcon:(id)arg1 atIndex:(unsigned long long)arg2 gridCellInfo:(id)arg3 ;
-(void)homeScreenUsageAggregator:(id)arg1 didNoteDataSourceDidAppear:(id)arg2 forWidgetIcon:(id)arg3 ;
-(void)setDelegate:(id<SBProactiveHomeScreenUsageObserverDelegate>)arg1 ;
-(void)homeScreenUsageAggregator:(id)arg1 didNoteCurrentPageIndexChanged:(unsigned long long)arg2 ;
-(void)logTodayViewDidAppear;
-(void)setCurrentPrediction:(ATXHomeScreenPrediction *)arg1 ;
-(id)proactiveWidgetForIconDataSource:(id)arg1 ofIcon:(id)arg2 ;
-(void)homeScreenUsageAggregator:(id)arg1 didNoteDataSourceDidDisappear:(id)arg2 forWidgetIcon:(id)arg3 ;
-(void)deviceLockStateDidChange:(id)arg1 ;
-(void)pushCurrentTodayConfiguration;
-(id)widgetIdentifiablesDictionaryForIconListModel:(id)arg1 ;
-(void)pushCurrentHomeScreenPagesConfiguration;
-(void)homeScreenUsageAggregatorDidNoteHomeScreenLayoutChanged:(id)arg1 ;
-(void)homeScreenUsageAggregator:(id)arg1 didNoteWidgetIconStackChangedActiveWidget:(id)arg2 ;
-(void)homeScreenUsageAggregator:(id)arg1 didNoteUserTappedWidgetIcon:(id)arg2 ;
-(void)homeScreenUsageAggregator:(id)arg1 didNoteRootControllerWillAppearWithPageIndex:(unsigned long long)arg2 ;
-(void)pushCurrentHomeScreenConfiguration;
-(void)logHomeScreenPageDidAppearWithPageIndex:(unsigned long long)arg1 ;
-(id)initWithIconManager:(id)arg1 ;
@end

