/*
* Generated on Monday, March 1, 2021 at 2:30:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setActive:(BOOL)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setProgress:(float)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(UIColor *)fillColor;
-(void)setEnabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 active:(BOOL)arg2 ;
-(void)setFillColor:(UIColor *)arg1 ;
-(void)_updateImages;
@end

