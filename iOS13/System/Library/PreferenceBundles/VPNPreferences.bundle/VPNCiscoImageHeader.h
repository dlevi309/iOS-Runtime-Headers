/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PreferenceBundles/VPNPreferences.bundle/VPNPreferences
*/

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PSHeaderFooterView.h>

@class UIImageView;

@interface VPNCiscoImageHeader : UIView <PSHeaderFooterView> {

	UIImageView* _imageView;

}

@property (retain) UIImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
-(void)layoutSubviews;
-(UIImageView *)imageView;
-(void)setImageView:(UIImageView *)arg1 ;
-(id)initWithSpecifier:(id)arg1 ;
-(double)preferredHeightForWidth:(double)arg1 ;
-(void)setImageHidden:(BOOL)arg1 ;
@end

