/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setPrimaryButton:(UIButton *)arg1 ;
-(void)setSecondaryButton:(UIButton *)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)viewDidLoad;
-(UIButton *)primaryButton;
-(UIButton *)secondaryButton;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(id)primaryButtonText;
-(void)_setupPrimaryButton;
-(void)_setupSecondaryButton;
-(void)primaryButtonTapped:(id)arg1 ;
-(id)secondaryButtonText;
-(void)secondaryButtonTapped:(id)arg1 ;
@end

