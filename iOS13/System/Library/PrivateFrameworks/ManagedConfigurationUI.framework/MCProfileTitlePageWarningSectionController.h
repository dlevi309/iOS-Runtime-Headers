/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
*/

#import <libobjc.A.dylib/MCProfileTitlePageSectionController.h>

@class UITableView, MCProfileWarning, NSString;

@interface MCProfileTitlePageWarningSectionController : NSObject <MCProfileTitlePageSectionController> {

	UITableView* _tableView;
	MCProfileWarning* _warning;

}

@property (assign,nonatomic,__weak) UITableView * tableView;              //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) MCProfileWarning * warning;                  //@synthesize warning=_warning - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(unsigned long long)numberOfRows;
-(UITableView *)tableView;
-(void)setTableView:(UITableView *)arg1 ;
-(MCProfileWarning *)warning;
-(double)heightForHeader;
-(id)cellForRowAtIndex:(unsigned long long)arg1 ;
-(id)initWithWarning:(id)arg1 ;
-(void)registerCellClassWithTableView:(id)arg1 ;
-(id)titleForHeader;
-(double)heightForRowAtIndex:(unsigned long long)arg1 ;
-(void)setWarning:(MCProfileWarning *)arg1 ;
@end

