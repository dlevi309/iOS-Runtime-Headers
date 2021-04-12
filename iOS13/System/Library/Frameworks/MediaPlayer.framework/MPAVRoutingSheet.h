/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/MPAVRoutingViewControllerDelegate.h>

@class UIWindow, UIView, UIButton, MPAVRoutingViewController, NSString;

@interface MPAVRoutingSheet : UIView <MPAVRoutingViewControllerDelegate> {

	UIWindow* _presentationWindow;
	UIView* _backgroundView;
	UIButton* _dismissBackgroundButton;
	UIButton* _dismissControlsViewButton;
	UIView* _controlsView;
	UIButton* _cancelButton;
	MPAVRoutingViewController* _routingViewController;
	/*^block*/id _completionHandler;
	BOOL _mirroringOnly;

}

@property (assign,setter=setAVItemType:,nonatomic) long long avItemType; 
@property (assign,nonatomic) BOOL mirroringOnly;                                      //@synthesize mirroringOnly=_mirroringOnly - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)dismiss;
-(void)tintColorDidChange;
-(id)initWithAVItemType:(long long)arg1 ;
-(void)showInView:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)setAVItemType:(long long)arg1 ;
-(long long)avItemType;
-(void)routingViewController:(id)arg1 didPickRoute:(id)arg2 ;
-(void)routingViewControllerDidUpdateContents:(id)arg1 ;
-(void)routingViewControllerDidShowAirPlayDebugScreen:(id)arg1 ;
-(void)setMirroringOnly:(BOOL)arg1 ;
-(BOOL)mirroringOnly;
-(void)_cancelButtonAction:(id)arg1 ;
-(void)_animateControls:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_updateRoutingSheetFrame;
-(void)_updateDismissButtonText;
-(CGRect)_routingViewFrame;
-(CGRect)_cancelButtonFrame;
-(CGRect)_controlsViewFrame;
-(CGSize)_maxRoutingViewSize;
@end

