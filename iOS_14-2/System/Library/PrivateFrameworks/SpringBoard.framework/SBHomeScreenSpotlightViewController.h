/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBSpotlightMultiplexingViewController.h>

@protocol SBHomeScreenSpotlightDismissalDelegate;
@class FBDisplayLayoutElement;

@interface SBHomeScreenSpotlightViewController : SBSpotlightMultiplexingViewController {

	id<SBHomeScreenSpotlightDismissalDelegate> _homescreenSpotlightDelegate;
	FBDisplayLayoutElement* _displayLayoutElement;

}

@property (nonatomic,__weak,readonly) id<SBHomeScreenSpotlightDismissalDelegate> homescreenSpotlightDelegate;              //@synthesize homescreenSpotlightDelegate=_homescreenSpotlightDelegate - In the implementation block
@property (nonatomic,readonly) FBDisplayLayoutElement * displayLayoutElement;                                              //@synthesize displayLayoutElement=_displayLayoutElement - In the implementation block
-(unsigned long long)remoteSearchViewPresentationSource;
-(void)viewWillAppear:(BOOL)arg1 ;
-(unsigned long long)level;
-(id)initWithDelegate:(id)arg1 ;
-(FBDisplayLayoutElement *)displayLayoutElement;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id<SBHomeScreenSpotlightDismissalDelegate>)homescreenSpotlightDelegate;
@end

