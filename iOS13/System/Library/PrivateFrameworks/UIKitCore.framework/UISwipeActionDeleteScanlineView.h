/*
* Generated on Monday, March 1, 2021 at 2:30:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, UIColor;

@interface UISwipeActionDeleteScanlineView : UIView {

	UIView* _bottomLineWrapper;
	UIView* _topLine;
	UIView* _bottomLine;

}

@property (nonatomic,copy) UIColor * deleteLineColor; 
+(double)lineHeight;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDeleteLineColor:(UIColor *)arg1 ;
-(UIColor *)deleteLineColor;
@end

