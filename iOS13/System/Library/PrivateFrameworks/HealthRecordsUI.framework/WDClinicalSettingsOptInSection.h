/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/

#import <HealthRecordsUI/HRWDTableViewSection.h>

@interface WDClinicalSettingsOptInSection : HRWDTableViewSection {

	BOOL _optIn;

}

@property (nonatomic,readonly) BOOL optIn;              //@synthesize optIn=_optIn - In the implementation block
-(unsigned long long)numberOfRows;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)titleForHeader;
-(id)cellForRow:(unsigned long long)arg1 table:(id)arg2 ;
-(void)didSelectRow:(unsigned long long)arg1 representedByCell:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)_setOptInStatus:(long long)arg1 ;
-(void)_fetchOptInStatus;
-(id)_viewDataCellForTableView:(id)arg1 ;
-(id)_optInCellForTableView:(id)arg1 ;
-(BOOL)optIn;
-(void)_handleOptInSwitchChanged:(id)arg1 ;
@end

