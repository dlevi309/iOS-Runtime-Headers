/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKOverlayRoomViewController.h>

@class NSNumber, NSMutableArray, UITapGestureRecognizer;

@interface HKOverlayRoomOxygenSaturationViewController : HKOverlayRoomViewController {

	NSNumber* _preferredOverlayIndex;
	NSMutableArray* _contextDelegates;
	long long _preferredOverlay;
	UITapGestureRecognizer* _overrideOnboardingRecognizer;

}

@property (nonatomic,retain) NSMutableArray * contextDelegates;                                  //@synthesize contextDelegates=_contextDelegates - In the implementation block
@property (nonatomic,readonly) long long preferredOverlay;                                       //@synthesize preferredOverlay=_preferredOverlay - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * overrideOnboardingRecognizer;              //@synthesize overrideOnboardingRecognizer=_overrideOnboardingRecognizer - In the implementation block
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)controllerTitleWithApplicationItems:(id)arg1 ;
-(id)primaryDisplayTypeWithApplicationItems:(id)arg1 ;
-(id)contextSectionsForMode:(long long)arg1 applicationItems:(id)arg2 overlayChartController:(id)arg3 ;
-(id)initialSelectedContextForMode:(long long)arg1 ;
-(id)createViewControllerForMode:(long long)arg1 displayDate:(id)arg2 applicationItems:(id)arg3 ;
-(id)initWithDisplayDate:(id)arg1 applicationItems:(id)arg2 mode:(long long)arg3 preferredOverlay:(long long)arg4 ;
-(void)_installOverrideOnboardingGestureRecognizer;
-(void)_uninstallOverrideOnboardingGestureRecognizer;
-(id)_createOverrideOnboardingGestureRecognizer;
-(void)setOverrideOnboardingRecognizer:(UITapGestureRecognizer *)arg1 ;
-(UITapGestureRecognizer *)overrideOnboardingRecognizer;
-(void)_overrideOnboardingAction:(id)arg1 ;
-(id)_configureContextSectionsForSingleOverlayMode:(long long)arg1 applicationItems:(id)arg2 overlayChartController:(id)arg3 ;
-(id)_configureContextSectionsForFullMode:(long long)arg1 applicationItems:(id)arg2 overlayChartController:(id)arg3 ;
-(long long)preferredOverlay;
-(id)_makeLatestContextForMode:(long long)arg1 applicationItems:(id)arg2 overlayChartController:(id)arg3 ;
-(id)_makeRangeContextForMode:(long long)arg1 applicationItems:(id)arg2 overlayChartController:(id)arg3 ;
-(id)_makeAverageContextForMode:(long long)arg1 applicationItems:(id)arg2 overlayChartController:(id)arg3 contextDelegate:(id*)arg4 ;
-(NSMutableArray *)contextDelegates;
-(id)_makePressureOverlayContextForMode:(long long)arg1 applicationItems:(id)arg2 overlayChartController:(id)arg3 context:(unsigned long long)arg4 contextDelegate:(id*)arg5 ;
-(id)_makeSleepContextForMode:(long long)arg1 applicationItems:(id)arg2 overlayChartController:(id)arg3 ;
-(id)_buildAverageDataSourceWithUnitController:(id)arg1 displayType:(id)arg2 healthStore:(id)arg3 ;
-(/*^block*/id)_buildGranularAverageDataSourceTitleFromTimeScope;
-(void)setContextDelegates:(NSMutableArray *)arg1 ;
@end

