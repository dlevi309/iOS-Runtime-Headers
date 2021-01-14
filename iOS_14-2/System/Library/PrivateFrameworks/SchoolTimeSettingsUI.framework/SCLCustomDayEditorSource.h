/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SchoolTimeSettingsUI.framework/SchoolTimeSettingsUI
*/

#import <SchoolTimeSettingsUI/SCLSpecifierDataSource.h>
#import <libobjc.A.dylib/SCLTimeIntervalDataSourceDelegate.h>

@class SCLTimeIntervalDataSource, NSString;

@interface SCLCustomDayEditorSource : SCLSpecifierDataSource <SCLTimeIntervalDataSourceDelegate> {

	long long _day;
	SCLTimeIntervalDataSource* _timeSource;

}

@property (nonatomic,readonly) long long day;                                     //@synthesize day=_day - In the implementation block
@property (nonatomic,retain) SCLTimeIntervalDataSource * timeSource;              //@synthesize timeSource=_timeSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)day;
-(SCLTimeIntervalDataSource *)timeSource;
-(void)setTimeSource:(SCLTimeIntervalDataSource *)arg1 ;
-(void)timeIntervalDataSource:(id)arg1 didUpdateTimeIntervals:(id)arg2 ;
-(id)initWithListController:(id)arg1 viewModel:(id)arg2 day:(long long)arg3 title:(id)arg4 ;
-(void)setEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)enabledForSpecifier:(id)arg1 ;
@end

