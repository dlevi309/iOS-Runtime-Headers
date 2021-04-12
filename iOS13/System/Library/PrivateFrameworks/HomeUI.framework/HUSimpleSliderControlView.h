/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/HUControlView.h>

@protocol HUControlViewDelegate;
@class NSString, UISlider;

@interface HUSimpleSliderControlView : UIView <HUControlView> {

	NSString* _identifier;
	id<HUControlViewDelegate> _delegate;
	UISlider* _slider;

}

@property (nonatomic,readonly) UISlider * slider;                                    //@synthesize slider=_slider - In the implementation block
@property (assign,nonatomic) float minValue; 
@property (assign,nonatomic) float maxValue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * identifier;                                    //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic,__weak) id<HUControlViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id value; 
@property (assign,getter=isDisabled,nonatomic) BOOL disabled; 
@property (assign,nonatomic) BOOL canBeHighlighted; 
+(Class)valueClass;
-(id<HUControlViewDelegate>)delegate;
-(void)setDelegate:(id<HUControlViewDelegate>)arg1 ;
-(NSString *)identifier;
-(id)value;
-(void)setValue:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(BOOL)isDisabled;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setDisabled:(BOOL)arg1 ;
-(void)_sliderValueChanged:(id)arg1 ;
-(UISlider *)slider;
-(float)maxValue;
-(void)setMaxValue:(float)arg1 ;
-(float)minValue;
-(void)setMinValue:(float)arg1 ;
-(void)_sliderTouchUp:(id)arg1 ;
-(void)_sliderTouchDown:(id)arg1 ;
@end

