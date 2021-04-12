/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKTableViewCell.h>

@class UILabel, UIImageView;

@interface PKPaymentSetupTableViewCell : PKTableViewCell {

	UILabel* _betaLabel;
	BOOL _showBetaBadge;
	UIImageView* _thumbnailImageView;

}

@property (nonatomic,readonly) UIImageView * thumbnailImageView;              //@synthesize thumbnailImageView=_thumbnailImageView - In the implementation block
@property (assign,nonatomic) BOOL showBetaBadge;                              //@synthesize showBetaBadge=_showBetaBadge - In the implementation block
+(CGSize)defaultImageViewSize;
-(void)prepareForReuse;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UIImageView *)thumbnailImageView;
-(void)setShowBetaBadge:(BOOL)arg1 ;
-(BOOL)showBetaBadge;
@end

