/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <libobjc.A.dylib/HKInteractiveChartAnnotationViewDataSource.h>

@class HKSleepChartPointUserInfo, NSArray, NSString;

@interface HKSleepAnnotationViewDataSource : NSObject <HKInteractiveChartAnnotationViewDataSource> {

	HKSleepChartPointUserInfo* _sleepChartPointUserInfo;
	NSArray* _titles;
	NSArray* _values;

}

@property (nonatomic,retain) NSArray * titles;                                                 //@synthesize titles=_titles - In the implementation block
@property (nonatomic,retain) NSArray * values;                                                 //@synthesize values=_values - In the implementation block
@property (nonatomic,retain) HKSleepChartPointUserInfo * sleepChartPointUserInfo;              //@synthesize sleepChartPointUserInfo=_sleepChartPointUserInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)values;
-(void)setTitles:(NSArray *)arg1 ;
-(BOOL)showSeparators;
-(long long)numberOfValuesForAnnotationView:(id)arg1 ;
-(id)dateViewWithOrientation:(long long)arg1 ;
-(id)leftMarginViewWithOrientation:(long long)arg1 ;
-(void)setValues:(NSArray *)arg1 ;
-(NSArray *)titles;
-(id)valueViewForColumnAtIndex:(long long)arg1 orientation:(long long)arg2 ;
-(HKSleepChartPointUserInfo *)sleepChartPointUserInfo;
-(id)_dateGroupWithDate:(id)arg1 orientation:(long long)arg2 ;
-(id)_dateRowWithDate:(id)arg1 ;
-(id)_titleBodyGroupWithTitle:(id)arg1 body:(id)arg2 orientation:(long long)arg3 ;
-(void)setSleepChartPointUserInfo:(HKSleepChartPointUserInfo *)arg1 ;
@end

