/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithRootViewController:(id)arg1 searchBarViewController:(id)arg2 ;
-(void)setPullingToSearch:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setSearchBarViewController:(UIViewController*<SBUISearchBarControlling>)arg1 ;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(void)setNavigationBarBottomTrailingCornerRounded:(BOOL)arg1 ;
-(id)initWithRootViewController:(id)arg1 ;
-(BOOL)isPullingToSearch;
-(BOOL)_canShowWhileLocked;
-(UIViewController*<SBUISearchBarControlling>)searchBarViewController;
-(_UILegibilitySettings *)legibilitySettings;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setNavigationBarBlurProgress:(double)arg1 animated:(BOOL)arg2 ;
-(double)_statusBarHeightAdjustmentForCurrentOrientation;
-(BOOL)isNavigationBarBottomTrailingCornerRounded;
@end

