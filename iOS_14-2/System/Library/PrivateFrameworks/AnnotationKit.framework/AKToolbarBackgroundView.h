/*
* Generated on Thursday, January 14, 2021 at 2:27:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setTranslucent:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isTranslucent;
-(void)setBackgroundImage:(id)arg1 forToolbarPosition:(long long)arg2 barMetrics:(long long)arg3 ;
-(void)setSeparatorColor:(UIColor *)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(long long)blurStyle;
-(UIColor *)separatorColor;
-(void)setShadowImage:(id)arg1 forToolbarPosition:(long long)arg2 ;
-(void)setBlurStyle:(long long)arg1 ;
-(UIView *)separatorLine;
-(void)setSeparatorLine:(UIView *)arg1 ;
-(void)_hostSeparatorInView:(id)arg1 ;
-(void)updateSeparatorVisibility;
@end

