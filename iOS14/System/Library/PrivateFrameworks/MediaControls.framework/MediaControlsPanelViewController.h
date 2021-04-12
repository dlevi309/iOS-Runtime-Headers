/*
* Generated on Thursday, January 14, 2021 at 2:27:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setBackgroundView:(UIView *)arg1 ;
-(UIView *)backgroundView;
-(void)setRoutingViewController:(MPAVRoutingViewController *)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(MPAVRoutingViewController *)routingViewController;
@end

