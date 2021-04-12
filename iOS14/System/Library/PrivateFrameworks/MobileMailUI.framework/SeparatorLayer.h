/*
* Generated on Thursday, January 14, 2021 at 2:26:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setAxis:(unsigned long long)arg1 ;
-(unsigned long long)axis;
-(CGSize)intrinsicContentSize;
-(void)setTintColor:(UIColor *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIColor *)tintColor;
@end

