/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI.BaseCollectionViewController.h>
#import <libobjc.A.dylib/PSController.h>

@class _TtC12GameCenterUI18BootstrapPresenter, _TtC12GameCenterUI22PlayerProfilePresenter, PSRootController, PSSpecifier;

@interface GameCenterUI.PlayerProfileViewController : GameCenterUI.BaseCollectionViewController <PSController> {

	 bootstrapPresenter;
	 statePresenter;
	 collectionContent;
	 components;
	 clippingLayer;
	 _rootController;
	 _specifier;

}

@property (retain,nonatomic) _TtC12GameCenterUI18BootstrapPresenter * bootstrapPresenter; 
@property (readonly,nonatomic) _TtC12GameCenterUI22PlayerProfilePresenter * dataPresenter; 
@property (retain,nonatomic) PSRootController * _rootController;                                        //@synthesize rootController=_rootController - In the implementation block
@property (retain,nonatomic) PSSpecifier * _specifier;                                                  //@synthesize specifier=_specifier - In the implementation block
+(void)showProfileFor:(id)arg1 from:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)setSpecifier:(id)arg1 ;
-(id)specifier;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(id)rootController;
-(PSRootController *)_rootController;
-(void)setParentController:(id)arg1 ;
-(void)handleURL:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)viewDidLoad;
-(id)parentController;
-(id)initWithCoder:(id)arg1 ;
-(void)setRootController:(id)arg1 ;
-(_TtC12GameCenterUI18BootstrapPresenter *)bootstrapPresenter;
-(void)setBootstrapPresenter:(_TtC12GameCenterUI18BootstrapPresenter *)arg1 ;
-(_TtC12GameCenterUI22PlayerProfilePresenter *)dataPresenter;
-(void)set_rootController:(PSRootController *)arg1 ;
-(void)set_specifier:(PSSpecifier *)arg1 ;
-(id)readPreferenceValue:(id)arg1 ;
-(void)setPreferenceValue:(id)arg1 specifier:(id)arg2 ;
-(BOOL)canBeShownFromSuspendedState;
-(void)showController:(id)arg1 ;
-(void)showController:(id)arg1 animate:(BOOL)arg2 ;
-(void)viewDidLayoutSubviews;
-(PSSpecifier *)_specifier;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

