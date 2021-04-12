/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CheckerBoardServices.framework/CheckerBoardServices
*/

#import <CheckerBoardServices/CBSTableViewController.h>

@class UIButton;

@interface CBSPaneViewController : CBSTableViewController {

	UIButton* _primaryButton;
	UIButton* _secondaryButton;

}

@property (nonatomic,retain) UIButton * primaryButton;                //@synthesize primaryButton=_primaryButton - In the implementation block
@property (nonatomic,retain) UIButton * secondaryButton;              //@synthesize secondaryButton=_secondaryButton - In the implementation block
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)setPrimaryButton:(UIButton *)arg1 ;
-(void)setSecondaryButton:(UIButton *)arg1 ;
-(UIButton *)primaryButton;
-(UIButton *)secondaryButton;
-(id)primaryButtonText;
-(void)_setupPrimaryButton;
-(void)_setupSecondaryButton;
-(void)primaryButtonTapped:(id)arg1 ;
-(id)secondaryButtonText;
-(void)secondaryButtonTapped:(id)arg1 ;
@end

