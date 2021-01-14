/*
* Generated on Thursday, January 14, 2021 at 2:22:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSSet, UIButton, UIView, NSArray;

@interface PUReviewScreenControlBar : UIView {

	BOOL _shouldLayoutVertically;
	BOOL _useTransparentBackground;
	BOOL _useTransparentTouches;
	NSSet* _availableButtons;
	NSSet* _enabledButtons;
	UIButton* _editButton;
	UIButton* _markupButton;
	UIButton* _funEffectsButton;
	UIButton* _sendButton;
	UIView* _accessoryView;
	NSArray* __buttonsForLayout;
	CGPoint _layoutCenterAlignmentPoint;

}

@property (setter=_setButtonsForLayout:,nonatomic,retain) NSArray * _buttonsForLayout;              //@synthesize _buttonsForLayout=__buttonsForLayout - In the implementation block
@property (nonatomic,copy) NSSet * availableButtons;                                                //@synthesize availableButtons=_availableButtons - In the implementation block
@property (nonatomic,copy) NSSet * enabledButtons;                                                  //@synthesize enabledButtons=_enabledButtons - In the implementation block
@property (assign,nonatomic) BOOL shouldLayoutVertically;                                           //@synthesize shouldLayoutVertically=_shouldLayoutVertically - In the implementation block
@property (assign,nonatomic) CGPoint layoutCenterAlignmentPoint;                                    //@synthesize layoutCenterAlignmentPoint=_layoutCenterAlignmentPoint - In the implementation block
@property (assign,nonatomic) BOOL useTransparentBackground;                                         //@synthesize useTransparentBackground=_useTransparentBackground - In the implementation block
@property (assign,nonatomic) BOOL useTransparentTouches;                                            //@synthesize useTransparentTouches=_useTransparentTouches - In the implementation block
@property (nonatomic,readonly) UIButton * editButton;                                               //@synthesize editButton=_editButton - In the implementation block
@property (nonatomic,readonly) UIButton * markupButton;                                             //@synthesize markupButton=_markupButton - In the implementation block
@property (nonatomic,readonly) UIButton * funEffectsButton;                                         //@synthesize funEffectsButton=_funEffectsButton - In the implementation block
@property (nonatomic,readonly) UIButton * sendButton;                                               //@synthesize sendButton=_sendButton - In the implementation block
@property (nonatomic,retain) UIView * accessoryView;                                                //@synthesize accessoryView=_accessoryView - In the implementation block
+(id)supportedButtons;
+(CGRect)sendButtonAlignmentRectInHorizontalBounds:(CGRect)arg1 relativeCenterAlignmentPoint:(CGPoint)arg2 ;
+(CGRect)sendButtonAlignmentRectInVerticalBounds:(CGRect)arg1 relativeCenterAlignmentPoint:(CGPoint)arg2 controlsCount:(unsigned long long)arg3 ;
-(UIButton *)editButton;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIView *)accessoryView;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(NSSet *)enabledButtons;
-(void)setAccessoryView:(UIView *)arg1 ;
-(BOOL)_isButtonAvailable:(long long)arg1 ;
-(BOOL)_isButtonEnabled:(long long)arg1 ;
-(id)_buttonForButtonType:(long long)arg1 ;
-(void)_updateButtonVisibility;
-(void)_updateBackgroundTransparency;
-(NSSet *)availableButtons;
-(CGPoint)layoutCenterAlignmentPoint;
-(BOOL)useTransparentBackground;
-(BOOL)useTransparentTouches;
-(NSArray *)_buttonsForLayout;
-(void)_setButtonsForLayout:(id)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setUseTransparentTouches:(BOOL)arg1 ;
-(void)setShouldLayoutVertically:(BOOL)arg1 ;
-(void)setUseTransparentBackground:(BOOL)arg1 ;
-(void)setLayoutCenterAlignmentPoint:(CGPoint)arg1 ;
-(void)setEnabledButtons:(NSSet *)arg1 ;
-(void)setAvailableButtons:(NSSet *)arg1 ;
-(UIButton *)markupButton;
-(UIButton *)funEffectsButton;
-(void)layoutSubviews;
-(void)setFrame:(CGRect)arg1 ;
-(void)didMoveToWindow;
-(void)setCenter:(CGPoint)arg1 ;
-(UIButton *)sendButton;
-(void)_updateButtonText;
-(BOOL)shouldLayoutVertically;
@end

