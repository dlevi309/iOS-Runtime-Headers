/*
* Generated on Thursday, January 14, 2021 at 2:24:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
*/

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView;

@interface TPLCDBar : UIView {

	UIImageView* _shadowView;

}

@property (readonly) UIImageView * shadowView;              //@synthesize shadowView=_shadowView - In the implementation block
+(double)defaultHeight;
+(double)defaultHeightForOrientation:(long long)arg1 ;
+(id)backgroundImage;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithDefaultSize;
-(UIImageView *)shadowView;
-(void)setOrientation:(long long)arg1 ;
-(id)initWithDefaultSizeForOrientation:(long long)arg1 ;
-(void)setOrientation:(long long)arg1 updateFrame:(BOOL)arg2 ;
@end

