/*
* Generated on Monday, March 1, 2021 at 2:31:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <UIKitCore/UIViewController.h>

@protocol CKCloudKitSyncProgressViewControllerDelegate;
@class IMCloudKitSyncProgress, UIColor, UILabel, UIButton, UIProgressView;

@interface CKCloudKitSyncProgressViewController : UIViewController {

	BOOL _hidden;
	id<CKCloudKitSyncProgressViewControllerDelegate> _delegate;
	IMCloudKitSyncProgress* _lastProgress;
	UIColor* _originalProgressTintColor;
	UILabel* _progressLabel;
	UILabel* _userMessageLabel;
	UIButton* _actionButton;
	UIProgressView* _progressBar;

}

@property (nonatomic,retain) IMCloudKitSyncProgress * lastProgress;                                         //@synthesize lastProgress=_lastProgress - In the implementation block
@property (nonatomic,copy) UIColor * originalProgressTintColor;                                             //@synthesize originalProgressTintColor=_originalProgressTintColor - In the implementation block
@property (nonatomic,readonly) UILabel * progressLabel;                                                     //@synthesize progressLabel=_progressLabel - In the implementation block
@property (nonatomic,readonly) UILabel * userMessageLabel;                                                  //@synthesize userMessageLabel=_userMessageLabel - In the implementation block
@property (nonatomic,readonly) UIButton * actionButton;                                                     //@synthesize actionButton=_actionButton - In the implementation block
@property (nonatomic,readonly) UIProgressView * progressBar;                                                //@synthesize progressBar=_progressBar - In the implementation block
@property (assign,nonatomic,__weak) id<CKCloudKitSyncProgressViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isHidden,nonatomic) BOOL hidden;                                                   //@synthesize hidden=_hidden - In the implementation block
@property (assign,nonatomic) BOOL actionButtonEnabled; 
-(id)init;
-(id<CKCloudKitSyncProgressViewControllerDelegate>)delegate;
-(void)setDelegate:(id<CKCloudKitSyncProgressViewControllerDelegate>)arg1 ;
-(BOOL)isHidden;
-(void)setHidden:(BOOL)arg1 ;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(UILabel *)progressLabel;
-(UIProgressView *)progressBar;
-(UIButton *)actionButton;
-(void)_actionButtonWasPressed:(id)arg1 ;
-(IMCloudKitSyncProgress *)lastProgress;
-(id)_createLabel;
-(void)_addProgressLabel;
-(void)_addProgressView;
-(void)_addUserMessageLabel;
-(void)_addActionButton;
-(void)setOriginalProgressTintColor:(UIColor *)arg1 ;
-(UILabel *)userMessageLabel;
-(UIColor *)originalProgressTintColor;
-(void)setLastProgress:(IMCloudKitSyncProgress *)arg1 ;
-(void)showProgressBarWithIndeterminateProgress:(BOOL)arg1 percentComplete:(double)arg2 ;
-(void)showUserMessageWithString:(id)arg1 showActionButton:(BOOL)arg2 withActionButtonLabel:(id)arg3 ;
-(void)updateWithCloudKitProgress:(id)arg1 ;
-(void)addToToolbar:(id)arg1 ;
-(BOOL)actionButtonEnabled;
-(void)setActionButtonEnabled:(BOOL)arg1 ;
@end

