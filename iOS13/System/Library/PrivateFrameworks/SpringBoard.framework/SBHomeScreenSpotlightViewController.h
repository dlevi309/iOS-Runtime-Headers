/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(unsigned long long)level;
-(id)initWithDelegate:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(FBDisplayLayoutElement *)displayLayoutElement;
-(unsigned long long)remoteSearchViewPresentationSource;
-(id<SBHomeScreenSpotlightDismissalDelegate>)homescreenSpotlightDelegate;
@end

