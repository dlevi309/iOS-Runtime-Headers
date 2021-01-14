/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)accessibilityLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isAccessibilityElement;
-(void)setSelected:(BOOL)arg1 ;
-(unsigned long long)accessibilityTraits;
-(void)layoutSubviews;
-(NSString *)colorName;
-(void)setGradient:(WFGradient *)arg1 ;
-(void)setColorName:(NSString *)arg1 ;
-(WFGradient *)gradient;
-(void)setHighlighted:(BOOL)arg1 ;
-(WFFloatingView *)floatingView;
-(UIView *)selectedRingView;
-(void)setSelectedRingView:(UIView *)arg1 ;
@end

