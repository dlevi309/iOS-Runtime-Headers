/*
* Generated on Thursday, January 14, 2021 at 2:26:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setTodayViewController:(CSTodayViewController *)arg1 ;
-(void)providerLegibilitySettingsChanged:(id)arg1 ;
-(CSTodayViewController *)todayViewController;
-(id)init;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)aggregateBehavior:(id)arg1 ;
-(id)_todayContentView;
-(void)aggregateAppearance:(id)arg1 ;
-(SBUISpotlightBarNavigationController *)spotlightNavigationController;
-(void)viewDidLoad;
-(BOOL)isBouncing;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setSpotlightSearchBarViewController:(SPUISearchBarController *)arg1 ;
-(void)setBouncing:(BOOL)arg1 ;
-(SPUISearchBarController *)spotlightSearchBarViewController;
-(void)_updateSpotlightLegibility;
-(void)setSpotlightNavigationController:(SBUISpotlightBarNavigationController *)arg1 ;
@end

