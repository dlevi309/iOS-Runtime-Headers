/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, UIImage;

@interface PKWatchDeviceImageOverlayView : UIView {

	UIImageView* _watchImageView;
	UIImageView* _overlayImageView;
	UIImage* _overlayImage;

}

@property (nonatomic,retain) UIImage * overlayImage;              //@synthesize overlayImage=_overlayImage - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setOverlayImage:(UIImage *)arg1 ;
-(UIImage *)overlayImage;
-(double)_watchScreenCenterXOffset;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)pk_applyAppearance:(id)arg1 ;
-(id)pk_childrenForAppearance;
@end

