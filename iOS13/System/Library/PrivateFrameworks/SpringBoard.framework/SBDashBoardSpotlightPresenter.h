/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SPUIRemoteSearchViewDelegate.h>
#import <libobjc.A.dylib/SBFLegibilitySettingsProviderDelegate.h>
#import <libobjc.A.dylib/CSSpotlightPresenting.h>

@protocol SBFLegibilitySettingsProvider;
@class CSPageViewController, CSCoverSheetViewController, SBDashBoardSpotlightViewController, NSString;

@interface SBDashBoardSpotlightPresenter : NSObject <SPUIRemoteSearchViewDelegate, SBFLegibilitySettingsProviderDelegate, CSSpotlightPresenting> {

	CSCoverSheetViewController* _coverSheetViewController;
	SBDashBoardSpotlightViewController* _spotlightViewController;
	id<SBFLegibilitySettingsProvider> _spotlightLegibilitySettingsProvider;
	CSPageViewController* _todayPageViewController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) CSPageViewController * todayPageViewController;              //@synthesize todayPageViewController=_todayPageViewController - In the implementation block
-(void)providerLegibilitySettingsChanged:(id)arg1 ;
-(void)dismissSearchView;
-(void)launchSpotlightForSourceViewController:(id)arg1 interactive:(BOOL)arg2 ;
-(void)setTodayPageViewController:(CSPageViewController *)arg1 ;
-(id)createSpotlightLegiblitySettingsProvider;
-(void)dismissSpotlightWithCompletion:(/*^block*/id)arg1 ;
-(void)launchSpotlightForSourceViewController:(id)arg1 interactive:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithCoverSheetViewController:(id)arg1 ;
-(void)dismissSpotlight;
-(CSPageViewController *)todayPageViewController;
@end

