/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, UIImage;

@interface PKWatchHeroCardExplainationHeaderView : UIView {

	BOOL _isCompactWatch;
	UIImageView* _watchDeviceImageView;
	UIImageView* _watchWallpaperImageView;
	BOOL _useCompactLayout;
	UIImageView* _cardImageView;

}

@property (nonatomic,retain) UIImage * cardImage; 
@property (nonatomic,readonly) UIImageView * cardImageView;              //@synthesize cardImageView=_cardImageView - In the implementation block
@property (assign,nonatomic) BOOL useCompactLayout;                      //@synthesize useCompactLayout=_useCompactLayout - In the implementation block
+(CGSize)recommendedCardImageSize;
+(CGSize)watchDeviceImageSize;
+(BOOL)isCompactWatch;
+(CGSize)wallpaperImageSize:(BOOL)arg1 ;
-(id)initWithImage:(id)arg1 ;
-(void)setCardImage:(UIImage *)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setUseCompactLayout:(BOOL)arg1 ;
-(UIImageView *)cardImageView;
-(BOOL)useCompactLayout;
-(id)watchDeviceImage;
-(id)bridgeWallpaperImage;
-(id)bridgeHeroImage;
-(UIImage *)cardImage;
@end

