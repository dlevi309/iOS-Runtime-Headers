/*
* Generated on Thursday, January 14, 2021 at 2:28:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <UIKitCore/UITableViewCell.h>
#import <libobjc.A.dylib/WFActionDrawerSiriSuggestionsCollectionViewManagerDelegate.h>

@protocol WFActionDrawerSiriSuggestionsTableViewCellDailyRoutineDelegate;
@class WFActionDrawerSection, WFActionDrawerCoordinator, UIViewController, WFModuleTitleView, UIButton, UICollectionView, INIntent, UIImage, WFActionDrawerSiriSuggestionsCollectionViewManager, NSLayoutConstraint;

@interface WFActionDrawerSiriSuggestionsTableViewCell : UITableViewCell <WFActionDrawerSiriSuggestionsCollectionViewManagerDelegate> {

	WFActionDrawerSection* _section;
	WFActionDrawerCoordinator* _coordinator;
	UIViewController* _viewController;
	id<WFActionDrawerSiriSuggestionsTableViewCellDailyRoutineDelegate> _dailyRoutineDelegate;
	WFModuleTitleView* _titleView;
	UIButton* _infoButton;
	UICollectionView* _donationsCollectionView;
	INIntent* _intent;
	UIImage* _icon;
	WFActionDrawerSiriSuggestionsCollectionViewManager* _donationsCollectionViewManager;
	NSLayoutConstraint* _collectionViewHeightConstraint;

}

@property (assign,nonatomic,__weak) WFActionDrawerCoordinator * coordinator;                                                              //@synthesize coordinator=_coordinator - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * viewController;                                                                    //@synthesize viewController=_viewController - In the implementation block
@property (assign,nonatomic,__weak) id<WFActionDrawerSiriSuggestionsTableViewCellDailyRoutineDelegate> dailyRoutineDelegate;              //@synthesize dailyRoutineDelegate=_dailyRoutineDelegate - In the implementation block
@property (assign,nonatomic,__weak) WFModuleTitleView * titleView;                                                                        //@synthesize titleView=_titleView - In the implementation block
@property (assign,nonatomic,__weak) UIButton * infoButton;                                                                                //@synthesize infoButton=_infoButton - In the implementation block
@property (assign,nonatomic,__weak) UICollectionView * donationsCollectionView;                                                           //@synthesize donationsCollectionView=_donationsCollectionView - In the implementation block
@property (nonatomic,retain) INIntent * intent;                                                                                           //@synthesize intent=_intent - In the implementation block
@property (nonatomic,retain) UIImage * icon;                                                                                              //@synthesize icon=_icon - In the implementation block
@property (nonatomic,retain) WFActionDrawerSiriSuggestionsCollectionViewManager * donationsCollectionViewManager;                         //@synthesize donationsCollectionViewManager=_donationsCollectionViewManager - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * collectionViewHeightConstraint;                                                         //@synthesize collectionViewHeightConstraint=_collectionViewHeightConstraint - In the implementation block
@property (nonatomic,readonly) WFActionDrawerSection * section;                                                                           //@synthesize section=_section - In the implementation block
-(INIntent *)intent;
-(void)setViewController:(UIViewController *)arg1 ;
-(WFModuleTitleView *)titleView;
-(void)setCoordinator:(WFActionDrawerCoordinator *)arg1 ;
-(WFActionDrawerSection *)section;
-(UIImage *)icon;
-(void)setIntent:(INIntent *)arg1 ;
-(void)setIcon:(UIImage *)arg1 ;
-(void)setTitleView:(WFModuleTitleView *)arg1 ;
-(void)setInfoButton:(UIButton *)arg1 ;
-(UIViewController *)viewController;
-(UIButton *)infoButton;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(WFActionDrawerCoordinator *)coordinator;
-(void)setCollectionViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)collectionViewHeightConstraint;
-(void)siriSuggestionsCollectionViewManager:(id)arg1 didSelectAction:(id)arg2 ;
-(void)siriSuggestionsCollectionViewManager:(id)arg1 showViewController:(id)arg2 ;
-(void)configureForDailyRoutines:(BOOL)arg1 ;
-(void)configureWithActionDrawerSection:(id)arg1 coordinator:(id)arg2 viewController:(id)arg3 ;
-(void)configureWithActionDrawerSection:(id)arg1 dailyRoutineDelegate:(id)arg2 viewController:(id)arg3 ;
-(void)configureLoading;
-(void)configureWithActionDrawerSection:(id)arg1 ;
-(void)infoButtonPressed;
-(id<WFActionDrawerSiriSuggestionsTableViewCellDailyRoutineDelegate>)dailyRoutineDelegate;
-(void)setDailyRoutineDelegate:(id<WFActionDrawerSiriSuggestionsTableViewCellDailyRoutineDelegate>)arg1 ;
-(UICollectionView *)donationsCollectionView;
-(void)setDonationsCollectionView:(UICollectionView *)arg1 ;
-(WFActionDrawerSiriSuggestionsCollectionViewManager *)donationsCollectionViewManager;
-(void)setDonationsCollectionViewManager:(WFActionDrawerSiriSuggestionsCollectionViewManager *)arg1 ;
@end

