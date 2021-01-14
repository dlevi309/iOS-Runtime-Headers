/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SchoolTimeSettingsUI.framework/SchoolTimeSettingsUI
*/

#import <SchoolTimeSettingsUI/SCLSpecifierDataSource.h>

@class SCLScheduleFormatter, NSArray, PSSpecifier, NSBundle, NSString;

@interface SCLActiveSpecifierDataSource : SCLSpecifierDataSource {

	SCLScheduleFormatter* _formatter;
	NSArray* _permanentSpecifiers;
	PSSpecifier* _scheduleSpecifier;
	NSBundle* _bundle;
	NSString* _table;

}

@property (nonatomic,retain) SCLScheduleFormatter * formatter;              //@synthesize formatter=_formatter - In the implementation block
@property (nonatomic,retain) NSArray * permanentSpecifiers;                 //@synthesize permanentSpecifiers=_permanentSpecifiers - In the implementation block
@property (nonatomic,retain) PSSpecifier * scheduleSpecifier;               //@synthesize scheduleSpecifier=_scheduleSpecifier - In the implementation block
@property (nonatomic,retain) NSBundle * bundle;                             //@synthesize bundle=_bundle - In the implementation block
@property (nonatomic,retain) NSString * table;                              //@synthesize table=_table - In the implementation block
-(NSBundle *)bundle;
-(void)setBundle:(NSBundle *)arg1 ;
-(NSString *)table;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(SCLScheduleFormatter *)formatter;
-(void)setTable:(NSString *)arg1 ;
-(void)setFormatter:(SCLScheduleFormatter *)arg1 ;
-(void)dealloc;
-(id)initWithListController:(id)arg1 viewModel:(id)arg2 ;
-(void)showEditorForSpecifier:(id)arg1 ;
-(id)initWithListController:(id)arg1 viewModel:(id)arg2 options:(unsigned long long)arg3 ;
-(void)setPermanentSpecifiers:(NSArray *)arg1 ;
-(id)valueForScheduleSpecifier:(id)arg1 ;
-(void)removeFooterText;
-(NSArray *)permanentSpecifiers;
-(PSSpecifier *)scheduleSpecifier;
-(id)scheduleSummaryForSpecifier:(id)arg1 ;
-(id)isSchoolTimeActive:(id)arg1 ;
-(void)setSchoolTimeActive:(id)arg1 specifier:(id)arg2 ;
-(void)setScheduleSpecifier:(PSSpecifier *)arg1 ;
@end

