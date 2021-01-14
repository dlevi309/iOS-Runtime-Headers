/*
* Generated on Thursday, January 14, 2021 at 2:28:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/_TVVisualEffectView.h>

@class UIView;

@interface _TVVibrancyContainerView : _TVVisualEffectView {

	UIView* _containedView;

}

@property (nonatomic,__weak,readonly) UIView * containedView;              //@synthesize containedView=_containedView - In the implementation block
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIView *)containedView;
-(id)initWithEffect:(id)arg1 containingView:(id)arg2 ;
@end

