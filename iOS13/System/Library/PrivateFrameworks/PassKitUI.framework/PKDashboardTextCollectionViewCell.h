/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setSubtitle:(NSString *)arg1 ;
-(UIColor *)titleColor;
-(void)setTitleColor:(UIColor *)arg1 ;
-(void)setHideDisclosure:(BOOL)arg1 ;
-(double)_maxWidthForTransactionCellInWidth:(double)arg1 ;
-(BOOL)hideDisclosure;
@end

