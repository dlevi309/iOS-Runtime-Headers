/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
*/

#import <OnBoardingKit/OBWelcomeController.h>

@class UIProgressView, UILabel;

@interface OBSetupAssistantProgressController : OBWelcomeController {

	UIProgressView* _progressBar;
	UILabel* _progressLabel;

}

@property (nonatomic,retain) UIProgressView * progressBar;              //@synthesize progressBar=_progressBar - In the implementation block
@property (nonatomic,retain) UILabel * progressLabel;                   //@synthesize progressLabel=_progressLabel - In the implementation block
-(void)setTitle:(id)arg1 ;
-(void)setProgress:(double)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLoad;
-(id)initWithTitle:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)setProgressLabel:(UILabel *)arg1 ;
-(UILabel *)progressLabel;
-(id)_progressFont;
-(void)setProgressBar:(UIProgressView *)arg1 ;
-(UIProgressView *)progressBar;
-(void)setProgressText:(id)arg1 ;
@end

