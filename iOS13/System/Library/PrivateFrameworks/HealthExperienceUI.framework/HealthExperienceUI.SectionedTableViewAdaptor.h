/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthExperienceUI.framework/HealthExperienceUI
*/

#import <UIKit/UITableViewDataSource.h>

@class UITableView;

@interface HealthExperienceUI.SectionedTableViewAdaptor : NSObject <UITableViewDataSource> {

	 tableView;
	 dataProvider;

}

@property (retain,nonatomic) UITableView * tableView; 
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)init;
-(UITableView *)tableView;
-(void)setTableView:(UITableView *)arg1 ;
@end

