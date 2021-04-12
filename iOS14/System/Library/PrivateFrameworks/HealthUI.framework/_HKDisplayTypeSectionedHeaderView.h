/*
* Generated on Thursday, January 14, 2021 at 2:24:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>

@class UIView, NSString, UILabel;

@interface _HKDisplayTypeSectionedHeaderView : UICollectionReusableView {

	UIView* _contentView;
	NSString* _title;
	UILabel* _titleLabel;

}

@property (nonatomic,retain) UILabel * titleLabel;              //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIView * contentView;              //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) NSString * title;                  //@synthesize title=_title - In the implementation block
+(id)reuseIdentifier;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)prepareForReuse;
-(void)setContentView:(UIView *)arg1 ;
-(UIView *)contentView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(NSString *)title;
-(void)_updatePreferredTitleFont;
@end

