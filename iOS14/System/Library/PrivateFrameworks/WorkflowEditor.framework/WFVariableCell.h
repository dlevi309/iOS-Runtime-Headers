/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
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
-(void)tintColorDidChange;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isAccessibilityElement;
-(UIImageView *)imageView;
-(unsigned long long)accessibilityTraits;
-(void)setVariable:(WFVariable *)arg1 ;
-(WFVariable *)variable;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)updateVariableImage;
@end

