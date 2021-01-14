/*
* Generated on Thursday, January 14, 2021 at 2:28:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UITableView *)tableView;
-(id)preferenceValue;
-(void)setPreferenceValue:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(UITableViewCell *)tableViewCell;
-(void)layoutSubviews;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
@end

