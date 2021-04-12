/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIVisualEffectView, UIView, UIColor;

@interface AKToolbarBackgroundView : UIView {

	UIVisualEffectView* _visualEffectView;
	BOOL _translucent;
	UIView* _separatorLine;
	UIColor* _separatorColor;
	long long _blurStyle;

}

@property (nonatomic,retain) UIView * separatorLine;                             //@synthesize separatorLine=_separatorLine - In the implementation block
@property (nonatomic,retain) UIColor * separatorColor;                           //@synthesize separatorColor=_separatorColor - In the implementation block
@property (assign,getter=isTranslucent,nonatomic) BOOL translucent;              //@synthesize translucent=_translucent - In the implementation block
@property (assign,nonatomic) long long blurStyle;                                //@synthesize blurStyle=_blurStyle - In the implementation block
-(void)setOpaque:(BOOL)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isTranslucent;
-(void)setTranslucent:(BOOL)arg1 ;
-(UIColor *)separatorColor;
-(void)setBackgroundImage:(id)arg1 forToolbarPosition:(long long)arg2 barMetrics:(long long)arg3 ;
-(void)setShadowImage:(id)arg1 forToolbarPosition:(long long)arg2 ;
-(void)setSeparatorColor:(UIColor *)arg1 ;
-(long long)blurStyle;
-(void)setBlurStyle:(long long)arg1 ;
-(UIView *)separatorLine;
-(void)setSeparatorLine:(UIView *)arg1 ;
-(void)_hostSeparatorInView:(id)arg1 ;
-(void)updateSeparatorVisibility;
@end

