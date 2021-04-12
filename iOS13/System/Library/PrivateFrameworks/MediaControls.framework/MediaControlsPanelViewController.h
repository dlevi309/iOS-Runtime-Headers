/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/

#import <UIKitCore/UIViewController.h>

@class MPAVRoutingViewController, UIView;

@interface MediaControlsPanelViewController : UIViewController {

	id _delegate;
	MPAVRoutingViewController* _routingViewController;
	UIView* _backgroundView;

}

@property (assign,nonatomic,__weak) id delegate;                                             //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) MPAVRoutingViewController * routingViewController;              //@synthesize routingViewController=_routingViewController - In the implementation block
@property (nonatomic,retain) UIView * backgroundView;                                        //@synthesize backgroundView=_backgroundView - In the implementation block
+(id)panelViewControllerForCoverSheet;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(UIView *)backgroundView;
-(void)setBackgroundView:(UIView *)arg1 ;
-(MPAVRoutingViewController *)routingViewController;
-(void)setRoutingViewController:(MPAVRoutingViewController *)arg1 ;
@end

