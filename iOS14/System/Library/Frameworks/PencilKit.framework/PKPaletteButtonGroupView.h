/*
* Generated on Thursday, January 14, 2021 at 2:24:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PKPaletteViewSizeScaling.h>

@class NSArray, UIStackView, NSString;

@interface PKPaletteButtonGroupView : UIView <PKPaletteViewSizeScaling> {

	BOOL _useEqualInterItemSpacing;
	double _scalingFactor;
	NSArray* _buttons;
	UIStackView* _buttonStackView;

}

@property (nonatomic,retain) UIStackView * buttonStackView;              //@synthesize buttonStackView=_buttonStackView - In the implementation block
@property (nonatomic,copy) NSArray * buttons;                            //@synthesize buttons=_buttons - In the implementation block
@property (assign,nonatomic) long long axis; 
@property (assign,nonatomic) BOOL useEqualInterItemSpacing;              //@synthesize useEqualInterItemSpacing=_useEqualInterItemSpacing - In the implementation block
@property (assign,nonatomic) double scalingFactor;                       //@synthesize scalingFactor=_scalingFactor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAxis:(long long)arg1 ;
-(long long)axis;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSArray *)buttons;
-(double)scalingFactor;
-(void)_updateUI;
-(void)addButton:(id)arg1 ;
-(void)setScalingFactor:(double)arg1 ;
-(void)setButtons:(NSArray *)arg1 ;
-(void)setButtonStackView:(UIStackView *)arg1 ;
-(UIStackView *)buttonStackView;
-(void)removeAllButtons;
-(void)_updateContentScalingFactor;
-(long long)_buttonStackViewDistribution;
-(double)_buttonStackViewSpacing;
-(BOOL)useEqualInterItemSpacing;
-(void)addButtonsFromArray:(id)arg1 ;
-(void)setUseEqualInterItemSpacing:(BOOL)arg1 ;
@end

