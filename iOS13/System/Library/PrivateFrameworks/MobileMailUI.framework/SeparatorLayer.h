/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
*/

#import <MobileMailUI/MobileMailUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor;

@interface SeparatorLayer : UIView {

	UIColor* _tintColor;
	unsigned long long _axis;

}

@property (nonatomic,retain) UIColor * tintColor;                  //@synthesize tintColor=_tintColor - In the implementation block
@property (assign,nonatomic) unsigned long long axis;              //@synthesize axis=_axis - In the implementation block
+(double)separatorHeight;
-(unsigned long long)axis;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
-(void)setAxis:(unsigned long long)arg1 ;
@end

