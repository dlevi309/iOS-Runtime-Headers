/*
* Generated on Thursday, January 14, 2021 at 2:24:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
*/

#import <SiriUI/SiriUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIVisualEffectView, UIView;

@interface SiriUIContentPlatterSeparatorView : UIView {

	long long _separatorType;
	UIVisualEffectView* _backgroundView;
	UIView* _backgroundViewSmall;

}

@property (nonatomic,retain) UIVisualEffectView * backgroundView;              //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) UIView * backgroundViewSmall;                     //@synthesize backgroundViewSmall=_backgroundViewSmall - In the implementation block
@property (assign,nonatomic) long long separatorType;                          //@synthesize separatorType=_separatorType - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundView:(UIVisualEffectView *)arg1 ;
-(UIVisualEffectView *)backgroundView;
-(long long)separatorType;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setSeparatorType:(long long)arg1 ;
-(UIView *)backgroundViewSmall;
-(void)setBackgroundViewSmall:(UIView *)arg1 ;
@end

