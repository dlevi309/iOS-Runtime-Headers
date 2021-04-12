/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SchoolTimeSettingsUI.framework/SchoolTimeSettingsUI
*/

#import <SchoolTimeSettingsUI/SCLSpecifierDataSource.h>
#import <libobjc.A.dylib/SCLCustomDayViewControllerDelegate.h>

@class PSSpecifier, NSArray, SCLTimeIntervalsFormatter, NSString;

@interface SCLCustomDayDataSource : SCLSpecifierDataSource <SCLCustomDayViewControllerDelegate> {

	PSSpecifier* _groupSpecifier;
	NSArray* _weekdaySpecifiers;
	SCLTimeIntervalsFormatter* _formatter;

}

@property (nonatomic,retain) PSSpecifier * groupSpecifier;                       //@synthesize groupSpecifier=_groupSpecifier - In the implementation block
@property (nonatomic,retain) NSArray * weekdaySpecifiers;                        //@synthesize weekdaySpecifiers=_weekdaySpecifiers - In the implementation block
@property (nonatomic,retain) SCLTimeIntervalsFormatter * formatter;              //@synthesize formatter=_formatter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SCLTimeIntervalsFormatter *)formatter;
-(PSSpecifier *)groupSpecifier;
-(void)setFormatter:(SCLTimeIntervalsFormatter *)arg1 ;
-(void)setGroupSpecifier:(PSSpecifier *)arg1 ;
-(id)initWithListController:(id)arg1 viewModel:(id)arg2 ;
-(void)customDayViewControllerWillDismiss:(id)arg1 ;
-(id)scheduleIntervalForSpecifier:(id)arg1 ;
-(void)showEditorForSpecifier:(id)arg1 ;
-(void)updateSpecifiersWithCurrentCalendar;
-(NSArray *)weekdaySpecifiers;
-(long long)dayForSpecifier:(id)arg1 ;
-(id)specifierForDay:(long long)arg1 ;
-(void)setWeekdaySpecifiers:(NSArray *)arg1 ;
@end

