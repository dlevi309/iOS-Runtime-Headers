/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel;

@interface PXPeopleProgressFooterView : UIView {

	BOOL _usesEmphasizedTitle;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;

}

@property (nonatomic,retain) UILabel * titleLabel;                  //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;               //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (assign,nonatomic) BOOL usesEmphasizedTitle;              //@synthesize usesEmphasizedTitle=_usesEmphasizedTitle - In the implementation block
-(void)_setupConstraints;
-(UILabel *)titleLabel;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setUsesEmphasizedTitle:(BOOL)arg1 ;
-(BOOL)usesEmphasizedTitle;
-(UILabel *)subtitleLabel;
-(void)_setupViews;
-(double)preferredHeightForWidth:(double)arg1 ;
@end

