/*
* Generated on Monday, March 1, 2021 at 2:32:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
*/

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView;

@interface TPLCDBar : UIView {

	UIImageView* _shadowView;

}

@property (readonly) UIImageView * shadowView;              //@synthesize shadowView=_shadowView - In the implementation block
+(id)backgroundImage;
+(double)defaultHeight;
+(double)defaultHeightForOrientation:(long long)arg1 ;
-(void)setOrientation:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImageView *)shadowView;
-(id)initWithDefaultSize;
-(id)initWithDefaultSizeForOrientation:(long long)arg1 ;
-(void)setOrientation:(long long)arg1 updateFrame:(BOOL)arg2 ;
@end

