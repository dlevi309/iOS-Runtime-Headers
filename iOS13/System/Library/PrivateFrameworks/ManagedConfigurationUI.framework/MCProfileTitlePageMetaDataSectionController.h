/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
*/

#import <libobjc.A.dylib/MCProfileTitlePageSectionController.h>

@class UITableView, MCProfile, MCProfileTitlePageSettingsIconCell, MCProfileTitlePageTitleCell, MCProfileTitlePageSubtitleCell, MCProfileTitlePageOrganizationCell, NSString;

@interface MCProfileTitlePageMetaDataSectionController : NSObject <MCProfileTitlePageSectionController> {

	UITableView* _tableView;
	MCProfile* _profile;
	MCProfileTitlePageSettingsIconCell* _iconCell;
	MCProfileTitlePageTitleCell* _titleCell;
	MCProfileTitlePageSubtitleCell* _subtitleCell;
	MCProfileTitlePageOrganizationCell* _orgCell;

}

@property (nonatomic,retain) MCProfile * profile;                                        //@synthesize profile=_profile - In the implementation block
@property (assign,nonatomic,__weak) UITableView * tableView;                             //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) MCProfileTitlePageSettingsIconCell * iconCell;              //@synthesize iconCell=_iconCell - In the implementation block
@property (nonatomic,retain) MCProfileTitlePageTitleCell * titleCell;                    //@synthesize titleCell=_titleCell - In the implementation block
@property (nonatomic,retain) MCProfileTitlePageSubtitleCell * subtitleCell;              //@synthesize subtitleCell=_subtitleCell - In the implementation block
@property (nonatomic,retain) MCProfileTitlePageOrganizationCell * orgCell;               //@synthesize orgCell=_orgCell - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(MCProfile *)profile;
-(void)setProfile:(MCProfile *)arg1 ;
-(id)initWithProfile:(id)arg1 ;
-(unsigned long long)numberOfRows;
-(UITableView *)tableView;
-(void)setTableView:(UITableView *)arg1 ;
-(MCProfileTitlePageTitleCell *)titleCell;
-(MCProfileTitlePageSubtitleCell *)subtitleCell;
-(MCProfileTitlePageSettingsIconCell *)iconCell;
-(MCProfileTitlePageOrganizationCell *)orgCell;
-(double)heightForHeader;
-(id)cellForRowAtIndex:(unsigned long long)arg1 ;
-(void)registerCellClassWithTableView:(id)arg1 ;
-(id)titleForHeader;
-(double)heightForRowAtIndex:(unsigned long long)arg1 ;
-(void)setIconCell:(MCProfileTitlePageSettingsIconCell *)arg1 ;
-(void)setTitleCell:(MCProfileTitlePageTitleCell *)arg1 ;
-(void)setSubtitleCell:(MCProfileTitlePageSubtitleCell *)arg1 ;
-(void)setOrgCell:(MCProfileTitlePageOrganizationCell *)arg1 ;
@end

