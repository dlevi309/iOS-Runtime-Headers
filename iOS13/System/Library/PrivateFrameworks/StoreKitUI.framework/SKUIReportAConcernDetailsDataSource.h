/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <UIKit/UITableViewDataSource.h>

@class UITableView, NSString;

@interface SKUIReportAConcernDetailsDataSource : NSObject <UITableViewDataSource> {

	UITableView* _tableView;
	NSString* _placeholder;
	NSString* _selectedReason;
	NSString* _privacyNote;

}

@property (nonatomic,retain) UITableView * tableView;               //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,copy) NSString * placeholder;                  //@synthesize placeholder=_placeholder - In the implementation block
@property (nonatomic,copy) NSString * selectedReason;               //@synthesize selectedReason=_selectedReason - In the implementation block
@property (nonatomic,copy) NSString * privacyNote;                  //@synthesize privacyNote=_privacyNote - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setPlaceholder:(NSString *)arg1 ;
-(UITableView *)tableView;
-(NSString *)placeholder;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(id)initWithTableView:(id)arg1 ;
-(void)setTableView:(UITableView *)arg1 ;
-(NSString *)selectedReason;
-(void)setSelectedReason:(NSString *)arg1 ;
-(void)setPrivacyNote:(NSString *)arg1 ;
-(NSString *)privacyNote;
@end

