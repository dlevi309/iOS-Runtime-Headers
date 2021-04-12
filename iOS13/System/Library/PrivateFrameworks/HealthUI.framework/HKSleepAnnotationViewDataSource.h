/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <libobjc.A.dylib/HKInteractiveChartAnnotationViewDataSource.h>

@class HKSleepChartPointUserInfo, NSString;

@interface HKSleepAnnotationViewDataSource : NSObject <HKInteractiveChartAnnotationViewDataSource> {

	HKSleepChartPointUserInfo* _sleepChartPointUserInfo;

}

@property (nonatomic,retain) HKSleepChartPointUserInfo * sleepChartPointUserInfo;              //@synthesize sleepChartPointUserInfo=_sleepChartPointUserInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)valueViewForColumnAtIndex:(long long)arg1 orientation:(long long)arg2 ;
-(long long)numberOfValuesForAnnotationView:(id)arg1 ;
-(BOOL)showSeparators;
-(id)dateViewWithOrientation:(long long)arg1 ;
-(id)leftMarginViewWithOrientation:(long long)arg1 ;
-(void)setSleepChartPointUserInfo:(HKSleepChartPointUserInfo *)arg1 ;
-(HKSleepChartPointUserInfo *)sleepChartPointUserInfo;
-(id)_dateGroupWithDate:(id)arg1 orientation:(long long)arg2 ;
-(id)_dateRowWithDate:(id)arg1 ;
-(id)_titleBodyGroupWithTitle:(id)arg1 body:(id)arg2 orientation:(long long)arg3 ;
@end

