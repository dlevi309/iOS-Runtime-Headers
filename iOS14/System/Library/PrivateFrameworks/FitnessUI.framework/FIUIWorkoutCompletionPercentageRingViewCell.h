/*
* Generated on Thursday, January 14, 2021 at 2:27:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
*/

#import <UIKitCore/UITableViewCell.h>

@class HKWorkout, ARUIRingsView, UIImageView, UILabel, FIUIDividerView;

@interface FIUIWorkoutCompletionPercentageRingViewCell : UITableViewCell {

	HKWorkout* _workout;
	double _currentCompletionFactor;
	ARUIRingsView* _ringsView;
	UIImageView* _gradientBackgroundImageView;
	UIImageView* _iconImageView;
	UILabel* _typeLabel;
	UILabel* _secondaryLabel;
	FIUIDividerView* _separatorView;

}

@property (nonatomic,retain) ARUIRingsView * ringsView;                              //@synthesize ringsView=_ringsView - In the implementation block
@property (nonatomic,retain) UIImageView * gradientBackgroundImageView;              //@synthesize gradientBackgroundImageView=_gradientBackgroundImageView - In the implementation block
@property (nonatomic,retain) UIImageView * iconImageView;                            //@synthesize iconImageView=_iconImageView - In the implementation block
@property (nonatomic,retain) UILabel * typeLabel;                                    //@synthesize typeLabel=_typeLabel - In the implementation block
@property (nonatomic,retain) UILabel * secondaryLabel;                               //@synthesize secondaryLabel=_secondaryLabel - In the implementation block
@property (nonatomic,retain) FIUIDividerView * separatorView;                        //@synthesize separatorView=_separatorView - In the implementation block
@property (assign,nonatomic) double currentCompletionFactor;                         //@synthesize currentCompletionFactor=_currentCompletionFactor - In the implementation block
@property (nonatomic,retain) HKWorkout * workout;                                    //@synthesize workout=_workout - In the implementation block
+(double)_ringDiameter;
+(double)_ringTopPadding;
+(double)_ringToTypeSpacing;
+(double)_typeToSecondaryLabelSpacing;
+(double)_secondaryLabelToSeparatorSpacing;
+(double)rowHeightForWorkout:(id)arg1 width:(double)arg2 ;
-(UIImageView *)iconImageView;
-(FIUIDividerView *)separatorView;
-(void)layoutSubviews;
-(HKWorkout *)workout;
-(UILabel *)typeLabel;
-(void)setIconImageView:(UIImageView *)arg1 ;
-(void)setSecondaryLabel:(UILabel *)arg1 ;
-(void)setTypeLabel:(UILabel *)arg1 ;
-(UILabel *)secondaryLabel;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setSeparatorView:(FIUIDividerView *)arg1 ;
-(void)setWorkout:(HKWorkout *)arg1 ;
-(ARUIRingsView *)ringsView;
-(void)setRingsView:(ARUIRingsView *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ringsViewRenderer:(id)arg3 ;
-(void)setWorkout:(id)arg1 fillRing:(BOOL)arg2 ;
-(UIImageView *)gradientBackgroundImageView;
-(void)setCurrentCompletionFactor:(double)arg1 ;
-(void)setWorkoutWithoutFillingRing:(id)arg1 ;
-(void)animateRingWithCompletion:(/*^block*/id)arg1 ;
-(double)currentCompletionFactor;
-(void)setGradientBackgroundImageView:(UIImageView *)arg1 ;
@end

