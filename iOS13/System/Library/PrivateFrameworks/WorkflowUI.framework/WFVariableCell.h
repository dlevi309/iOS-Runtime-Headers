/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class WFVariable, UIImageView;

@interface WFVariableCell : UICollectionViewCell {

	WFVariable* _variable;
	UIImageView* _imageView;

}

@property (nonatomic,readonly) UIImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) WFVariable * variable;                  //@synthesize variable=_variable - In the implementation block
+(id)titleFont;
+(double)widthWithVariable:(id)arg1 height:(double)arg2 ;
-(WFVariable *)variable;
-(void)setVariable:(WFVariable *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(UIImageView *)imageView;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)tintColorDidChange;
-(void)updateVariableImage;
@end

