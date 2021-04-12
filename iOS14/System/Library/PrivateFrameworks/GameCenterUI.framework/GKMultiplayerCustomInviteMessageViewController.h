/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol GKMultiplayerCustomInviteMessageViewControllerDelegate;
@class NSObject, UITextField, UIButton, UIVisualEffectView, NSString;

@interface GKMultiplayerCustomInviteMessageViewController : UIViewController <UITextFieldDelegate> {

	NSObject*<GKMultiplayerCustomInviteMessageViewControllerDelegate> _delegate;
	UITextField* _messageTextField;
	UIButton* _doneButton;
	UIVisualEffectView* _backgroundEffectView;

}

@property (nonatomic,retain) UITextField * messageTextField;                                                                 //@synthesize messageTextField=_messageTextField - In the implementation block
@property (nonatomic,retain) UIButton * doneButton;                                                                          //@synthesize doneButton=_doneButton - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * backgroundEffectView;                                                      //@synthesize backgroundEffectView=_backgroundEffectView - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<GKMultiplayerCustomInviteMessageViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * message; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIButton *)doneButton;
-(void)setMessage:(NSString *)arg1 ;
-(void)setDoneButton:(UIButton *)arg1 ;
-(NSString *)message;
-(void)donePressed:(id)arg1 ;
-(NSObject*<GKMultiplayerCustomInviteMessageViewControllerDelegate>)delegate;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(UITextField *)messageTextField;
-(void)setMessageTextField:(UITextField *)arg1 ;
-(void)setDelegate:(NSObject*<GKMultiplayerCustomInviteMessageViewControllerDelegate>)arg1 ;
-(id)blurEffectForTraitCollection:(id)arg1 ;
-(void)viewDidLoad;
-(UIVisualEffectView *)backgroundEffectView;
-(void)setBackgroundEffectView:(UIVisualEffectView *)arg1 ;
@end

