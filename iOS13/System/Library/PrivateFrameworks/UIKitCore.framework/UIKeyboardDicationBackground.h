/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray, UIKeyboardDicationBackgroundGradientView;

@interface UIKeyboardDicationBackground : UIView {

	NSArray* _shadows;
	UIKeyboardDicationBackgroundGradientView* _gradient;

}

@property (nonatomic,retain) UIKeyboardDicationBackgroundGradientView * gradient;              //@synthesize gradient=_gradient - In the implementation block
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setGradient:(UIKeyboardDicationBackgroundGradientView *)arg1 ;
-(UIKeyboardDicationBackgroundGradientView *)gradient;
-(id)shadows;
@end

