/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SchoolTimeSettingsUI.framework/SchoolTimeSettingsUI
*/

#import <SchoolTimeSettingsUI/SCLSpecifierDataSource.h>
#import <libobjc.A.dylib/SCLTimeIntervalDataSourceDelegate.h>

@class NSArray, SCLTimeIntervalDataSource, SCLCustomDayDataSource, PSSpecifier, NSString;

@interface SCLDaySettingsSpecifierSource : SCLSpecifierDataSource <SCLTimeIntervalDataSourceDelegate> {

	NSArray* _currentSpecifiers;
	SCLTimeIntervalDataSource* _repeatedDaySource;
	SCLCustomDayDataSource* _customDayDataSource;
	PSSpecifier* _groupSpecifier;

}

@property (nonatomic,retain) NSArray * currentSpecifiers;                                //@synthesize currentSpecifiers=_currentSpecifiers - In the implementation block
@property (nonatomic,retain) SCLTimeIntervalDataSource * repeatedDaySource;              //@synthesize repeatedDaySource=_repeatedDaySource - In the implementation block
@property (nonatomic,retain) SCLCustomDayDataSource * customDayDataSource;               //@synthesize customDayDataSource=_customDayDataSource - In the implementation block
@property (nonatomic,retain) PSSpecifier * groupSpecifier;                               //@synthesize groupSpecifier=_groupSpecifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(PSSpecifier *)groupSpecifier;
-(void)setGroupSpecifier:(PSSpecifier *)arg1 ;
-(NSArray *)currentSpecifiers;
-(void)dealloc;
-(id)initWithListController:(id)arg1 viewModel:(id)arg2 ;
-(void)updateScheduleType:(unsigned long long)arg1 ;
-(SCLTimeIntervalDataSource *)repeatedDaySource;
-(SCLCustomDayDataSource *)customDayDataSource;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 specifier:(id)arg3 ;
-(long long)repeatScheduleForRepeatingScheduleType:(unsigned long long)arg1 ;
-(void)timeIntervalDataSource:(id)arg1 didUpdateTimeIntervals:(id)arg2 ;
-(void)setCurrentSpecifiers:(NSArray *)arg1 ;
-(void)setRepeatedDaySource:(SCLTimeIntervalDataSource *)arg1 ;
-(void)setCustomDayDataSource:(SCLCustomDayDataSource *)arg1 ;
@end

