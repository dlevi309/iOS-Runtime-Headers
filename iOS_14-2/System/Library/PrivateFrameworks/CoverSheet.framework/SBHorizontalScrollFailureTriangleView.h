/*
* Generated on Thursday, January 14, 2021 at 2:26:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIColor *)contentColor;
-(void)setContentColor:(UIColor *)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)initWithStyle:(int)arg1 recognizer:(id)arg2 forPoint:(CGPoint)arg3 withMaxVerticalOffset:(double)arg4 inView:(id)arg5 pointingRight:(BOOL)arg6 ;
@end

