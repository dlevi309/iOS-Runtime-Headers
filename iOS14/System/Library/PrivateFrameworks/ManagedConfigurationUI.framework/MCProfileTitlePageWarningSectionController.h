/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UITableView *)tableView;
-(id)titleForHeader;
-(double)heightForHeader;
-(unsigned long long)numberOfRows;
-(MCProfileWarning *)warning;
-(void)setTableView:(UITableView *)arg1 ;
-(id)cellForRowAtIndex:(unsigned long long)arg1 ;
-(id)initWithWarning:(id)arg1 ;
-(void)registerCellClassWithTableView:(id)arg1 ;
-(double)heightForRowAtIndex:(unsigned long long)arg1 ;
-(void)setWarning:(MCProfileWarning *)arg1 ;
@end

