/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <CoverSheet/CSCoverSheetViewControllerBase.h>
#import <libobjc.A.dylib/SBFLegibilitySettingsProviderDelegate.h>

@class CSTodayViewController, SBUISpotlightBarNavigationController, SPUISearchBarController, NSString;

@interface CSTodayContentViewController : CSCoverSheetViewControllerBase <SBFLegibilitySettingsProviderDelegate> {

	BOOL _bouncing;
	CSTodayViewController* _todayViewController;
	SBUISpotlightBarNavigationController* _spotlightNavigationController;
	SPUISearchBarController* _spotlightSearchBarViewController;

}

@property (nonatomic,retain) SBUISpotlightBarNavigationController * spotlightNavigationController;              //@synthesize spotlightNavigationController=_spotlightNavigationController - In the implementation block
@property (nonatomic,retain) SPUISearchBarController * spotlightSearchBarViewController;                        //@synthesize spotlightSearchBarViewController=_spotlightSearchBarViewController - In the implementation block
@property (nonatomic,retain) CSTodayViewController * todayViewController;                                       //@synthesize todayViewController=_todayViewController - In the implementation block
@property (assign,getter=isBouncing,nonatomic) BOOL bouncing;                                                   //@synthesize bouncing=_bouncing - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)viewClass;
-(id)init;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)providerLegibilitySettingsChanged:(id)arg1 ;
-(CSTodayViewController *)todayViewController;
-(void)setTodayViewController:(CSTodayViewController *)arg1 ;
-(BOOL)isBouncing;
-(void)aggregateAppearance:(id)arg1 ;
-(void)aggregateBehavior:(id)arg1 ;
-(void)setBouncing:(BOOL)arg1 ;
-(void)_updateSpotlightLegibility;
-(id)_todayContentView;
-(SPUISearchBarController *)spotlightSearchBarViewController;
-(SBUISpotlightBarNavigationController *)spotlightNavigationController;
-(void)setSpotlightNavigationController:(SBUISpotlightBarNavigationController *)arg1 ;
-(void)setSpotlightSearchBarViewController:(SPUISearchBarController *)arg1 ;
@end

