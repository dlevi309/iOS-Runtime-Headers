/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/


@protocol HRWDTableViewSectionDelegate;
@interface HRWDTableViewSection : NSObject {

	id<HRWDTableViewSectionDelegate> _delegate;
	unsigned long long _section;

}

@property (nonatomic,readonly) id<HRWDTableViewSectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned long long section;                             //@synthesize section=_section - In the implementation block
-(void)applicationWillEnterForeground;
-(void)applicationDidEnterBackground;
-(id<HRWDTableViewSectionDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)initWithDelegate:(id)arg1 atSection:(unsigned long long)arg2 ;
-(void)setUpWithTableViewController:(id)arg1 ;
-(void)reloadAnimated:(BOOL)arg1 ;
-(id)viewForHeader:(id)arg1 ;
-(id)titleForHeader;
-(id)viewForFooter:(id)arg1 ;
-(id)titleForFooter;
-(double)heightForHeader;
-(double)heightForFooter;
-(id)cellForRow:(unsigned long long)arg1 table:(id)arg2 ;
-(unsigned long long)numberOfRows;
-(unsigned long long)section;
-(void)accessoryButtonTappedForRow:(unsigned long long)arg1 ;
-(id)willSelectRow:(id)arg1 ;
-(void)didSelectRow:(unsigned long long)arg1 representedByCell:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)deactivate;
-(void)activate;
-(double)estimatedHeightForRow:(unsigned long long)arg1 ;
-(double)heightForRow:(unsigned long long)arg1 ;
@end

