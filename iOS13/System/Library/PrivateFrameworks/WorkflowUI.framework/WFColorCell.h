/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class NSString, WFFloatingView, UIView, WFGradient;

@interface WFColorCell : UICollectionViewCell {

	NSString* _colorName;
	WFFloatingView* _floatingView;
	UIView* _selectedRingView;

}

@property (nonatomic,readonly) WFFloatingView * floatingView;               //@synthesize floatingView=_floatingView - In the implementation block
@property (assign,nonatomic,__weak) UIView * selectedRingView;              //@synthesize selectedRingView=_selectedRingView - In the implementation block
@property (nonatomic,retain) WFGradient * gradient; 
@property (nonatomic,copy) NSString * colorName;                            //@synthesize colorName=_colorName - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id)accessibilityLabel;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)setGradient:(WFGradient *)arg1 ;
-(WFGradient *)gradient;
-(NSString *)colorName;
-(WFFloatingView *)floatingView;
-(void)setColorName:(NSString *)arg1 ;
-(UIView *)selectedRingView;
-(void)setSelectedRingView:(UIView *)arg1 ;
@end

