/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView;

@interface UIAssistantBarSeparatorView : UIView {

	UIView* _innerSeparatorView;

}

@property (nonatomic,retain) UIView * innerSeparatorView;              //@synthesize innerSeparatorView=_innerSeparatorView - In the implementation block
+(double)preferredWidth;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(void)setInnerSeparatorView:(UIView *)arg1 ;
-(UIView *)innerSeparatorView;
-(BOOL)_usesLightStyle;
-(void)_updateVisualStyle;
@end

