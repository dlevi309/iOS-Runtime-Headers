/*
* Generated on Monday, March 1, 2021 at 2:35:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
*/

#import <TelephonyPreferences/TelephonyPreferences-Structs.h>
#import <TelephonyPreferences/TPSEditingPane.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class UITableView, UITableViewCell, NSString;

@interface TPSDetailPane : TPSEditingPane <UITableViewDelegate, UITableViewDataSource> {

	UITableView* _tableView;
	UITableViewCell* _tableViewCell;

}

@property (nonatomic,readonly) UITableView * tableView;                      //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,readonly) UITableViewCell * tableViewCell;              //@synthesize tableViewCell=_tableViewCell - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UITableView *)tableView;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(UITableViewCell *)tableViewCell;
-(void)setPreferenceValue:(id)arg1 ;
-(id)preferenceValue;
@end

