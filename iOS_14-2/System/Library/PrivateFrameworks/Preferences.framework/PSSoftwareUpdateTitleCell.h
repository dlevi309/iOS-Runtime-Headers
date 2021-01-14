/*
* Generated on Thursday, January 14, 2021 at 2:20:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

#import <Preferences/Preferences-Structs.h>
#import <Preferences/PSTableCell.h>

@class PSSoftwareUpdateAnimatedIcon, UIImageView, UIProgressView, UILabel, PSWebContainerView, NSLayoutConstraint, UIImage;

@interface PSSoftwareUpdateTitleCell : PSTableCell {

	int _progressStyle;
	PSSoftwareUpdateAnimatedIcon* _animatedGearView;
	BOOL _animatingGearView;
	UIImageView* _gearBackgroundImageView;
	UIProgressView* _progressBar;
	UILabel* _updateStatusLabel;
	PSWebContainerView* _releaseNotesSummaryView;
	NSLayoutConstraint* _updateStatusLabelVerticalConstraint;

}

@property (nonatomic,retain) NSLayoutConstraint * updateStatusLabelVerticalConstraint;              //@synthesize updateStatusLabelVerticalConstraint=_updateStatusLabelVerticalConstraint - In the implementation block
@property (nonatomic,readonly) UIImage * gearBackgroundImage; 
@property (nonatomic,retain) UIImageView * gearBackgroundImageView;                                 //@synthesize gearBackgroundImageView=_gearBackgroundImageView - In the implementation block
@property (nonatomic,readonly) UIProgressView * progressBar;                                        //@synthesize progressBar=_progressBar - In the implementation block
@property (assign,nonatomic) int progressDisplayStyle; 
@property (nonatomic,readonly) UILabel * updateStatusLabel;                                         //@synthesize updateStatusLabel=_updateStatusLabel - In the implementation block
@property (nonatomic,readonly) PSWebContainerView * releaseNotesSummaryView;                        //@synthesize releaseNotesSummaryView=_releaseNotesSummaryView - In the implementation block
+(long long)cellStyle;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)layoutSubviews;
-(void)updateConstraints;
-(void)setProgress:(float)arg1 ;
-(UIProgressView *)progressBar;
-(void)setupViews;
-(void)configureImageView;
-(void)configureUpdateNameLabel:(BOOL)arg1 ;
-(void)configurePublisherLabel:(BOOL)arg1 ;
-(void)configureAnimatedGearViewFromImageSize:(CGSize)arg1 ;
-(void)createGearIconConstraints;
-(id)newProgressBar;
-(void)configureUpdateStatusLabel:(BOOL)arg1 ;
-(void)configureReleaseNotesSummaryView:(BOOL)arg1 ;
-(void)setPublisherText:(id)arg1 ;
-(void)configureProgressBar:(BOOL)arg1 ;
-(id)newGearBackgroundImageView;
-(id)newUpdateStatusLabel;
-(id)newSoftwareUpdateAnimatedIconWithFrame:(CGRect)arg1 ;
-(void)updateProgressTintColor;
-(void)setUpdateName:(id)arg1 ;
-(void)setAnimatingGearView:(BOOL)arg1 ;
-(UIImage *)gearBackgroundImage;
-(double)preferredHeightWithTable:(id)arg1 ;
-(void)setProgressDisplayStyle:(int)arg1 ;
-(int)progressDisplayStyle;
-(void)setReleaseNotesSummary:(id)arg1 ;
-(void)setStatusMessage:(id)arg1 ;
-(UIImageView *)gearBackgroundImageView;
-(void)setGearBackgroundImageView:(UIImageView *)arg1 ;
-(UILabel *)updateStatusLabel;
-(PSWebContainerView *)releaseNotesSummaryView;
-(NSLayoutConstraint *)updateStatusLabelVerticalConstraint;
-(void)setUpdateStatusLabelVerticalConstraint:(NSLayoutConstraint *)arg1 ;
@end

