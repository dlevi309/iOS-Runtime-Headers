/*
* Generated on Thursday, January 14, 2021 at 2:24:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
*/

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <UIKitCore/UIView.h>

@interface TPBottomBar : UIView {

	long long _orientation;
	long long _style;

}
+(double)defaultHeight;
+(double)defaultHeightForOrientation:(long long)arg1 ;
+(double)defaultHeightForStyle:(long long)arg1 ;
+(double)defaultHeightForStyle:(long long)arg1 orientation:(long long)arg2 ;
+(long long)fullscreenStyle;
+(long long)overlayStyle;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(id)initWithDefaultSize;
-(long long)orientation;
-(void)setOrientation:(long long)arg1 ;
-(id)initWithDefaultSizeForOrientation:(long long)arg1 ;
-(void)setOrientation:(long long)arg1 updateFrame:(BOOL)arg2 ;
@end

