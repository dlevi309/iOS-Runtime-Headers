/*
* Generated on Thursday, January 14, 2021 at 2:28:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchToShareCore.framework/SearchToShareCore
*/

#import <SearchToShareCore/SearchToShareCore-Structs.h>
#import <SearchToShareCore/STSImageCell.h>

@class UIButton, UIView, UILabel, UIImageView, NSMutableArray, UIImage, NSString;

@interface STSVideoCell : STSImageCell {

	UIButton* _playButton;
	UIView* _footerContainer;
	UILabel* _titleLabel;
	UIImageView* _providerIconView;
	UILabel* _subtitleLabel;
	UILabel* _providerLabel;
	UILabel* _durationLabel;
	NSMutableArray* _constraints;
	/*^block*/id _playButtonAction;

}

@property (nonatomic,retain) UIImage * providerIcon; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * subtitle; 
@property (nonatomic,copy) NSString * providerName; 
@property (nonatomic,copy) NSString * duration; 
@property (nonatomic,copy) id playButtonAction;                   //@synthesize playButtonAction=_playButtonAction - In the implementation block
-(void)setDuration:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSString *)subtitle;
-(void)setTitle:(NSString *)arg1 ;
-(void)prepareForReuse;
-(void)layoutSubviews;
-(void)updateConstraints;
-(void)setFrame:(CGRect)arg1 ;
-(void)setImage:(id)arg1 animated:(BOOL)arg2 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(double)imageAspectRatio;
-(void)setProviderName:(NSString *)arg1 ;
-(NSString *)duration;
-(NSString *)title;
-(NSString *)providerName;
-(UIImage *)providerIcon;
-(void)setProviderIcon:(UIImage *)arg1 ;
-(void)_didPressPlay;
-(void)_updateHiddenViewsAnimated:(BOOL)arg1 ;
-(void)setPlayButtonAction:(id)arg1 ;
-(id)playButtonAction;
@end

