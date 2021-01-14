/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SPUIRemoteSearchViewDelegate.h>
#import <libobjc.A.dylib/SBFLegibilitySettingsProviderDelegate.h>
#import <libobjc.A.dylib/SBDashBoardSpotlightViewControllerDelegate.h>
#import <libobjc.A.dylib/CSSpotlightPresenting.h>

@protocol SBFDashBoardModalPresenterProtocol, SBFLegibilitySettingsProvider;
@class SBDashBoardSpotlightViewController, NSString;

@interface SBDashBoardSpotlightPresenter : NSObject <SPUIRemoteSearchViewDelegate, SBFLegibilitySettingsProviderDelegate, SBDashBoardSpotlightViewControllerDelegate, CSSpotlightPresenting> {

	id<SBFDashBoardModalPresenterProtocol> _presenterViewController;
	SBDashBoardSpotlightViewController* _spotlightViewController;
	id<SBFLegibilitySettingsProvider> _spotlightLegibilitySettingsProvider;
	unsigned long long _spotlightMultiplexingLevel;
	unsigned long long _remoteSearchViewPresentationSource;
	long long _homeGestureParticipantIdentifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)providerLegibilitySettingsChanged:(id)arg1 ;
-(void)dismissSearchView;
-(void)dismissSpotlightWithCompletion:(/*^block*/id)arg1 ;
-(void)launchSpotlightForSourceViewController:(id)arg1 interactive:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(unsigned long long)spotlightMultiplexingLevelForSpotlightViewController:(id)arg1 ;
-(unsigned long long)remoteSearchViewPresentationSourceForSpotlightViewController:(id)arg1 ;
-(long long)homeGestureParticipantIdentifierForSpotlightViewController:(id)arg1 ;
-(id)initWithPresenterViewController:(id)arg1 spotlightMultiplexingLevel:(unsigned long long)arg2 remoteSearchViewPresentationSource:(unsigned long long)arg3 homeGestureParticipantIdentifier:(long long)arg4 ;
-(id)createSpotlightLegiblitySettingsProvider;
-(void)dismissSpotlight;
-(void)launchSpotlightForSourceViewController:(id)arg1 interactive:(BOOL)arg2 ;
@end

