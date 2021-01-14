/*
* Generated on Thursday, January 14, 2021 at 2:28:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TestFlightCore.framework/TestFlightCore
*/

#import <TestFlightCore/TestFlightCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/TFImageView.h>

@class UIImageView, UILabel, TFAppLockupViewSpecification, NSString;

@interface TFAppLockupView : UIView <TFImageView> {

	UIImageView* _iconView;
	UILabel* _titleLabel;
	UILabel* _primarySubtitleLabel;
	UILabel* _secondarySubtitleLabel;
	TFAppLockupViewSpecification* _specification;

}

@property (nonatomic,retain) TFAppLockupViewSpecification * specification;              //@synthesize specification=_specification - In the implementation block
@property (nonatomic,readonly) UIImageView * iconView;                                  //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                                    //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * primarySubtitleLabel;                          //@synthesize primarySubtitleLabel=_primarySubtitleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * secondarySubtitleLabel;                        //@synthesize secondarySubtitleLabel=_secondarySubtitleLabel - In the implementation block
@property (nonatomic,readonly) CGSize displayedIconSize; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UILabel *)titleLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(TFAppLockupViewSpecification *)specification;
-(void)setSpecification:(TFAppLockupViewSpecification *)arg1 ;
-(void)layoutSubviews;
-(UIImageView *)iconView;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setImage:(id)arg1 animated:(BOOL)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_prepareForDisplayWithTraitCollection:(id)arg1 ;
-(UILabel *)primarySubtitleLabel;
-(UILabel *)secondarySubtitleLabel;
-(void)_styleSubviews;
-(void)_layoutLabelsInLayoutBounds:(CGRect)arg1 ;
-(CGSize)displayedIconSize;
@end

