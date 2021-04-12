/*
* Generated on Monday, March 1, 2021 at 2:32:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
*/

#import <UIKitCore/UINavigationController.h>
#import <UIKit/UINavigationControllerDelegate.h>

@protocol SBUISearchBarControlling;
@class UIViewController, _UILegibilitySettings, SBSearchBar, NSString;

@interface SBUISpotlightBarNavigationController : UINavigationController <UINavigationControllerDelegate> {

	BOOL _pullingToSearch;
	UIViewController*<SBUISearchBarControlling> _searchBarViewController;
	_UILegibilitySettings* _legibilitySettings;

}

@property (readonly) SBSearchBar * navigationBar; 
@property (nonatomic,retain) UIViewController*<SBUISearchBarControlling> searchBarViewController;                         //@synthesize searchBarViewController=_searchBarViewController - In the implementation block
@property (assign,getter=isPullingToSearch,nonatomic) BOOL pullingToSearch;                                               //@synthesize pullingToSearch=_pullingToSearch - In the implementation block
@property (getter=isNavigationBarBottomTrailingCornerRounded) BOOL navigationBarBottomTrailingCornerRounded; 
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;                                                  //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(double)_statusBarHeightAdjustmentForCurrentOrientation;
-(id)initWithRootViewController:(id)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(void)setSearchBarViewController:(UIViewController*<SBUISearchBarControlling>)arg1 ;
-(id)initWithRootViewController:(id)arg1 searchBarViewController:(id)arg2 ;
-(BOOL)isPullingToSearch;
-(UIViewController*<SBUISearchBarControlling>)searchBarViewController;
-(void)setNavigationBarBlurProgress:(double)arg1 animated:(BOOL)arg2 ;
-(BOOL)isNavigationBarBottomTrailingCornerRounded;
-(void)setNavigationBarBottomTrailingCornerRounded:(BOOL)arg1 ;
-(void)setPullingToSearch:(BOOL)arg1 ;
@end

