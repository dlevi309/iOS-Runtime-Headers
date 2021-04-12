/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKDashboardCollectionViewCell.h>

@class UIImageView, UILabel, UIImage, NSString;

@interface PKDashboardStackedImageCollectionViewCell : PKDashboardCollectionViewCell {

	UIImageView* _iconImageView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UILabel* _tertiaryLabel;
	UIImage* _icon;
	NSString* _title;
	NSString* _subtitle;
	NSString* _tertiaryText;

}

@property (nonatomic,retain) UIImage * icon;                     //@synthesize icon=_icon - In the implementation block
@property (nonatomic,copy) NSString * title;                     //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                  //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) NSString * tertiaryText;              //@synthesize tertiaryText=_tertiaryText - In the implementation block
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setSubtitle:(NSString *)arg1 ;
-(UIImage *)icon;
-(void)setIcon:(UIImage *)arg1 ;
-(void)setTertiaryText:(NSString *)arg1 ;
-(double)_maxWidthForTransactionCellInWidth:(double)arg1 ;
-(double)_contentHeightWithWidth:(double)arg1 ;
-(NSString *)tertiaryText;
@end

