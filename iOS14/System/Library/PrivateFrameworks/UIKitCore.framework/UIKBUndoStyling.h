/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class UIBlurEffect, UIVibrancyEffect, UIColor, UIFont;

@interface UIKBUndoStyling : NSObject {

	BOOL _undoRedoIconOnly;
	BOOL _isRTL;
	BOOL _cutCopyPasteIconOnly;
	BOOL _tooSmallForInstructionalText;
	UIBlurEffect* _backgroundBlurEffect;
	UIVibrancyEffect* _backgroundVibrancyEffect;
	UIColor* _HUDbackgroundColor;
	UIColor* _HUDShadowColor;
	UIColor* _buttonGlyphColorEnabled;
	UIColor* _buttonGlyphColorPressed;
	UIColor* _buttonGlyphColorDisabled;
	UIColor* _elementBackgroundColor;
	UIColor* _elementCoverColor;
	long long _appearance;

}

@property (nonatomic,retain) UIBlurEffect * backgroundBlurEffect;                          //@synthesize backgroundBlurEffect=_backgroundBlurEffect - In the implementation block
@property (nonatomic,retain) UIVibrancyEffect * backgroundVibrancyEffect;                  //@synthesize backgroundVibrancyEffect=_backgroundVibrancyEffect - In the implementation block
@property (nonatomic,retain) UIColor * HUDbackgroundColor;                                 //@synthesize HUDbackgroundColor=_HUDbackgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * HUDShadowColor;                                     //@synthesize HUDShadowColor=_HUDShadowColor - In the implementation block
@property (nonatomic,retain) UIColor * buttonGlyphColorEnabled;                            //@synthesize buttonGlyphColorEnabled=_buttonGlyphColorEnabled - In the implementation block
@property (nonatomic,retain) UIColor * buttonGlyphColorPressed;                            //@synthesize buttonGlyphColorPressed=_buttonGlyphColorPressed - In the implementation block
@property (nonatomic,retain) UIColor * buttonGlyphColorDisabled;                           //@synthesize buttonGlyphColorDisabled=_buttonGlyphColorDisabled - In the implementation block
@property (nonatomic,retain) UIColor * elementBackgroundColor;                             //@synthesize elementBackgroundColor=_elementBackgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * elementCoverColor;                                  //@synthesize elementCoverColor=_elementCoverColor - In the implementation block
@property (assign,nonatomic) BOOL undoRedoIconOnly;                                        //@synthesize undoRedoIconOnly=_undoRedoIconOnly - In the implementation block
@property (assign,nonatomic) BOOL cutCopyPasteIconOnly;                                    //@synthesize cutCopyPasteIconOnly=_cutCopyPasteIconOnly - In the implementation block
@property (assign,nonatomic) BOOL tooSmallForInstructionalText;                            //@synthesize tooSmallForInstructionalText=_tooSmallForInstructionalText - In the implementation block
@property (assign,nonatomic) BOOL isRTL;                                                   //@synthesize isRTL=_isRTL - In the implementation block
@property (assign,nonatomic) long long appearance;                                         //@synthesize appearance=_appearance - In the implementation block
@property (nonatomic,readonly) UIFont * undoInteractiveControlLabelFont; 
@property (nonatomic,readonly) UIFont * undoStateControlLabelFont; 
@property (nonatomic,readonly) UIFont * undoStateControlUnavailableLabelFont; 
-(BOOL)isRTL;
-(void)setAppearance:(long long)arg1 ;
-(void)setIsRTL:(BOOL)arg1 ;
-(UIBlurEffect *)backgroundBlurEffect;
-(id)vibrancyEffectForBlur:(id)arg1 ;
-(void)createDynamicColors;
-(id)initWithKeyboardAppearance:(long long)arg1 isRTL:(BOOL)arg2 ;
-(UIFont *)undoInteractiveControlLabelFont;
-(UIFont *)undoStateControlLabelFont;
-(UIFont *)undoStateControlUnavailableLabelFont;
-(void)setBackgroundBlurEffect:(UIBlurEffect *)arg1 ;
-(UIVibrancyEffect *)backgroundVibrancyEffect;
-(void)setBackgroundVibrancyEffect:(UIVibrancyEffect *)arg1 ;
-(long long)appearance;
-(UIColor *)HUDbackgroundColor;
-(void)setHUDbackgroundColor:(UIColor *)arg1 ;
-(UIColor *)HUDShadowColor;
-(void)setHUDShadowColor:(UIColor *)arg1 ;
-(UIColor *)buttonGlyphColorEnabled;
-(UIColor *)elementBackgroundColor;
-(void)setButtonGlyphColorEnabled:(UIColor *)arg1 ;
-(UIColor *)buttonGlyphColorPressed;
-(void)setButtonGlyphColorPressed:(UIColor *)arg1 ;
-(UIColor *)buttonGlyphColorDisabled;
-(void)setButtonGlyphColorDisabled:(UIColor *)arg1 ;
-(void)setElementBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)elementCoverColor;
-(void)setElementCoverColor:(UIColor *)arg1 ;
-(BOOL)undoRedoIconOnly;
-(void)setUndoRedoIconOnly:(BOOL)arg1 ;
-(BOOL)cutCopyPasteIconOnly;
-(void)setCutCopyPasteIconOnly:(BOOL)arg1 ;
-(BOOL)tooSmallForInstructionalText;
-(void)setTooSmallForInstructionalText:(BOOL)arg1 ;
@end

