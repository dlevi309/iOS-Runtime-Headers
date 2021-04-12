/*
* Generated on Thursday, January 14, 2021 at 2:20:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor;

@interface UITextFieldBackgroundView : UIView {

	BOOL _active;
	BOOL _enabled;
	float _progress;
	UIColor* _fillColor;

}

@property (nonatomic,retain) UIColor * fillColor;              //@synthesize fillColor=_fillColor - In the implementation block
-(void)setFillColor:(UIColor *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 active:(BOOL)arg2 ;
-(void)setActive:(BOOL)arg1 ;
-(UIColor *)fillColor;
-(void)setBounds:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setProgress:(float)arg1 ;
-(void)setEnabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_updateImages;
@end

