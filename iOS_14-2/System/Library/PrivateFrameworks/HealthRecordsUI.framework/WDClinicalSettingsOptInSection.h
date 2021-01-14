/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/

#import <HealthRecordsUI/HRWDTableViewSection.h>

@interface WDClinicalSettingsOptInSection : HRWDTableViewSection {

	BOOL _optIn;

}

@property (nonatomic,readonly) BOOL optIn;              //@synthesize optIn=_optIn - In the implementation block
-(BOOL)optIn;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)titleForHeader;
-(id)cellForRow:(unsigned long long)arg1 table:(id)arg2 ;
-(unsigned long long)numberOfRows;
-(void)didSelectRow:(unsigned long long)arg1 representedByCell:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)_fetchOptInStatus;
-(id)_viewDataCellForTableView:(id)arg1 ;
-(id)_optInCellForTableView:(id)arg1 ;
-(void)_handleOptInSwitchChanged:(id)arg1 ;
-(void)_setOptInStatus:(long long)arg1 ;
@end

