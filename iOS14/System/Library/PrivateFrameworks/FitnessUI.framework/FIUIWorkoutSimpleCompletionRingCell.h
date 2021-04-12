/*
* Generated on Thursday, January 14, 2021 at 2:27:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
*/

#import <UIKitCore/UITableViewCell.h>

@class ARUIRingsView, UIImageView, UIView, UILabel;

@interface FIUIWorkoutSimpleCompletionRingCell : UITableViewCell {

	ARUIRingsView* _ringsView;
	UIImageView* _ringImageView;
	UIImageView* _iconImageView;
	UIView* _lineView;
	UILabel* _typeLabel;

}

@property (nonatomic,retain) ARUIRingsView * ringsView;                //@synthesize ringsView=_ringsView - In the implementation block
@property (nonatomic,retain) UIImageView * ringImageView;              //@synthesize ringImageView=_ringImageView - In the implementation block
@property (nonatomic,retain) UIImageView * iconImageView;              //@synthesize iconImageView=_iconImageView - In the implementation block
@property (nonatomic,retain) UIView * lineView;                        //@synthesize lineView=_lineView - In the implementation block
@property (nonatomic,retain) UILabel * typeLabel;                      //@synthesize typeLabel=_typeLabel - In the implementation block
+(double)preferredHeightForWorkout:(id)arg1 fittingWidth:(double)arg2 ;
-(UIImageView *)iconImageView;
-(UIView *)lineView;
-(void)layoutSubviews;
-(UILabel *)typeLabel;
-(void)setIconImageView:(UIImageView *)arg1 ;
-(void)setTypeLabel:(UILabel *)arg1 ;
-(void)setLineView:(UIView *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UIImageView *)ringImageView;
-(ARUIRingsView *)ringsView;
-(void)configureWithWorkout:(id)arg1 ;
-(void)setRingsView:(ARUIRingsView *)arg1 ;
-(void)setRingImageView:(UIImageView *)arg1 ;
@end

