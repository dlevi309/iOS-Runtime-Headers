/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor;

@interface UICheckeredPatternView : UIView {

	UIColor* _patternColor;
	double _scale;
	UIColor* _checkerColor;

}

@property (nonatomic,retain) UIColor * checkerColor;              //@synthesize checkerColor=_checkerColor - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)_canDrawContent;
-(void)didMoveToWindow;
-(void)updatePatternColor;
-(void)setCheckerColor:(UIColor *)arg1 ;
-(UIColor *)checkerColor;
@end

