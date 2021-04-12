/*
* Generated on Thursday, January 14, 2021 at 2:24:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIControl.h>
#import <libobjc.A.dylib/PKPaletteViewSizeScaling.h>

@class UIButton, NSHashTable, NSString;

@interface PKPaletteButton : UIControl <PKPaletteViewSizeScaling> {

	BOOL _useCompactLayout;
	double _scalingFactor;
	UIButton* _button;
	NSHashTable* _observers;

}

@property (nonatomic,retain) UIButton * button;                     //@synthesize button=_button - In the implementation block
@property (nonatomic,retain) NSHashTable * observers;               //@synthesize observers=_observers - In the implementation block
@property (assign,nonatomic) BOOL useCompactLayout;                 //@synthesize useCompactLayout=_useCompactLayout - In the implementation block
@property (assign,nonatomic) double scalingFactor;                  //@synthesize scalingFactor=_scalingFactor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_preventsAppearanceProxyCustomization;
+(id)plusButton;
+(id)undoButton;
+(id)keyboardButton;
+(id)returnKeyButton;
+(id)redoButton;
+(id)ellipsisButton;
+(id)UCBButton;
+(id)emojiKeyboardButton;
-(UIButton *)button;
-(CGSize)intrinsicContentSize;
-(NSHashTable *)observers;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithImage:(id)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setButton:(UIButton *)arg1 ;
-(double)scalingFactor;
-(void)setSelected:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)setObservers:(NSHashTable *)arg1 ;
-(void)_updateUI;
-(void)setUseCompactLayout:(BOOL)arg1 ;
-(BOOL)useCompactLayout;
-(void)setScalingFactor:(double)arg1 ;
-(id)_backgroundColor;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)removeIntrinsicContentSizeObserver:(id)arg1 ;
-(void)addIntrinsicContentSizeObserver:(id)arg1 ;
-(id)_tintColorForCurrentState;
-(void)_notifyIntrinsicContentSizeDidChange;
-(CGAffineTransform)_buttonTransform;
@end

