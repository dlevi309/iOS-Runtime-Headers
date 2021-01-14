/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class PKWatchHeroImageView, UIImageView, UIImage;

@interface PKWatchDeviceAppCarouselView : UIView {

	PKWatchHeroImageView* _watchDeviceImageView;
	UIImageView* _carouselImageView;
	UIImageView* _appIconImageView;
	UIImage* _appIconImage;

}

@property (nonatomic,retain) UIImage * appIconImage;              //@synthesize appIconImage=_appIconImage - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setAppIconImage:(UIImage *)arg1 ;
-(UIImage *)appIconImage;
-(id)_carouselViewImage;
-(CGSize)_appIconSize;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

