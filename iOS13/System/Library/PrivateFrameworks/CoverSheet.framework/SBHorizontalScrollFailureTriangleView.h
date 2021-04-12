/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <CoverSheet/CoverSheet-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor;

@interface SBHorizontalScrollFailureTriangleView : UIView {

	int _style;
	BOOL _pointingRight;
	UIColor* _contentColor;

}

@property (nonatomic,retain) UIColor * contentColor;              //@synthesize contentColor=_contentColor - In the implementation block
-(void)drawRect:(CGRect)arg1 ;
-(void)setContentColor:(UIColor *)arg1 ;
-(UIColor *)contentColor;
-(id)initWithStyle:(int)arg1 recognizer:(id)arg2 forPoint:(CGPoint)arg3 withMaxVerticalOffset:(double)arg4 inView:(id)arg5 pointingRight:(BOOL)arg6 ;
@end

