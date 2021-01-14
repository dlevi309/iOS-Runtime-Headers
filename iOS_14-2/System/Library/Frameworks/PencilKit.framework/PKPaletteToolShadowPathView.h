/*
* Generated on Thursday, January 14, 2021 at 2:24:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIView.h>

@class CALayer, UIBezierPath;

@interface PKPaletteToolShadowPathView : UIView {

	CALayer* _largeShadow;
	CALayer* _smallShadow;

}

@property (nonatomic,readonly) UIBezierPath * toolShadowPath; 
@property (nonatomic,readonly) UIBezierPath * toolAndTipShadowPath; 
+(id)createPaletteToolShadowPathViewWithIdentifier:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIBezierPath *)toolShadowPath;
-(UIBezierPath *)toolAndTipShadowPath;
@end

