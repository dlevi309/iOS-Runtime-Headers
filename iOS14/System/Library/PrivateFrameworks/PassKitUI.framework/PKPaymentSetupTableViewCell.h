/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKTableViewCell.h>

@class UILabel, UIImageView, UIImage;

@interface PKPaymentSetupTableViewCell : PKTableViewCell {

	UILabel* _betaLabel;
	UIImageView* _cardImageView;
	UIImageView* _iconImageView;
	long long _thumbnailType;
	BOOL _showBetaBadge;
	UIImage* _thumbnail;

}

@property (nonatomic,readonly) UIImage * thumbnail;              //@synthesize thumbnail=_thumbnail - In the implementation block
@property (assign,nonatomic) BOOL showBetaBadge;                 //@synthesize showBetaBadge=_showBetaBadge - In the implementation block
+(CGSize)defaultImageViewSize;
-(UIImage *)thumbnail;
-(void)prepareForReuse;
-(void)layoutSubviews;
-(void)setThumbnail:(id)arg1 type:(long long)arg2 animated:(BOOL)arg3 ;
-(void)setShowBetaBadge:(BOOL)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(BOOL)showBetaBadge;
@end

