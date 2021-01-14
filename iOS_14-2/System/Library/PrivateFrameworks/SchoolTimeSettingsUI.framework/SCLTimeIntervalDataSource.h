/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SchoolTimeSettingsUI.framework/SchoolTimeSettingsUI
*/

#import <SchoolTimeSettingsUI/SCLSpecifierDataSource.h>

@protocol SCLTimeIntervalDataSourceDelegate;
@class SCLTimeIntervalModel, NSMutableArray, NSArray, SCLScheduleTimeFormatter;

@interface SCLTimeIntervalDataSource : SCLSpecifierDataSource {

	id<SCLTimeIntervalDataSourceDelegate> _delegate;
	SCLTimeIntervalModel* _model;
	NSMutableArray* _intervalGroupSpecifiers;
	NSArray* _addIntervalGroupSpecifiers;
	SCLScheduleTimeFormatter* _scheduleTimeFormatter;

}

@property (nonatomic,readonly) SCLTimeIntervalModel * model;                                     //@synthesize model=_model - In the implementation block
@property (nonatomic,readonly) NSMutableArray * intervalGroupSpecifiers;                         //@synthesize intervalGroupSpecifiers=_intervalGroupSpecifiers - In the implementation block
@property (nonatomic,readonly) NSArray * addIntervalGroupSpecifiers;                             //@synthesize addIntervalGroupSpecifiers=_addIntervalGroupSpecifiers - In the implementation block
@property (nonatomic,readonly) SCLScheduleTimeFormatter * scheduleTimeFormatter;                 //@synthesize scheduleTimeFormatter=_scheduleTimeFormatter - In the implementation block
@property (nonatomic,copy) NSArray * timeIntervals; 
@property (assign,nonatomic,__weak) id<SCLTimeIntervalDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)addInterval:(id)arg1 ;
-(SCLTimeIntervalModel *)model;
-(id<SCLTimeIntervalDataSourceDelegate>)delegate;
-(void)setDelegate:(id<SCLTimeIntervalDataSourceDelegate>)arg1 ;
-(void)loadSpecifiers;
-(NSArray *)timeIntervals;
-(SCLScheduleTimeFormatter *)scheduleTimeFormatter;
-(id)initWithListController:(id)arg1 timeIntervals:(id)arg2 ;
-(void)setTimeIntervals:(NSArray *)arg1 ;
-(void)model:(id)arg1 didAddIntervalAtIndexes:(id)arg2 ;
-(void)applySpecifiers;
-(void)setTimeInterval:(id)arg1 forSpecifier:(id)arg2 ;
-(void)configureSpecifier:(id)arg1 forIndex:(unsigned long long)arg2 ;
-(id)intervalSpecifiers;
-(void)removeIntervalForSpecifier:(id)arg1 ;
-(unsigned long long)modelIndexForSpecifier:(id)arg1 ;
-(void)model:(id)arg1 didUpdateIntervalAtIndex:(unsigned long long)arg2 ;
-(void)model:(id)arg1 didDeleteIntervalAtIndex:(unsigned long long)arg2 ;
-(id)createSpecifiersForIntervalsAtIndex:(unsigned long long)arg1 ;
-(void)reconfigureAllSpecifiers;
-(void)notifyDelegateOfModelUpdate;
-(NSMutableArray *)intervalGroupSpecifiers;
-(NSArray *)addIntervalGroupSpecifiers;
@end

