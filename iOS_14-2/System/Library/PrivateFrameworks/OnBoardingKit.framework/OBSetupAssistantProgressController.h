/*
* Generated on Thursday, January 14, 2021 at 2:22:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
*/

#import <OnBoardingKit/OBWelcomeController.h>
#import <libobjc.A.dylib/OBSetupAssistantSupport.h>

@class UIProgressView, UILabel, NSLayoutConstraint, NSString;

@interface OBSetupAssistantProgressController : OBWelcomeController <OBSetupAssistantSupport> {

	UIProgressView* _progressBar;
	UILabel* _progressLabel;
	NSLayoutConstraint* _progressLabelTopAnchorConstraint;

}

@property (nonatomic,retain) UIProgressView * progressBar;                                       //@synthesize progressBar=_progressBar - In the implementation block
@property (nonatomic,retain) UILabel * progressLabel;                                            //@synthesize progressLabel=_progressLabel - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * progressLabelTopAnchorConstraint;              //@synthesize progressLabelTopAnchorConstraint=_progressLabelTopAnchorConstraint - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_progressFont;
-(void)setProgressLabel:(UILabel *)arg1 ;
-(double)_progressLabelTopAnchorConstraintConstantWithFont:(id)arg1 ;
-(void)setProgressLabelTopAnchorConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)progressLabelTopAnchorConstraint;
-(void)setProgressText:(id)arg1 ;
-(void)setTitle:(id)arg1 ;
-(void)setProgressBar:(UIProgressView *)arg1 ;
-(void)viewDidLoad;
-(void)setProgress:(double)arg1 ;
-(UIProgressView *)progressBar;
-(id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 ;
-(UILabel *)progressLabel;
-(id)initWithTitle:(id)arg1 detailText:(id)arg2 symbolName:(id)arg3 ;
-(void)traitCollectionDidChange:(id)arg1 ;
@end

