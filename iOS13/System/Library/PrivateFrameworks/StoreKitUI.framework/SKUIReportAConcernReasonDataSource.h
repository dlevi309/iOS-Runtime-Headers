/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <UIKit/UITableViewDataSource.h>

@class UITableView, NSArray, NSString;

@interface SKUIReportAConcernReasonDataSource : NSObject <UITableViewDataSource> {

	UITableView* _tableView;
	NSArray* _reasons;
	NSString* _selectReasonTitle;
	NSString* _selectReasonSubtitle;

}

@property (nonatomic,retain) UITableView * tableView;                    //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,copy) NSArray * reasons;                            //@synthesize reasons=_reasons - In the implementation block
@property (nonatomic,copy) NSString * selectReasonTitle;                 //@synthesize selectReasonTitle=_selectReasonTitle - In the implementation block
@property (nonatomic,copy) NSString * selectReasonSubtitle;              //@synthesize selectReasonSubtitle=_selectReasonSubtitle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSArray *)reasons;
-(void)setReasons:(NSArray *)arg1 ;
-(UITableView *)tableView;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(id)initWithTableView:(id)arg1 ;
-(void)setTableView:(UITableView *)arg1 ;
-(NSString *)selectReasonTitle;
-(void)setSelectReasonTitle:(NSString *)arg1 ;
-(NSString *)selectReasonSubtitle;
-(void)setSelectReasonSubtitle:(NSString *)arg1 ;
@end

