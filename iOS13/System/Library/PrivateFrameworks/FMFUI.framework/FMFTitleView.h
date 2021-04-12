/*
* Generated on Monday, March 1, 2021 at 2:34:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FMFUI.framework/FMFUI
*/

#import <UIKitCore/UIView.h>

@class UILabel, NSLayoutConstraint, FMFLocation;

@interface FMFTitleView : UIView {

	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	NSLayoutConstraint* _titleBottomConstraint;
	FMFLocation* _location;

}

@property (nonatomic,retain) UILabel * titleLabel;                                    //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                                 //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * titleBottomConstraint;              //@synthesize titleBottomConstraint=_titleBottomConstraint - In the implementation block
@property (nonatomic,retain) FMFLocation * location;                                  //@synthesize location=_location - In the implementation block
-(FMFLocation *)location;
-(void)setLocation:(FMFLocation *)arg1 ;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(UILabel *)subtitleLabel;
-(void)_updateLabels:(id)arg1 ;
-(void)updateLocation:(id)arg1 ;
-(NSLayoutConstraint *)titleBottomConstraint;
-(id)initFromNib;
-(void)setTitleBottomConstraint:(NSLayoutConstraint *)arg1 ;
@end

