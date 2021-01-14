/*
* Generated on Thursday, January 14, 2021 at 2:20:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIColor *)deleteLineColor;
-(void)setDeleteLineColor:(UIColor *)arg1 ;
@end

