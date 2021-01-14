/*
* Generated on Thursday, January 14, 2021 at 2:24:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthExperienceUI.framework/HealthExperienceUI
*/

#import <UIKit/UITableViewDataSource.h>

@class UITableView;

@interface HealthExperienceUI.SectionedTableViewAdaptor : NSObject <UITableViewDataSource> {

	 tableView;
	 dataProvider;

}

@property (retain,nonatomic) UITableView * tableView; 
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)init;
-(UITableView *)tableView;
-(void)setTableView:(UITableView *)arg1 ;
@end

