/*
* Generated on Monday, March 1, 2021 at 2:32:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(long long)orientation;
-(void)setOrientation:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(id)initWithDefaultSize;
-(id)initWithDefaultSizeForOrientation:(long long)arg1 ;
-(void)setOrientation:(long long)arg1 updateFrame:(BOOL)arg2 ;
@end

