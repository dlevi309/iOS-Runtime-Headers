/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
*/

#import <UIKitCore/UIView.h>

@protocol HLPHelpLoadingViewDelegate;
@class UIImageView, UIActivityIndicatorView, UILabel;

@interface HLPHelpLoadingView : UIView {

	UIImageView* _errorImageView;
	UIActivityIndicatorView* _activityIndicatorView;
	BOOL _supportsDarkMode;
	id<HLPHelpLoadingViewDelegate> _delegate;
	UILabel* _errorTitleLabel;
	UILabel* _errorMessageLabel;

}

@property (nonatomic,retain) UIActivityIndicatorView * activityIndicatorView;              //@synthesize activityIndicatorView=_activityIndicatorView - In the implementation block
@property (assign,nonatomic,__weak) id<HLPHelpLoadingViewDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL supportsDarkMode;                                        //@synthesize supportsDarkMode=_supportsDarkMode - In the implementation block
@property (nonatomic,retain) UILabel * errorTitleLabel;                                    //@synthesize errorTitleLabel=_errorTitleLabel - In the implementation block
@property (nonatomic,retain) UILabel * errorMessageLabel;                                  //@synthesize errorMessageLabel=_errorMessageLabel - In the implementation block
-(id)init;
-(id<HLPHelpLoadingViewDelegate>)delegate;
-(void)setDelegate:(id<HLPHelpLoadingViewDelegate>)arg1 ;
-(UIActivityIndicatorView *)activityIndicatorView;
-(void)setActivityIndicatorView:(UIActivityIndicatorView *)arg1 ;
-(void)updateBackgroundColor;
-(void)showActivityIndicator:(BOOL)arg1 ;
-(void)showHelpBookInfo;
-(BOOL)supportsDarkMode;
-(void)setSupportsDarkMode:(BOOL)arg1 ;
-(void)showNoConnectionErrorMessage;
-(void)showDefaultErrorMessage;
-(void)removeErrorView;
-(void)showErrorWithTitle:(id)arg1 message:(id)arg2 ;
-(UILabel *)errorTitleLabel;
-(void)setErrorTitleLabel:(UILabel *)arg1 ;
-(UILabel *)errorMessageLabel;
-(void)setErrorMessageLabel:(UILabel *)arg1 ;
@end

