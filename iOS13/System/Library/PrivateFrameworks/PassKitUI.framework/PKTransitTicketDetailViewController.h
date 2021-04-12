/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <UIKitCore/UITableViewController.h>

@protocol PKTransitTicketDetailDataSource;
@class UIColor;

@interface PKTransitTicketDetailViewController : UITableViewController {

	UIColor* _primaryTextColor;
	UIColor* _secondaryTextColor;
	id<PKTransitTicketDetailDataSource> _dataSource;

}

@property (nonatomic,retain) UIColor * primaryTextColor;                                         //@synthesize primaryTextColor=_primaryTextColor - In the implementation block
@property (nonatomic,retain) UIColor * secondaryTextColor;                                       //@synthesize secondaryTextColor=_secondaryTextColor - In the implementation block
@property (assign,nonatomic,__weak) id<PKTransitTicketDetailDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
-(id<PKTransitTicketDetailDataSource>)dataSource;
-(void)setDataSource:(id<PKTransitTicketDetailDataSource>)arg1 ;
-(void)viewDidLoad;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)setPrimaryTextColor:(UIColor *)arg1 ;
-(void)setSecondaryTextColor:(UIColor *)arg1 ;
-(UIColor *)primaryTextColor;
-(UIColor *)secondaryTextColor;
-(id)initWithTransitTicketDetailDataSource:(id)arg1 ;
-(void)_applyDefaultStaticStylingToCell:(id)arg1 ;
@end

