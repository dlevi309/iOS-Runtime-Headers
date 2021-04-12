/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)tintColorDidChange;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)routingViewController:(id)arg1 didPickRoute:(id)arg2 ;
-(id)initWithAVItemType:(long long)arg1 ;
-(void)showInView:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_cancelButtonAction:(id)arg1 ;
-(void)_updateRoutingSheetFrame;
-(void)_animateControls:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_updateDismissButtonText;
-(CGRect)_routingViewFrame;
-(CGRect)_cancelButtonFrame;
-(CGRect)_controlsViewFrame;
-(CGSize)_maxRoutingViewSize;
-(long long)avItemType;
-(void)setAVItemType:(long long)arg1 ;
-(void)layoutSubviews;
-(BOOL)mirroringOnly;
-(void)routingViewControllerDidUpdateContents:(id)arg1 ;
-(void)routingViewControllerDidShowAirPlayDebugScreen:(id)arg1 ;
-(void)setMirroringOnly:(BOOL)arg1 ;
-(void)dealloc;
-(void)dismiss;
@end

