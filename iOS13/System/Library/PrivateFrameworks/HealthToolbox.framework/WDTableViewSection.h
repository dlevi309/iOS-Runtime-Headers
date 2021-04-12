/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/


@protocol WDTableViewSectionDelegate;
@interface WDTableViewSection : NSObject {

	id<WDTableViewSectionDelegate> _delegate;
	unsigned long long _section;

}

@property (nonatomic,readonly) id<WDTableViewSectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned long long section;                           //@synthesize section=_section - In the implementation block
-(id<WDTableViewSectionDelegate>)delegate;
-(unsigned long long)section;
-(unsigned long long)numberOfRows;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)activate;
-(void)deactivate;
-(double)estimatedHeightForRow:(unsigned long long)arg1 ;
-(double)heightForRow:(unsigned long long)arg1 ;
-(void)applicationWillEnterForeground;
-(void)applicationDidEnterBackground;
-(double)heightForHeader;
-(id)titleForHeader;
-(id)initWithDelegate:(id)arg1 atSection:(unsigned long long)arg2 ;
-(void)setUpWithTableViewController:(id)arg1 ;
-(void)reloadAnimated:(BOOL)arg1 ;
-(id)viewForHeader:(id)arg1 ;
-(id)viewForFooter:(id)arg1 ;
-(id)titleForFooter;
-(double)heightForFooter;
-(void)accessoryButtonTappedForRow:(unsigned long long)arg1 ;
-(id)cellForRow:(unsigned long long)arg1 table:(id)arg2 ;
-(id)willSelectRow:(id)arg1 ;
-(void)didSelectRow:(unsigned long long)arg1 representedByCell:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
@end

