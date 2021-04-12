/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKDashboardCollectionViewCell.h>

@class UILabel, UIImageView, NSString, UIColor;

@interface PKDashboardTextCollectionViewCell : PKDashboardCollectionViewCell {

	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIImageView* _disclosureView;
	BOOL _hideDisclosure;
	NSString* _title;
	NSString* _subtitle;
	UIColor* _titleColor;

}

@property (nonatomic,copy) NSString * title;                    //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                 //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,retain) UIColor * titleColor;              //@synthesize titleColor=_titleColor - In the implementation block
@property (assign,nonatomic) BOOL hideDisclosure;               //@synthesize hideDisclosure=_hideDisclosure - In the implementation block
-(UIColor *)titleColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSString *)subtitle;
-(void)setTitle:(NSString *)arg1 ;
-(void)setHideDisclosure:(BOOL)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(double)_maxWidthForTransactionCellInWidth:(double)arg1 ;
-(BOOL)hideDisclosure;
-(NSString *)title;
-(void)setTitleColor:(UIColor *)arg1 ;
@end

