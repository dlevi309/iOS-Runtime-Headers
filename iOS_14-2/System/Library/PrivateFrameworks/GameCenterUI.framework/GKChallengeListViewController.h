/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GKDashboardCollectionViewController.h>

@interface GKChallengeListViewController : GKDashboardCollectionViewController {

	BOOL _shouldShowPlayForChallenge;

}

@property (assign,nonatomic) BOOL shouldShowPlayForChallenge;              //@synthesize shouldShowPlayForChallenge=_shouldShowPlayForChallenge - In the implementation block
-(void)viewWillLayoutSubviews;
-(void)donePressed:(id)arg1 ;
-(void)configureCollectionView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setupNoContentView:(id)arg1 withError:(id)arg2 ;
-(void)showNoContentPlaceholderForError:(id)arg1 ;
-(void)viewDidLoad;
-(void)configureCloseButton;
-(void)setShouldShowPlayForChallenge:(BOOL)arg1 ;
-(BOOL)shouldShowPlayForChallenge;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithGameRecord:(id)arg1 ;
@end

