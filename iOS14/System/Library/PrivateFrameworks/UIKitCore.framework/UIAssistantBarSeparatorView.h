/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(void)_updateVisualStyle;
-(void)setInnerSeparatorView:(UIView *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIView *)innerSeparatorView;
-(BOOL)_usesLightStyle;
@end

