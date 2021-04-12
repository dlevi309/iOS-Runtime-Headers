/*
* Generated on Thursday, January 14, 2021 at 2:22:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
*/

#import <UIKitCore/UITableViewCell.h>

@class NSLayoutConstraint, UIImageView, UILabel, UIView, _UIUserDefaultsActivityProxy;

@interface _UIActivityUserDefaultsActivityCell : UITableViewCell {

	NSLayoutConstraint* _titleLabelHeightAnchor;
	unsigned long long _sequence;
	UIImageView* _activityImageView;
	UILabel* _activityTitleLabel;
	UIView* _activityImageSlotView;
	UIView* _activityTitleView;
	_UIUserDefaultsActivityProxy* _activityProxy;
	NSLayoutConstraint* _imageViewWidthConstraint;
	NSLayoutConstraint* _imageViewLeadingConstraint;
	NSLayoutConstraint* _labelLeadingConstraint;

}

@property (assign,nonatomic) unsigned long long sequence;                                  //@synthesize sequence=_sequence - In the implementation block
@property (nonatomic,retain) UIImageView * activityImageView;                              //@synthesize activityImageView=_activityImageView - In the implementation block
@property (nonatomic,retain) UILabel * activityTitleLabel;                                 //@synthesize activityTitleLabel=_activityTitleLabel - In the implementation block
@property (nonatomic,retain) UIView * activityImageSlotView;                               //@synthesize activityImageSlotView=_activityImageSlotView - In the implementation block
@property (nonatomic,retain) UIView * activityTitleView;                                   //@synthesize activityTitleView=_activityTitleView - In the implementation block
@property (nonatomic,retain) _UIUserDefaultsActivityProxy * activityProxy;                 //@synthesize activityProxy=_activityProxy - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * imageViewWidthConstraint;                //@synthesize imageViewWidthConstraint=_imageViewWidthConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * imageViewLeadingConstraint;              //@synthesize imageViewLeadingConstraint=_imageViewLeadingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * labelLeadingConstraint;                  //@synthesize labelLeadingConstraint=_labelLeadingConstraint - In the implementation block
+(id)bodyShortFont;
-(void)setLabelLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)labelLeadingConstraint;
-(void)prepareForReuse;
-(NSLayoutConstraint *)imageViewWidthConstraint;
-(void)setImageViewWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setActivityTitleLabel:(UILabel *)arg1 ;
-(void)setActivityImageView:(UIImageView *)arg1 ;
-(void)setActivityImageSlotView:(UIView *)arg1 ;
-(void)setActivityTitleView:(UIView *)arg1 ;
-(UILabel *)activityTitleLabel;
-(UIImageView *)activityImageView;
-(UIView *)activityImageSlotView;
-(UIView *)activityTitleView;
-(void)setActivityProxy:(_UIUserDefaultsActivityProxy *)arg1 ;
-(_UIUserDefaultsActivityProxy *)activityProxy;
-(NSLayoutConstraint *)imageViewLeadingConstraint;
-(void)setImageViewLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(unsigned long long)sequence;
-(void)setSequence:(unsigned long long)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

