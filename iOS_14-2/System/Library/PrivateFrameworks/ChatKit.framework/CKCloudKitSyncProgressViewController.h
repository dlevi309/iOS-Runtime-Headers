/*
* Generated on Thursday, January 14, 2021 at 2:21:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <UIKitCore/UIViewController.h>

@protocol CKCloudKitSyncProgressViewControllerDelegate;
@class IMCloudKitSyncProgress, UIToolbar, UIColor, UILabel, UIButton, UIProgressView;

@interface CKCloudKitSyncProgressViewController : UIViewController {

	BOOL _hidden;
	BOOL _progressLabelIsWrapping;
	id<CKCloudKitSyncProgressViewControllerDelegate> _delegate;
	IMCloudKitSyncProgress* _lastProgress;
	UIToolbar* _toolbar;
	UIColor* _originalProgressTintColor;
	UILabel* _progressLabel;
	UILabel* _userMessageLabel;
	UIButton* _actionButton;
	UIProgressView* _progressBar;

}

@property (nonatomic,retain) IMCloudKitSyncProgress * lastProgress;                                         //@synthesize lastProgress=_lastProgress - In the implementation block
@property (assign,nonatomic,__weak) UIToolbar * toolbar;                                                    //@synthesize toolbar=_toolbar - In the implementation block
@property (nonatomic,copy) UIColor * originalProgressTintColor;                                             //@synthesize originalProgressTintColor=_originalProgressTintColor - In the implementation block
@property (assign,nonatomic) BOOL progressLabelIsWrapping;                                                  //@synthesize progressLabelIsWrapping=_progressLabelIsWrapping - In the implementation block
@property (nonatomic,readonly) UILabel * progressLabel;                                                     //@synthesize progressLabel=_progressLabel - In the implementation block
@property (nonatomic,readonly) UILabel * userMessageLabel;                                                  //@synthesize userMessageLabel=_userMessageLabel - In the implementation block
@property (nonatomic,readonly) UIButton * actionButton;                                                     //@synthesize actionButton=_actionButton - In the implementation block
@property (nonatomic,readonly) UIProgressView * progressBar;                                                //@synthesize progressBar=_progressBar - In the implementation block
@property (assign,nonatomic,__weak) id<CKCloudKitSyncProgressViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isHidden,nonatomic) BOOL hidden;                                                   //@synthesize hidden=_hidden - In the implementation block
@property (assign,nonatomic) BOOL actionButtonEnabled; 
-(UIToolbar *)toolbar;
-(BOOL)isHidden;
-(id)init;
-(id<CKCloudKitSyncProgressViewControllerDelegate>)delegate;
-(id)_createLabel;
-(void)setHidden:(BOOL)arg1 ;
-(void)setDelegate:(id<CKCloudKitSyncProgressViewControllerDelegate>)arg1 ;
-(void)setToolbar:(UIToolbar *)arg1 ;
-(UIButton *)actionButton;
-(UIProgressView *)progressBar;
-(IMCloudKitSyncProgress *)lastProgress;
-(void)_actionButtonWasPressed:(id)arg1 ;
-(void)_addUserMessageLabel;
-(void)_addActionButton;
-(void)_addProgressLabel;
-(void)_addProgressView;
-(void)setOriginalProgressTintColor:(UIColor *)arg1 ;
-(BOOL)_isProgressLabelWrapping;
-(void)setProgressLabelIsWrapping:(BOOL)arg1 ;
-(BOOL)progressLabelIsWrapping;
-(UILabel *)userMessageLabel;
-(UIColor *)originalProgressTintColor;
-(void)updateWithCloudKitProgress:(id)arg1 forceShow:(BOOL)arg2 ;
-(void)setLastProgress:(IMCloudKitSyncProgress *)arg1 ;
-(UILabel *)progressLabel;
-(void)addToToolbar:(id)arg1 ;
-(void)showProgressBarWithIndeterminateProgress:(BOOL)arg1 percentComplete:(double)arg2 ;
-(BOOL)actionButtonEnabled;
-(void)showUserMessageWithString:(id)arg1 showActionButton:(BOOL)arg2 withActionButtonLabel:(id)arg3 ;
-(void)updateWithCloudKitProgress:(id)arg1 ;
-(void)setActionButtonEnabled:(BOOL)arg1 ;
-(void)loadView;
-(void)viewDidLayoutSubviews;
@end

