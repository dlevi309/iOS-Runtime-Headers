/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBSpotlightMultiplexingViewController.h>

@protocol _SBDashBoardSpotlightViewControllerDelegate;
@interface _SBDashBoardSpotlightViewController : SBSpotlightMultiplexingViewController {

	id<_SBDashBoardSpotlightViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_SBDashBoardSpotlightViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(unsigned long long)remoteSearchViewPresentationSource;
-(id<_SBDashBoardSpotlightViewControllerDelegate>)delegate;
-(void)setDelegate:(id<_SBDashBoardSpotlightViewControllerDelegate>)arg1 ;
-(unsigned long long)level;
-(BOOL)_canShowWhileLocked;
@end

